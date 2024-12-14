
// DiskDlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "Disk.h"
#include "DiskDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{

}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	// Связывание элементов управления с переменными
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Диалоговое окно CDiskDlg
const double dr = 25.0; // Константа для расчёта дисков


CDiskDlg::CDiskDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DISK_DIALOG, pParent)
	, edit_e(200000) // Модуль упругости
	, edit_mu(0.3)   // Коэффициент Пуассона
	, edit_at(250)   // Параметр материала
	, edit_alfa(1.5 * 0.00001) // Коэффициент теплового расширения
	, edit_ro(8000)  // Плотность материала
	, edit_nt(1.2)   // Коэффициент натяжения
	, edit_w(200)    // Угловая скорость
	, edit_p(100)    // Давление
	, edit_ta(100)   // Температура в начале
	, edit_tb(400)   // Температура в конце
	, edit_a(40.0)   // Радиус отверстия
	, edit_b(400)    // Внешний радиус
	, edit_c(50)     // Минимальный радиус
	, edit_h0(100)   // Начальная высота
	, edit_hk(50)    // Конечная высота
	, edit_natyg(1)  // Параметр натяга
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME); // Загрузка значка приложения
}


void CDiskDlg::DoDataExchange(CDataExchange* pDX)
{
	// Привязка переменных к элементам управления
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_E, edit_e);
	DDX_Text(pDX, IDC_EDIT_Mu, edit_mu);
	DDX_Text(pDX, IDC_EDIT_At, edit_at);
	DDX_Text(pDX, IDC_EDIT_Alfa, edit_alfa);
	DDX_Text(pDX, IDC_EDIT_Ro, edit_ro);
	DDX_Text(pDX, IDC_EDIT_Nt, edit_nt);
	DDX_Text(pDX, IDC_EDIT_W, edit_w);
	DDX_Text(pDX, IDC_EDIT_P, edit_p);
	DDX_Text(pDX, IDC_EDIT_Ta, edit_ta);
	DDX_Text(pDX, IDC_EDIT_Tb, edit_tb);
	DDX_Text(pDX, IDC_EDIT_a, edit_a);
	DDX_Text(pDX, IDC_EDIT_b, edit_b);
	DDX_Text(pDX, IDC_EDIT_c, edit_c);
	DDX_Text(pDX, IDC_EDIT_h0, edit_h0);
	DDX_Text(pDX, IDC_EDIT_hk, edit_hk);
	DDX_Text(pDX, IDC_EDIT_natyg, edit_natyg);
}

BEGIN_MESSAGE_MAP(CDiskDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT_E, &CDiskDlg::OnEnChangeEditE)
	ON_EN_CHANGE(IDC_EDIT_Mu, &CDiskDlg::OnEnChangeEditMu)
	ON_EN_CHANGE(IDC_EDIT_At, &CDiskDlg::OnEnChangeEditAt)
	ON_EN_CHANGE(IDC_EDIT_Alfa, &CDiskDlg::OnEnChangeEditAlfa)
	ON_EN_CHANGE(IDC_EDIT_Ro, &CDiskDlg::OnEnChangeEditRo)
	ON_EN_CHANGE(IDC_EDIT_Nt, &CDiskDlg::OnEnChangeEditNt)
	ON_EN_CHANGE(IDC_EDIT_W, &CDiskDlg::OnEnChangeEditW)
	ON_EN_CHANGE(IDC_EDIT_P, &CDiskDlg::OnEnChangeEditP)
	ON_EN_CHANGE(IDC_EDIT_Ta, &CDiskDlg::OnEnChangeEditTa)
	ON_EN_CHANGE(IDC_EDIT_Tb, &CDiskDlg::OnEnChangeEditTb)
	ON_EN_CHANGE(IDC_EDIT_a, &CDiskDlg::OnEnChangeEdita)
	ON_EN_CHANGE(IDC_EDIT_b, &CDiskDlg::OnEnChangeEditb)
	ON_EN_CHANGE(IDC_EDIT_c, &CDiskDlg::OnEnChangeEditc)
	ON_EN_CHANGE(IDC_EDIT_h0, &CDiskDlg::OnEnChangeEdith0)
	ON_EN_CHANGE(IDC_EDIT_hk, &CDiskDlg::OnEnChangeEdithk)
	ON_EN_CHANGE(IDC_EDIT_natyg, &CDiskDlg::OnEnChangeEditnatyg)
	ON_BN_CLICKED(IDC_BUTTON1, &CDiskDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &CDiskDlg::OnBnClickedOk)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()


// Обработчики сообщений CDiskDlg

BOOL CDiskDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	
	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок


	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CDiskDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CDiskDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		// Основная отрисовка
		CPaintDC dc(this);

		// Получение размеров клиентской области
		CRect clientOkno;
		GetClientRect(&clientOkno);

		// Масштабирование
		zoom = (clientOkno.Width() / 3.0) / edit_b;

		// Определение левого края окна
		CRect rectOkno;
		GetWindowRect(&rectOkno);
		lBorder = rectOkno.Width() / 1.7;

		// Расчёт точек, если их недостаточно
		if (points.size() < nPoints) {
			points.clear();
			for (int i = 0; i < nPoints; i++) {
				points.push_back({
					(int)(edit_c + (edit_b - edit_c) / (nPoints - 1) * i),
					(int)((edit_h0 / 2) - (edit_h0 / 2) / 2 / (nPoints - 1) * i)
					});
			}
		}


		// Линии фона
		// Создаем серый фон для линий сетки
		CPen penFon;
		penFon.CreatePen(PS_SOLID, 3, RGB(200, 200, 200));
		CPen* old_pen1 = dc.SelectObject(&penFon);
		for (int i = 0; i < points.size(); i++) {
			// Переводим координаты точек в глобальную систему и рисуем линии
			CPoint tmpoint0 = toGlobal(points[i].x, 0);
			CPoint tmpoint1 = toGlobal(points[i].x, hMax);
			dc.MoveTo(tmpoint0);
			dc.LineTo(tmpoint1);
		}

		// Создаем черные линии для основных элементов
		CPen pen1;
		pen1.CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
		CPen* old_pen = dc.SelectObject(&pen1);

		// Рисуем контур диска
		// Начинаем с первой точки и последовательно соединяем остальные
		// Добавляем эллипсы на каждой точке для визуального обозначения

		dc.MoveTo(toGlobal(0, points[0].y));
		for (int i = 0; i < nPoints; i++) {
			CPoint tmpPt = toGlobal(points[i].x, points[i].y);
			dc.LineTo(tmpPt.x, tmpPt.y);
			CRect lDrawRect;
			lDrawRect.top = tmpPt.y - pointsSize;
			lDrawRect.left = tmpPt.x - pointsSize;
			lDrawRect.bottom = tmpPt.y + pointsSize;
			lDrawRect.right = tmpPt.x + pointsSize;
			dc.Ellipse(lDrawRect);
		}
		dc.LineTo(toGlobal(edit_b, 0));


		// Отрисовка осей
		// Z
		dc.MoveTo(toGlobal(0, hMax + 10));
		dc.LineTo(toGlobal(0, 0));
		dc.MoveTo(toGlobal(0, hMax + 10));
		dc.LineTo(toGlobal(5, hMax + 5));
		dc.MoveTo(toGlobal(0, hMax + 10));
		dc.LineTo(toGlobal(-5, hMax + 5));
		// R
		dc.MoveTo(toGlobal(edit_b + 10, 0));
		dc.LineTo(toGlobal(0, 0));
		dc.MoveTo(toGlobal(edit_b + 10, 0));
		dc.LineTo(toGlobal(edit_b + 5, 5));
		dc.MoveTo(toGlobal(edit_b + 10, 0));
		dc.LineTo(toGlobal(edit_b + 5, -5));

		// Отрисока линии отверстия
		dc.MoveTo(toGlobal(edit_a, 0));
		dc.LineTo(toGlobal(edit_a, points[0].y));
		
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CDiskDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
// Преобразование из глобальных координат в локальные
CPoint CDiskDlg::toLocal(int x, int y)
{
	CPoint lPoint;
	lPoint.x = (x - lBorder) / zoom;
	lPoint.y = hMax - ((y - tBorder) / zoom);
	return lPoint;
}
// Преобразование из локальных координат в глобальные
CPoint CDiskDlg::toGlobal(int x, int y)
{
	CPoint gPoint;
	gPoint.x = x * zoom + lBorder;
	gPoint.y = tBorder + (hMax - y) * zoom; //edit_h0 - ((y - tBorder) / zoom);
	return gPoint;
}


void CDiskDlg::OnBnClickedButton1()
{
	double sigma_max = 100000.0;  // Максимально допустимое напряжение
	bool diskIsStrongEnough = true; // Флаг прочности диска
	double sigma_max_value = 0.0;   // Максимальное рассчитанное напряжение
	CString outputText;
	UpdateData(TRUE);

	double r = edit_a; // Начальный радиус
	double u = 0.0;   // Начальное радиальное перемещение
	double Nr = 0.0;  // Радиальная сила
	CString tempText;
	tempText.Format(_T("%-10s %-10s %-10s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n"),
		_T("r"), _T("u"), _T("Nr"), _T("Nt"), _T("sigma_r"), _T("sigma_theta"), _T("epsilon_r"), _T("epsilon_t"), _T("deltaT"), _T("theta"));
	outputText += tempText;
	while (r <= edit_b) {
		// Рассчитаем температурное расширение
		double deltaT = calc_deltaT(r, edit_a, edit_b);
		double theta = edit_alfa * deltaT;

		// Рассчитаем радиальные и окружные напряжения
		double sigma_r = calc_sigma_r(Nr);  // Радиальные напряжения
		double sigma_theta = calc_sigma_theta(u, r, sigma_r, deltaT);  // Окружные напряжения

		// Рассчитаем комбинированное напряжение по формуле
		double sigma_i = sqrt(pow(sigma_r, 2) - sigma_r * sigma_theta + pow(sigma_theta, 2));

		// Проверка на максимальное комбинированное напряжение
		if (sigma_i > sigma_max_value) {
			sigma_max_value = sigma_i;
		}

		// Проверка на прочность
		if (sigma_i > sigma_max) {
			diskIsStrongEnough = false;
		}

		// Рассчитаем деформации
		double epsilon_r = calc_epsilon_r(Nr, r, u, theta);
		double epsilon_t = calc_epsilon_t(u, r);

		// Рассчитаем окружную силу Nt
		double Nt = calc_Nt(u, Nr, r, theta);

		// Проверка на прочность
		if (sigma_r > sigma_max || sigma_theta > sigma_max) {
			diskIsStrongEnough = false;
		}

		// Вывод текущих значений
		tempText.Format(_T("%-10.2f %-10.2f %-10.2f %-15.2f %-15.2f %-15.2f %-15.2f %-15.2f %-15.2f %-15.2f\n"),
			r, u, Nr, Nt, sigma_r, sigma_theta, epsilon_r, epsilon_t, deltaT, theta);
		outputText += tempText;


		// Шаг Рунге-Кутта для обновления перемещения и силы
		// 
		// 1. Оценка первой производной перемещения и силы (k1) на текущем шаге
		// du_dr и dNr_dr — это функции, которые вычисляют производные перемещения и силы по радиусу.
		double k1_u = du_dr(r, u, Nr, deltaT);
		double k1_Nr = dNr_dr(r, u, Nr, deltaT);

		// 2. Оценка второй производной (k2) с использованием половины шага и первой оценки изменений
		// Это позволяет скорректировать оценку, учитывая уже некоторую часть изменения перемещения и силы.
		double k2_u = du_dr(r + dr / 2.0, u + k1_u * dr / 2.0, Nr + k1_Nr * dr / 2.0, deltaT);
		double k2_Nr = dNr_dr(r + dr / 2.0, u + k1_u * dr / 2.0, Nr + k1_Nr * dr / 2.0, deltaT);

		// 3. Оценка третьей производной (k3) с новой корректировкой, снова используя половину шага
		// Этап необходим для более точной оценки изменения перемещения и силы, также на основе предыдущих результатов.
		double k3_u = du_dr(r + dr / 2.0, u + k2_u * dr / 2.0, Nr + k2_Nr * dr / 2.0, deltaT);
		double k3_Nr = dNr_dr(r + dr / 2.0, u + k2_u * dr / 2.0, Nr + k2_Nr * dr / 2.0, deltaT);

		// 4. Оценка четвёртой производной (k4) с использованием полного шага
		// Теперь перемещение и сила обновляются на основе значений, полученных на третьем шаге.
		double k4_u = du_dr(r + dr, u + k3_u * dr, Nr + k3_Nr * dr, deltaT);
		double k4_Nr = dNr_dr(r + dr, u + k3_u * dr, Nr + k3_Nr * dr, deltaT);


		// 5. Итоговое обновление перемещения и силы
		// Метод Рунге-Кутты 4-го порядка использует взвешенную сумму всех оценок (k1, k2, k3, k4)
		u += (k1_u + 2 * k2_u + 2 * k3_u + k4_u) * dr / 6.0;
		Nr += (k1_Nr + 2 * k2_Nr + 2 * k3_Nr + k4_Nr) * dr / 6.0;

		// Увеличиваем радиус на шаг
		r += dr;
		// Проверка начального радиуса
		if (edit_a <= 0.0) {
			AfxMessageBox(_T("Ошибка: Начальный радиус должен быть больше нуля."));
			return;
		}

		

		// Проверка шага интегрирования
		if (dr <= 0.0) {
			AfxMessageBox(_T("Ошибка: Шаг интегрирования должен быть больше нуля."));
			return;
		}

		// Проверка коэффициента теплового расширения
		if (edit_alfa <= 0.0) {
			AfxMessageBox(_T("Ошибка: Коэффициент теплового расширения должен быть больше нуля."));
			return;
		}

		// Проверка допустимого напряжения
		if (sigma_max <= 0.0) {
			AfxMessageBox(_T("Ошибка: Максимальное допустимое напряжение должно быть больше нуля."));
			return;
		}
		// Проверка шага интегрирования dr, что он положителеный и не превышает разницу между конечным и начальным радиусом
		if (dr <= 0.0 || dr > (edit_b - edit_a)) {
			AfxMessageBox(_T("Ошибка: Шаг интегрирования должен быть положительным и меньше разницы между конечным и начальным радиусом."));
			return;
		}

		if (fabs(sigma_r) > sigma_max) {
			AfxMessageBox(_T("Ошибка: Радиальное напряжение превысило предел прочности."));
			return;
		}

		if (fabs(sigma_theta) > sigma_max) {
			AfxMessageBox(_T("Ошибка: Окружное напряжение превысило предел прочности."));
			return;
		}

		if (sigma_i > sigma_max) {
			AfxMessageBox(_T("Ошибка: Комбинированное напряжение превысило допустимый предел."));
			return;
		}

		if (fabs(epsilon_r) > 0.5) {
			AfxMessageBox(_T("Ошибка: Радиальная деформация слишком велика."));
			return;
		}

		if (fabs(epsilon_t) > 0.5) {
			AfxMessageBox(_T("Ошибка: Окружная деформация слишком велика."));
			return;
		}

		if (fabs(u) > 0.1 * r) {
			AfxMessageBox(_T("Ошибка: Радиальное перемещение слишком велико относительно радиуса."));
			return;
		}

		
		if (edit_h0 <= 0) {
			AfxMessageBox(_T("Ошибка: Начальная высота диска должна быть больше нуля."));
			return;
		}

		if (edit_hk <= 0) {
			AfxMessageBox(_T("Ошибка: Конечная высота диска должна быть больше нуля."));
			return;
		}

		if (edit_hk > edit_h0) {
			AfxMessageBox(_T("Ошибка: Конечная высота диска не может быть больше начальной."));
			return;
		}

		if (edit_b < (edit_h0 * 2)) {
			AfxMessageBox(_T("Ошибка: Высота диска не может быть в два раза больше внешнего радиуса."));
			return;
		}
	}

	
	
	CString finalText;
	//finalText.Format(_T("Максимальное напряжение в диске: %.2f МПа\n"), sigma_max_value);

	
	if (sigma_max_value <= sigma_max) {
		finalText.Append(_T("Расчёт завершён успешно. Условие прочности выполняется. Условие прочности."));
	}
	else {
		finalText.Append(_T("Расчёт завершён. Условие прочности НЕ выполняется! Измените исходные данные."));
	}

	AfxMessageBox(finalText);
}

void CDiskDlg::OnEnChangeEditE()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditMu()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditAt()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditAlfa()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditRo()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditNt()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditW()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditP()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditTa()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditTb()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEdita()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditb()
{
	//Invalidate();
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditc()
{
	Invalidate();
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEdith0()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEdithk()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::OnEnChangeEditnatyg()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CDiskDlg::buildDisk()
{
	using namespace std;
	using namespace Kompas6API5;

	KompasObjectPtr pKompasApp5;
	ksPartPtr pPart;// = PartDoc->GetTopPart();
	ksDocument3DPtr pDoc;
	ksDocument2DPtr p2DDoc;
	ksEntityPtr pSketch;
	ksSketchDefinitionPtr pSketchDef;
	ksEntityPtr pRotate;
	ksBossRotatedDefinitionPtr pRotDef;


	CComPtr<IUnknown> pKompasAppUnk = nullptr;
	if (!pKompasApp5)
	{
		CLSID InvAppClsid;
		HRESULT hRes = CLSIDFromProgID(L"Kompas.Application.5", &InvAppClsid);
		if (FAILED(hRes)) {
			pKompasApp5 = nullptr;
			return;
		}

		hRes = ::GetActiveObject(InvAppClsid, NULL, &pKompasAppUnk);
		if (FAILED(hRes)) {
			hRes = CoCreateInstance(InvAppClsid, NULL, CLSCTX_LOCAL_SERVER, __uuidof(IUnknown), (void**)&pKompasAppUnk);
			if (FAILED(hRes)) {
				pKompasApp5 = nullptr;
				return;
			}
		}
		hRes = pKompasAppUnk->QueryInterface(__uuidof(KompasObject), (void**)&pKompasApp5);
		if (FAILED(hRes)) {
			return;
		}
	}

	pKompasApp5->Visible = true;

	pDoc = pKompasApp5->Document3D();
	pDoc->Create(false, true);
	pPart = pDoc->GetPart(pTop_Part);

	pSketch = pPart->NewEntity(o3d_sketch);
	pSketchDef = pSketch->GetDefinition();
	pSketchDef->SetPlane(pPart->GetDefaultEntity(o3d_planeXOZ));
	pSketch->Create();
	p2DDoc = pSketchDef->BeginEdit();

	vector <CPoint> tmpPoints = points;
	tmpPoints.insert(tmpPoints.begin(), { edit_a, 0 });
	tmpPoints[1] = { (int) edit_a, (int) points[0].y };
	tmpPoints.push_back({ points[points.size() - 1].x, 0 });
	tmpPoints.push_back({ (int)edit_a, 0 });
	for (int i = 1; i < tmpPoints.size(); i++) {
		p2DDoc->ksLineSeg(tmpPoints[i - 1].x, -tmpPoints[i - 1].y, tmpPoints[i].x, -tmpPoints[i].y, 1);
	}

	p2DDoc->ksLineSeg(0, -10, 0, 10, 3);

	pSketchDef->EndEdit();

	pRotate = pPart->NewEntity(o3d_bossRotated);

	pRotDef = pRotate->GetDefinition();
	pRotDef->SetSketch(pSketch);
	pRotDef->SetSideParam(TRUE, 360);

	pRotate->Create();

	//отзеркаливание

	ksEntityPtr pZerkCopy = pPart->NewEntity(o3d_mirrorOperation);
	ksMirrorCopyDefinitionPtr pZerkCopyDef = pZerkCopy->GetDefinition();
	pZerkCopyDef->SetPlane(pPart->GetDefaultEntity(o3d_planeXOY));
	ksEntityCollectionPtr fl = pZerkCopyDef->GetOperationArray();
	fl->Clear();
	fl->Add(pRotate);
	pZerkCopy->Create();
}





void CDiskDlg::OnBnClickedOk()
{
	// TODO: добавьте свой код обработчика уведомлений
	buildDisk();
	CDialogEx::OnOK();
}





void CDiskDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	lDown = true;
	for (int i = 0; i < points.size(); i++) {
		CPoint tmpoint = toGlobal(points[i].x, points[i].y);
		if (tmpoint.x - pogreshn < point.x && point.x < tmpoint.x + pogreshn)// &&
			//tmpoint.y - pogreshn < point.y && point.y < tmpoint.y + pogreshn) 
		{
			focusedPoint = i;
			oldMouse = point;
			mouseY = toLocal(point.x, point.y).y;
			Invalidate();
			break;
		}
	}

	CDialogEx::OnLButtonDown(nFlags, point);
}


void CDiskDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	lDown = false;
	if (focusedPoint != -1)
	{
		points[focusedPoint].y = toLocal(point.x, point.y).y;
		if (points[focusedPoint].y < 0) {
			points[focusedPoint].y = 0;
		}
		else if (points[focusedPoint].y > hMax) {
			points[focusedPoint].y = hMax;
		}
		focusedPoint = -1;
		Invalidate();
	}

	CDialogEx::OnLButtonUp(nFlags, point);
}


void CDiskDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	if (lDown) {
		mouseY = toLocal(point.x, point.y).y;
		Invalidate();
	}
	else
	{
		for (int i = 0; i < points.size(); i++) {
			CPoint tmpoint = toGlobal(points[i].x, points[i].y);
			if (tmpoint.x - pogreshn < point.x && point.x < tmpoint.x + pogreshn &&
				tmpoint.y - pogreshn < point.y && point.y < tmpoint.y + pogreshn)
			{
				if (mouseY != points[i].y) {
					mouseY = points[i].y;
					Invalidate();
				}
				break;
			}
		}
	}

	CDialogEx::OnMouseMove(nFlags, point);
}
