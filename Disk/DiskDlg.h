
// DiskDlg.h: файл заголовка
//
#include <vector>
#include "ksConstants.h"
#include "ksConstants3D.h"

#import "kAPI5.tlb"

#pragma once


// Диалоговое окно CDiskDlg
class CDiskDlg : public CDialogEx
{
// Создание
public:
	CDiskDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DISK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditE();
	afx_msg void OnEnChangeEditMu();
	afx_msg void OnEnChangeEditAt();
	afx_msg void OnEnChangeEditAlfa();
	afx_msg void OnEnChangeEditRo();
	afx_msg void OnEnChangeEditNt();
	afx_msg void OnEnChangeEditW();
	afx_msg void OnEnChangeEditP();
	afx_msg void OnEnChangeEditTa();
	afx_msg void OnEnChangeEditTb();
	afx_msg void OnEnChangeEdita();
	afx_msg void OnEnChangeEditb();
	afx_msg void OnEnChangeEditc();
	afx_msg void OnEnChangeEdith0();
	afx_msg void OnEnChangeEdithk();
	afx_msg void OnEnChangeEditnatyg();
	afx_msg void OnBnClickedButton1();
	double edit_e;
	double edit_mu;
	double edit_at;
	double edit_alfa;
	double edit_ro;
	double edit_nt;
	double edit_w;
	double edit_p;
	double edit_ta;
	double edit_tb;
	double edit_a;
	double edit_b;
	double edit_c;
	double edit_h0;
	double edit_hk;
	double edit_natyg;
	double k = 1;
	/*CEdit edit_e;
	CEdit edit_mu;
	CEdit edit_at;
	CEdit edit_alfa;
	CEdit edit_ro;
	CEdit edit_nt;
	CEdit edit_w;
	CEdit edit_p;
	CEdit edit_ta;
	CEdit edit_tb;
	CEdit edit_a;
	CEdit edit_b;
	CEdit edit_c;
	CEdit edit_h0;
	CEdit edit_hk;
	CEdit edit_natyg;*/
	afx_msg void OnBnClickedOk();


	//Risovanie vars
	std::vector<CPoint> points;
	int nPoints = 11;
	int pointsSize = 8;
	int lBorder = 1500;
	int tBorder = 100;
	int zoom = 3;
	int hMax = 150;
	CPoint CDiskDlg::toLocal(int x, int y);
	CPoint CDiskDlg::toGlobal(int x, int y);
	void CDiskDlg::buildDisk();

	double calc_deltaT(double r, double edit_a, double edit_b) {
		double T_current = edit_ta + (edit_tb - edit_ta) * (r - edit_a) / (edit_b - edit_a);
		return T_current;
	}

	// Функция для расчета производной перемещения du/dr
	double du_dr(double r, double u, double Nr, double deltaT) {
		double theta = edit_alfa * deltaT;  // Угловое перемещение, зависящее от температуры
		return (-edit_mu * u / r) + (1 - edit_mu * edit_mu) * Nr / (edit_e * edit_c) + (1 + edit_mu) * theta;
	}

	// Функция для расчета производной радиальных сил dNr/dr
	double dNr_dr(double r, double u, double Nr, double deltaT) {
		double theta = edit_alfa * deltaT;
		return edit_e * edit_c * u / (r * r) - (1 - edit_mu) * Nr / r - k * r * edit_c - edit_e * edit_c * theta / r;
	}

	// Функция для расчета радиальных напряжений
	double calc_sigma_r(double Nr) {
		return Nr / edit_c;
	}

	// Функция для расчета окружных напряжений
	double calc_sigma_theta(double u, double r, double sigma_r, double deltaT) {
		double theta = edit_alfa * deltaT;
		return edit_mu * sigma_r + edit_e * (u / r - theta);
	}
	double calc_epsilon_r(double Nr, double r, double u, double theta) {
		return (1 - edit_mu * edit_mu) * Nr / (edit_e * edit_c) - (edit_mu * u / r) + (1 + edit_mu) * theta;
	}

	// Функция для расчета окружной деформации epsilon_t
	double calc_epsilon_t(double u, double r) {
		return u / r;
	}
	double calc_Nt(double u, double Nr, double r, double theta) {
		return edit_mu * Nr + edit_e * edit_c * (u / r - theta);
	}
};


