#pragma once

#define ID_FILE_NEW     0xE100
#define ID_FILE_OPEN    0xE101
#define ID_FILE_CLOSE   0xE102
#define ID_FILE_SAVE    0xE103
#define ID_FILE_SAVE_AS 0xE104
#define ID_FILE_PRINT_SETUP   0xE106
#define ID_FILE_PRINT         0xE107
#define ID_FILE_PRINT_PREVIEW 0xE109
#define ID_FILE_SEND_MAIL 0xE10C
#define ID_EDIT_CLEAR         0xE120
#define ID_EDIT_CLEAR_ALL     0xE121
#define ID_EDIT_COPY          0xE122
#define ID_EDIT_CUT           0xE123
#define ID_EDIT_FIND          0xE124
#define ID_EDIT_PASTE         0xE125
#define ID_EDIT_REPEAT        0xE128
#define ID_EDIT_REPLACE       0xE129
#define ID_EDIT_SELECT_ALL    0xE12A
#define ID_EDIT_UNDO          0xE12B
#define ID_EDIT_REDO          0xE12C
#define ID_WINDOW_NEW 0xE130
#define ID_APP_ABOUT  0xE140
#define ID_HELP_INDEX 0xE142
#define ID_HELP_FINDER 0xE143
#define ID_CONTEXT_HELP 0xE145
#define ID_HELP         0xE146



/// Перечень интерфейсов событий.
enum ksNotifyType : int
{
  ntKompasObjectNotify            = 1,  ///< События для приложения КОМПАС.
  ntDocumentFileNotify            = 2,  ///< События для документов. Работа с файлом.
  ntStampNotify                   = 3,  ///< События для основной надписи документа.
  ntObject2DNotify                = 4,  ///< События для объекта 2D документа.
  ntSelectionMngNotify            = 5,  ///< События для 2D, 3D документов - менеджер селектирования.
  ntSpcObjectNotify               = 6,  ///< События для объекта спецификации.
  ntSpcDocumentNotify             = 7,  ///< События для документа спецификации.
  ntSpecificationNotify           = 8,  ///< События для спецификации.
  ntDocument3DNotify              = 9,  ///< События для 3D документа.
  ntObject3DNotify                = 10,  ///< События для объекта 3D документа.
  ntDocument2DNotify              = 11,  ///< События для 2D документа.
  ntPropertyManagerNotify         = 12,  ///< События для панели свойств.
  ntPropertyUserControlNotifyEnum = 13,  ///< События пользовательского элемента управления.
  ntDocumentFrameNotify           = 14,  ///< События для окна документа.
  ntViewsAndLayersManagerNotify   = 15,  ///< События для менеджера видов и слоев.
  ntLibraryManagerNotify          = 16,  ///< События для менеджера библиотек.
  ntLayoutSheetsNotify            = 17,  ///< События для листов оформления.
  ntProcess2DNotify               = 18,  ///< События процесса 2D.
  ntProcess3DNotify               = 19,  ///< События процесса 3D.
  ntContentDialogNotify           = 20,  ///< События диалога с внешним наполнением.
  ntFindObjectParametersNotify    = 21,  ///< События функции поиска объектов под курсором.
  ntProcess3DManipulatorsNotify   = 22,  ///< События манипуляторов процесса 3D.
  ntPLMObjectNotify               = 23,  ///< События объектов версионирования.
  ntFindObject3DParametersNotify  = 24   ///< Параметры поиска объектов 3D.
};


/// События для KompasObject и IApplication.
enum ksKompasObjectNotifyEnum : int
{
  koCreateDocument        = 1,  ///< Документ создан.
  koBeginOpenDocument     = 2,  ///< Начало открытия документа.
  koOpenDocument          = 3,  ///< Документ открыт.
  koChangeActiveDocument  = 4,  ///< Переключение на другой активный документ.
  koApplicatinDestroy     = 5,  ///< Закрытие приложения.
  koBeginCreate           = 6,  ///< Начало создания документа(до диалога выбора типа).
  koBeginOpenFile         = 7,  ///< Начало открытия документа(до диалога выбора имени).
  koBeginCloseAllDocument = 8,  ///< Начало закрытия всех открытых документов.
  koKeyDown               = 9,  ///< Событие нажатия клавиатуры. Нажали клавишу.
  koKeyUp                 = 10,  ///< Событие нажатия клавиатуры. Отпустили клавишу.
  koKeyPress              = 11,  ///< Событие нажатия клавиатуры. Нажали клавишу.
  koBeginRequestFiles     = 12,  ///< Событие запроса имен файлов.
  koBeginChoiceMaterial   = 13,  ///< Начало выбора материала.
  koChoiceMaterial        = 14,  ///< Закончен выбор материала.
  koIsNeedConvertToSavePrevious = 15,  ///< Начало сохранения документа в предыдущую верию.
  koBeginConvertToSavePrevious  = 16,  ///< Начало конвертации документа перед записью в предыдущую верию.
  koEndConvertToSavePrevious    = 17,  ///< Завершение конвертации документа перед записью в предыдущую верию.
  koChangeTheme                 = 18,  ///< Изменение темы.
  koBeginDragOpenFiles          = 19   ///< Открытие файлов перетаскиванием в окно Компас.
};


/// События для документов : Работа с файлом.
enum ksDocumentFileNotifyEnum : int
{
  kdBeginCloseDocument      = 1,  ///< Начало закрытия документа.
  kdCloseDocument           = 2,  ///< Документ закрыт.
  kdBeginSaveDocument       = 3,  ///< Начало сохранения документа.
  kdSaveDocument            = 4,  ///< Документ сохранен.
  kdActiveDocument          = 5,  ///< Документ активизировался.
  kdDeactiveDocument        = 6,  ///< Документ деактивизировался.
  kdBeginSaveAsDocument = 7,  ///< Начало сохранения документа c другим именем (до диалога выбора имени).
  kdDocumentFrameOpen       = 8,  ///< Окно документа открылось.
  kdProcessActivate         = 9,  ///< Активизация процесса.
  kdProcessDeactivate       = 10,  ///< Деактивизация процесса.
  kdBeginProcess            = 11,  ///< Начало процесса.
  kdEndProcess              = 12,  ///< Завершение процесса.
  kdBeginAutoSaveDocument   = 13,  ///< Начало автосохранения документа.
  kdAutoSaveDocument        = 14   ///< Документ автосохранен.
};


/// События для основной надписи.
enum ksStampNotifyEnum : int
{
  kdBeginEditStamp      = 1,  ///< Начало работы со штампом.
  kdEndEditStamp        = 2,  ///< Завершение работы со штампом.
  kdStampCellDblClick   = 3,  ///< Двойной клик в ячейке штампа.
  kdStampCellBeginEdit  = 4,  ///< Начало редактирования в ячейке штампа.
  kdStampBeginClearCells= 5   ///< Начало очистки ячеек штампа.
};


/// События для объектов 2Д документов.
enum ksObject2DNotifyEnum : int
{
  koChangeActive    =  1,  ///< Переключение активности объекта (вид, слой).
  koBeginDelete     =  2,  ///< Начало удаления объекта.
  koDelete          =  3,  ///< Удаление объекта.
  koBeginMove       =  4,  ///< Начало сдвига объекта.
  koMove            =  5,  ///< Сдвиг объекта.
  koBeginRotate     =  6,  ///< Начало поворота объекта.
  koRotate          =  7,  ///< Поворот объекта.
  koBeginScale      =  8,  ///< Начало масштабирования объекта.
  koScale           =  9,  ///< Масштабирование объекта.
  koBeginTransform  = 10,  ///< Начало трансформации объекта.
  koTransform       = 11,  ///< Трансформация объекта.
  koBeginCopy       = 12,  ///< Начало копирования объекта.
  koCopy            = 13,  ///< Копирование объекта.
  koBeginSymmetry   = 14,  ///< Начало симметрии объекта.
  koSymmetry        = 15,  ///< Симметрия объекта.
  koBeginProcess    = 16,  ///< Начало редактирования\создания объекта.
  koEndProcess      = 17,  ///< Конец редактирования\создания объекта.
  koCreateObject    = 18,  ///< Создание объекта.
  koUpdateObject    = 19,  ///< Редактирование объекта.
  koBeginDestroyObject   = 20,  ///< Начало разрушения объекта.
  koDestroyObject        = 21,  ///< Разрушение объекта.
  koBeginPropertyChanged = 22,  ///< Начало изменения свойств объекта.
  koPropertyChanged      = 23   ///< Изменены свойства объета.
};


/// События для менеджера селектирования.
enum ksSelectionMngNotifyEnum : int
{
  ksmSelect      =  1,  ///< Объект селектирован.
  ksmUnselect    =  2,  ///< Объект расселектирован.
  ksmUnselectAll =  3   ///< Все объекты расселектированы.
};


/// События для объекта спецификации.
enum ksSpcObjectNotifyEnum : int
{
  soBeginDelete       =  1,  ///< Начало удаления объекта.
  soDelete            =  2,  ///< Удаление объекта.
  soCellDblClick      =  3,  ///< Двойной клик в ячейке.
  soCellBeginEdit     =  4,  ///< Начало редактирования в ячейке.
  soChangeCurrent     =  5,  ///< Изменился текущий объект.
  soDocumentBeginAdd  =  6,  ///< Начало добавления документа.
  soDocumentAdd       =  7,  ///< Добавление документа в объекте СП.
  soDocumentRemove    =  8,  ///< Удаление документа из объекта СП.
  soBeginGeomChange   =  9,  ///< Начало измения геометрии объекта СП.
  soGeomChange        = 10,  ///< Геометрия объекта СП изменилась.
  soBeginProcess      = 11,  ///< Начало редактирования\создания объекта.
  soEndProcess        = 12,  ///< Конец редактирования\создания объекта.
  soCreateObject      = 13,  ///< Создание объекта.
  soUpdateObject      = 14,  ///< Редактирование объекта.
  soBeginCopy         = 15,  ///< Начало копирования объекта.
  soCopy              = 16   ///< Копирование объекта.
};


/// События для документа спецификации.
enum ksSpcDocumentNotifyEnum : int
{
  sdDocumentBeginAdd     =  1,  ///< Начало добавления документа сборочного чертежа.
  sdDocumentAdd          =  2,  ///< Добавление документа сборочного чертежа.
  sdDocumentBeginRemove  =  3,  ///< Начало удаления документа сборочного чертежа.
  sdDocumentRemove       =  4,  ///< Удаление документа сборочного чертежа.
  sdSpcStyleBeginChange  =  5,  ///< Начало изменения стиля спецификации.
  sdSpcStyleChange       =  6   ///< Стиль спецификации изменился.
};


/// События для спецификации.
enum ksSpecificationNotifyEnum : int
{
  ssTuningSpcStyleBeginChange    =  1,  ///< Начало изменения настроек спецификации.
  ssTuningSpcStyleChange         =  2,  ///< Настроейки спецификации изменились.
  ssChangeCurrentSpcDescription  =  3,  ///< Изменилось текущее описание спецификации.
  ssSpcDescriptionAdd            =  4,  ///< Добавилось описание спецификации.
  ssSpcDescriptionRemove         =  5,  ///< Удалилось описание спецификации.
  ssSpcDescriptionBeginEdit      =  6,  ///< Начало редактирования описания спецификации.
  ssSpcDescriptionEdit           =  7,  ///< Отредактировали описание спецификации.
  ssSynchronizationBegin         =  8,  ///< Начало синхронизации.
  ssSynchronization              =  9,  ///< Синхронизация проведена.
  ssBeginCalcPositions           = 10,  ///< Начало  расчета позиций.
  ssCalcPositions                = 11,  ///< Проведен расчет позиций.
  ssBeginCreateObject = 12   ///< Начало создания объекта СП (до диалога выбора раздела ).
};


/// События для 3D документа.
enum ksDocument3DNotifyEnum : int
{
  d3BeginRebuild            =  1,  ///< Начало перестроения модели.
  d3Rebuild                 =  2,  ///< Модель перестроена.
  d3BeginChoiceMaterial     =  3,  ///< Начало выбора материала.
  d3ChoiceMaterial          =  4,  ///< Закончен выбор материала.
  d3BeginChoiceMarking      =  5,  ///< Начало выбора обозначения.
  d3ChoiceMarking           =  6,  ///< Закончен выбор обозначения.
  d3BeginSetPartFromFile    =  7,  ///< Начало установки компонента в сборку (до диалога выбора имени).
  d3BeginCreatePartFromFile =  8,  ///< Начало создания компонента в сборке (до диалога выбора имени).
  d3CreateEmbodiment        =  9,  ///< Добавлено новое исполнение.
  d3DeleteEmbodiment        =  10,  ///< Удалено исполнение.
  d3ChangeCurrentEmbodiment =  11,  ///< Исполение установлено текущим.
  d3BeginChoiceProperty     =  12,  ///< Начало выбора свойства.
  d3ChoiceProperty          =  13,  ///< Закончен выбор свойства.
  d3BeginRollbackFeatures     =  14,  ///< Начало отката дерева модели.
  d3RollbackFeatures          =  15,  ///< Завершение отката дерева модели.
  d3BedinLoadCombinationChange     =  16,  ///< Начало переключения типа загрузки.
  d3LoadCombinationChange          =  17,  ///< Завершение переключения типа загрузки.
  d3BeginDeleteMaterial = 18,  ///< Начало удаления материала.
  d3DeleteMaterial = 19,  ///< Материал удален.
  d3BeginDeleteProperty = 20,  ///< Начало удаления значения свойства.
  d3DeleteProperty = 21   ///< Завершение удаления свойства.
};


/// События для объекта 3D документа.
enum ksObject3DNotifyEnum : int
{
  o3BeginDelete           =  1,  ///< Начало удаления объектов.
  o3Delete                =  2,  ///< Oбъекты удалены.
  o3Excluded              =  3,  ///< Oбъект исключен/включен в расчет.
  o3Hidden                =  4,  ///< Oбъект скрыт/показан.
  o3BeginPropertyChanged  =  5,  ///< Начало изменения свойств объекта.
  o3PropertyChanged       =  6,  ///< Изменены свойства объета.
  o3BeginPlacementChanged =  7,  ///< Начало изменения положения объекта .
  o3PlacementChanged      =  8,  ///< Изменено положения объета.
  o3BeginProcess          =  9,  ///< Начало редактирования\создания объекта.
  o3EndProcess            = 10,  ///< Конец редактирования\создания объекта.
  o3CreateObject          = 11,  ///< Создание объекта.
  o3UpdateObject          = 12,  ///< Редактирование объекта.
  o3BeginLoadStateChange  = 13,  ///< Начало изменения типа загрузки.
  o3LoadStateChange       = 14   ///< Завершение изменения типа загрузки.
};


/// События для 2D документа.
enum ksDocument2DNotifyEnum : int
{
  d2BeginRebuild        =  1,  ///< Начало перестроения модели.
  d2Rebuild             =  2,  ///< Модель перестроена.
  d2BeginChoiceMaterial =  3,  ///< Начало выбора материала.
  d2ChoiceMaterial      =  4,  ///< Закончен выбор материала.
  d2BeginInsertFragment =  5,  ///< Начало вставки фрагмента (до диалога выбора имени).
  d2LocalFragmentEdit   =  6,  ///< Редактирование локального фрагмента.
  d2BeginChoiceProperty =  7,  ///< Начало выбора свойства.
  d2ChoiceProperty      =  8,  ///< Закончен выбор свойства.
  d2BeginDeleteProperty =  9,  ///< Начало удаления значения свойства.
  d2DeleteProperty      =  10   ///< Завершение удаления свойства.
};


/// Тип отрисовки визуальной части.
enum ksTypeLookStyle : int
{
  tls_VisualStudio_97           = 0,  ///< Microsoft Visual Studio 97.
  tls_VisualStudio_NET          = 1,  ///< Microsoft Visual Studio.NET 2003.
  tls_Office_2003               = 2,  ///< Microsoft Office 2003.
  tls_VisualStudio2005          = 3,  ///< Microsoft Visual Studio 2005.
  tls_WindowsXP                 = 4,  ///< Microsoft Windows XP native look.
  tls_Office_2007               = 5,  ///< Microsoft Office 2007.
  tls_Office_2007_LunaBlue      = 5,  ///< Microsoft Office 2007. Luna Blue
  tls_Office_2007_ObsidianBlack = 6,  ///< Microsoft Office 2007. Obsidian Black
  tls_Office_2007_Aqua          = 7,  ///< Microsoft Office 2007. Aqua
  tls_Office_2007_Silver        = 8,  ///< Microsoft Office 2007. Silver
  tls_VisualStudio2008          = 9,  ///< Microsoft Visual Studio 2008.
  tls_VisualStudio2010          = 10,  ///< Microsoft Visual Studio 2010.
  tls_Office_2010_Blue          = 11,  ///< Microsoft Office 2010. Blue
  tls_Office_2010_Dark          = 12,  ///< Microsoft Office 2010. Dark
  tls_Office_2010_White         = 13,  ///< Microsoft Office 2010. White
  tls_Carbon                    = 14   ///< Carbon
};


/// События панели свойств.
enum ksPropertyManagerNotifyEnum : int
{
  prButtonClick        = 1,  ///< Нажатие кнопки спецпанели.
  prChangeControlValue = 2,  ///< Изменение значения контрола.
  prControlCommand     = 3,  ///< Нажатие кнопки контрола.
  prButtonUpdate       = 4,  ///< Установка состояния кнопки спецпанели.
  prProcessActivate    = 5,  ///< Активизация процесса.
  prProcessDeactivate  = 6,  ///< Деактивизация процесса.
  prCommandHelp        = 7,  ///< Вызов справки.
  prSelectItem         = 8,  ///< Селектирование элемента.
  prCheckItem          = 9,  ///< Выбор элемента
  prChangeActiveTab    = 10,  ///< Изменение активности закладки панели свойств.
  prEditFocus          = 11,  ///< Установка/снятие фокуса на редакторе ввода.
  prUserMenuCommand    = 12,  ///< Нажатие пункта пользовательского меню.
  prLayoutChanged      = 13,  ///< Изменение размещения панели свойств.
  prGetContextMenuType = 14,  ///< CLLBACK для получения типа контекстного меню.
  prFillContextPanel   = 15,  ///< CLLBACK для накачки контекстной панели.
  prFillContextIconMenu= 16,  ///< CLLBACK для накачки меню с иконками.
  prEndEditItem        = 17,  ///< Завершение редактирования элемента.
  prChangeTabExpanded  = 18,  ///< Сворачивание/Разворачивание закладки панели свойств.
  prItemDblClick = 19   ///< Двойной клик по элементу в списке.
};


/// Предопределенные кнопки панели КОМПАС.
enum SpecPropertyButtonEnum : int
{
  pbEnter        = 1,  ///< Ввод.
  pbEsc          = 2,  ///< Отказ.
  pbAutoCreate   = 3,  ///< Автосоздание.
  pbSaveState    = 4,  ///< Запомнить состояние.
  pbNewSearch    = 5,  ///< Новый поиск.
  pbPrevObj      = 6,  ///< Предыдущий объект.
  pbNextObj      = 7,  ///< Cледующий объект.
  pbHelp         = 8,  ///< Справка.
  pbCopyProps    = 9   ///< Копировать свойства.
};


/// Предопределенные спецпанели для панели свойств.
enum SpecPropertyToolBarEnum : int
{
  pnUnknown                        = 0,  ///< Неизвестная панель.
  pnEmpty                          = 1,  ///< Пустая панель.
  pnEscHelp                        = 2,  ///< Панель (pbEsc pbHelp).
  pnEnterEscHelp                   = 3,  ///< Панель (pbEnter pbEsc pbHelp).
  pnEnterEscCreateHelp             = 4,  ///< Панель (pbEnter pbEsc pbAutoCreate pbHelp).
  pnEnterEscCreateSaveHelp         = 5,  ///< Панель (pbEnter pbEsc pbAutoCreate SaveState pbHelp).
  pnEnterEscCreateSaveSearchHelp   = 6,  ///< Панель (pbEnter pbEsc pbAutoCreate SaveState pbNewSearch pbHelp).
  pnEnterEscSaveSearchPrevNextHelp = 7,  ///< Панель (pbEnter pbEsc SaveState pbNewSearch pbPrevObj pbNextObj pbHelp).
  pnEnterEscSearchHelp             = 8,  ///< Панель (pbEnter pbEsc pbNewSearch pbHelp).
  pnEscSaveSearchHelp              = 9,  ///< Панель (pbEsc SaveState pbNewSearch pbHelp).
  pnEnterEscCreateSearchHelp       = 10,  ///< Панель (pbEnter pbEsc pbAutoCreate pbNewSearch pbHelp).
  pnEnterEscSaveSearchHelp         = 11,  ///< Панель (pbEnter pbEsc SaveState pbNewSearch pbHelp).
  pnEscSaveStateHelp               = 12,  ///< Панель (pbEsc SaveState pbHelp).
  pnEnterEscSearchPrevNextHelp     = 13   ///< Панель (pbEnter pbEsc pbNewSearch pbPrevObj pbNextObj pbHelp).
};


/// Типы объектов КОМПАС API 7.
enum KompasAPIObjectTypeEnum : int
{
  ksObjectUnknown                  = 0,  ///< Неизвестный тип.
  ksObjectApplication              = 10001,  ///< Приложение - основной объект API.
  ksObjectDocuments                = 10002,  ///< Коллекция документов, открытых в приложении.
  ksObjectKompasError              = 10003,  ///< Информация о ошибке системы КОМПАС.
  ksObjectProcessParam             = 10004,  ///< Параметры процесса.
  ksObjectPropertyTabs             = 10005,  ///< Коллекция закладок панели свойств.
  ksObjectPropertyTab              = 10006,  ///< Закладка панели свойств.
  ksObjectPropertyControls         = 10007,  ///< Коллекция контролов закладки панели свойств.
  ksObjectPropertySeparator        = 10008,  ///< Разделитель( сепаратор ).
  ksObjectPropertyEdit             = 10009,  ///< Редактор.
  ksObjectPropertyList             = 10010,  ///< Комбобокс.
  ksObjectPropertyCheckBox         = 10011,  ///< Чекбокс.
  ksObjectPropertyMultiButton      = 10012,  ///< Набор кнопок.
  ksObjectPropertyUserControl      = 10013,  ///< Пользовательский элемент управления.
  ksObjectPropertyBmpList          = 10014,  ///< Комбобокс со строкой и битмапом.
  ksObjectPropertySlideBox = 10016,  ///< Окно отображения слайда, битмапа, группы или файла документа КОМПАС.
  ksObjectPropertyGrid             = 10017,  ///< Сетка.
  ksObjectDocumentFrame            = 10018,  ///< Окно документа.
  ksObjectDocumentFrames           = 10019,  ///< Коллекция окон документа.
  ksObjectPropertyManager          = 10020,  ///< Панель свойств.
  ksObjectDrawingDocument          = 10021,  ///< Документ - Чертеж.
  ksObjectFragmentDocument         = 10022,  ///< Документ - Фрагмент.
  ksObjectSpecificationDocument    = 10023,  ///< Документ - Спецификация.
  ksObjectPartDocument             = 10024,  ///< Документ - Деталь.
  ksObjectAssemblyDocument         = 10025,  ///< Документ - Сборка.
  ksObjectTextDocument             = 10026,  ///< Документ - Текстовый.
  ksObjectPropertyTextButton       = 10027,  ///< Кнопка с текстом.
  ksObjectPropertySpinEdit         = 10028,  ///< Спин с редактором.
  ksObjectViewsAndLayersManager    = 10029,  ///< Менеджер слоев и видов 2D документа.
  ksObjectViews                    = 10030,  ///< Коллекция видов.
  ksObjectView                     = 10031,  ///< Вид.
  ksObjectAssociationView          = 10032,  ///< Ассоциативный вид.
  ksObjectLayerGroups              = 10033,  ///< Коллекция групп слоев.
  ksObjectLayerGroup               = 10035,  ///< Группа  слоев.
  ksObjectLayers                   = 10036,  ///< Коллекция слоев.
  ksObjectLayer                    = 10037,  ///< Слой.
  ksObjectLayerFilterCondition     = 10038,  ///< Условие фильтрации слоев.
  ksObjectLayerFilterConditions    = 10039,  ///< Коллекция  условий фильтрации слоев.
  ksObjectDocumentSettings         = 10040,  ///< Настройки документа.
  ksObjectDocument2DSettings       = 10041,  ///< Настройки 2D документа.
  ksObjectDrawingDocumentSettings  = 10042,  ///< Настройки чертежа.
  ksObjectFragmentDocumentSettings = 10043,  ///< Настройки фрагмента.
  ksObjectSystemSettings           = 10044,  ///< Параметры системы.
  ksObjectDocument3DSettings       = 10045,  ///< Настройки 3D документа.
  ksObjectFormatLabelRules          = 10046,  ///< Правила формирования отображаемых имен объектов в дереве документа.
  ksObjectLibraryManager           = 10050,  ///< Менеджер библиотек.
  ksObjectProcedure                = 10051,  ///< Процедура прикладной библиотеки.
  ksObjectProceduresLibraries      = 10052,  ///< Коллекция прикладных библиотек.
  ksObjectProceduresLibrary        = 10053,  ///< Прикладная библиотека.
  ksObjectProcedures               = 10054,  ///< Коллекция процедур прикладной библиотеки.
  ksObjectInsertsLibraries         = 10055,  ///< Коллекция библиотек элементов(документов).
  ksObjectInsertsLibrary           = 10056,  ///< Библиотека элементов(документов).
  ksObjectInserts = 10057,  ///< Коллекция элементов(документов) библиотеки элементов(документов).
  ksObjectInsert                   = 10058,  ///< Элемент библиотеки элементов(документов).
  ksObjectSpecificationDescriptions   = 10059,  ///< Коллекция описаний спецификации.
  ksObjectSpecificationDescription    = 10060,  ///< Описание спецификации.
  ksObjectSpecificationStyle          = 10061,  ///< Стиль спецификации.
  ksObjectSpecificationColumnStyles   = 10062,  ///< Коллекция стилей колонок спецификации.
  ksObjectSpecificationColumnStyle    = 10063,  ///< Стиль колонки спецификации.
  ksObjectSpecificationSectionStyles  = 10064,  ///< Коллекция стилей разделов спецификации.
  ksObjectSpecificationSectionStyle   = 10065,  ///< Стиль раздела спецификации.
  ksObjectSpecificationTuning         = 10066,  ///< Настройки спецификации.
  ksObjectSpecificationTuningSections = 10067,  ///< Коллекция настроек разделов спецификации.
  ksObjectSpecificationTuningSection  = 10068,  ///< Настройка раздела спецификации.
  ksObjectSpecificationSubsections    = 10069,  ///< Коллекция подразделов спецификации.
  ksObjectSpecificationSubsection     = 10070,  ///< Подраздел спецификации.
  ksObjectAdditionalBlockStyles         = 10071,  ///< Коллекция стилей блоков дополнительных разделов.
  ksObjectAdditionalBlockStyle          = 10072,  ///< Стиль блока дополнительных разделов.
  ksObjectAdditionalBlockTunings        = 10073,  ///< Коллекция настроек блоков дополнительных разделов.
  ksObjectAdditionalBlockTuning         = 10074,  ///< Настройка блока дополнительных разделов.
  ksObjectAdditionalBlockSectionTunings = 10075,  ///< Коллекция настроек разделов блока дополнительных разделов.
  ksObjectAdditionalBlockSectionTuning  = 10076,  ///< Настройка раздела блока дополнительных разделов.
  ksObjectSheetFormat  = 10077,  ///< Формат листа.
  ksObjectTextStyle    = 10078,  ///< Параметры стиля текста.
  ksObjectFont         = 10079,  ///< Параметры шрифта.
  ksObjectTabulators   = 10080,  ///< Коллекция позиции табуляторов.
  ksObjectTabulator    = 10081,  ///< Позиция табулятора.
  ksObjectSpecificationObjects        = 10082,  ///< Коллекция объектов спецификации.
  ksObjectSpecificationBaseObjects    = 10083,  ///< Коллекция базовых объектов спецификации.
  ksObjectSpecificationCommentObjects = 10084,  ///< Коллекция вспомогательных объектов спецификации.
  ksObjectSpecificationObject         = 10085,  ///< Объект спецификации.
  ksObjectSpecificationBaseObject     = 10086,  ///< Базовый объект спецификации.
  ksObjectSpecificationCommentObject  = 10087,  ///< Вспомогательный объект спецификации.
  ksObjectSpecificationColumns        = 10088,  ///< Коллекция колонок объекта спецификации.
  ksObjectSpecificationColumn         = 10089,  ///< Колонока объекта спецификации.
  ksObjectSpecificationColumnItems    = 10090,  ///< Коллекция элементов колонки объекта спецификации.
  ksObjectSpecificationColumnItem     = 10091,  ///< Элемент колонки объекта спецификации.
  ksObjectAttachedDocuments           = 10092,  ///< Коллекция присоединенных документов к объекту спецификации.
  ksObjectAttachedDocument            = 10093,  ///< Параметры присоединенного документа к объекту спецификации.
  ksObjectPropertyFileName     = 10094,  ///< Выбор файла.
  ksObjectPropertyColor        = 10095,  ///< Выбор цвета.
  ksObjectLayoutSheets         = 10096,  ///< Коллекция листов оформления.
  ksObjectLayoutSheet          = 10097,  ///< Параметры листа оформления.
  ksObjectConverter            = 10098,  ///< Конвертер КОМПАС-документов.
  ksObjectCheckSum             = 10099,  ///< Контрольная сумма.
  ksObjectProgressBarIndicator = 10100,  ///< Индикатор процесса.
  ksObjectPropertyEditList     = 10101,  ///< Список.
  ksObjectPropertyLibExplorer  = 10102,  ///< Отображение библиотеки документов.
  ksObjectVariable7            = 10103,  ///< Параметрическая переменная модели.
  ksObjectInsertionParameters  = 10104,  ///< Праметры вставки фрагмента и растрового объекта в текст.
  ksObjectMath2D               = 10105,  ///< Математика 2D.
  ksObjectSelectionManager     = 10106,  ///< Менеджера селектированных объектов.
  ksObjectChooseManager        = 10107,  ///< Менеджера выбора (подсветки) объектов.
  ksObjectStamp                = 10108,  ///< Штамп.
  ksObjectPropertyStyleList    = 10109,  ///< Комбобокс со стилем.
  ksObjectPrintJob             = 10110,  ///< Задание на печать.
  ksObjectPrintJob_Sheet       = 10111,  ///< Задание на печать::Интерфейс листа документа.
  ksObjectPropertyOpticalProps = 10112,  ///< Контрол оптических свойств.
  ksObjectPropertyEditCheckBox = 10113,  ///< Объединенный редактор с чекбоксом.
  ksObjectNewPartDocumentSettings = 10114,  ///< Настройки для новых документов - деталь.
  ksObjectNewAssemblyDocumentSettings = 10115,  ///< Настройки для новых документов - сборка.
  ksObjectPropertyGroupBegin   = 10116,  ///< Начало группы контролов.
  ksObjectPropertyGroupEnd     = 10117,  ///< Конец группы контролов.
  ksObjectThreadPattern        = 10118,  ///< Параметры стандарта резьбы.
  ksObjectThreadDialogParam    = 10119,  ///< Параметры диалога выбора стандарта резьбы.
  ksObjectPropertyPreviewText  = 10120,  ///< Предпросмотр текста.
  ksObjectPropertyAggregateControl = 10121,  ///< Составной контрол.
  ksObjectPropertyLinkButton    = 10122,  ///< Набор кнопок ввиде ссылок.
  ksObjectPropertyMarking       = 10123,  ///< Контрол обозначение.
  ksObjectContentDialogParam    = 10124,  ///< Параметры диалога с произвольным наполнением.
  ksObjectPropertyBasePoint     = 10125,  ///< Базовая точка.
  ksObjectTextDocumentSection   = 10126,  ///< Раздел текстового документа.
  ksIntervalVariable            = 10127,  ///< Интервальная переменная.
  ksSpecificationObjectCreateParam = 10128,  ///< Расширенные параметры создания объекта спецификации.
  ksObjectPropertyReplaceList   = 10129,  ///< Элемент панели свойств - Список замен текстов.
  ksObjectRasterConvertParameters = 10130,  ///< Параметры для конвертации в растровые форматы.
  ksObjectAdditionConvertParameters = 10131,  ///< Параметры для конвертации в дополнительные форматы.
  ksObjectCommonNameObject = 10132,  ///< Объект спецификации - Общее наименование.
  ksObjectUserDataStoragesMng = 10500,  ///< Менеджер пользовательских хранилищ.
  ksObjectUserDataStorages    = 10501,  ///< Коллекция объектов пользовательского хранилища.
  ksObjectUserDataStorage     = 10502,  ///< Объект пользовательского хранилища данных.
  ksObjectParametriticConstraint = 10503,  ///< Параметрическое ограничение.
  ksObjectAttribute          = 10504,  ///< Аттрибут.
  ksObjectColumnInfo         = 10505,  ///< Параметры столбца табличного атрибутац.
  ksObjectAttributeType      = 10506,  ///< Параметры типа атрибута.
  ksObjectAttrTypeMng        = 10507,  ///< Менеджер типов атрибутов.
  ksObjectProperty           = 10508,  ///< Свойство.
  ksObjectPropertyMng        = 10509,  ///< Менеджер свойств.
  ksObjectReportProcess      = 10510,  ///< Интерфейс для управления процессом Создать отчет.
  ksObjectReport             = 10511,  ///< Интерфейс Отчета.
  ksObjectReportStyle        = 10512,  ///< Интерфейс стиля Отчета.
  ksObjectReportStyleColumn  = 10513,  ///< Интерфейс колонки стиля Отчета.
  ksObjectPropertyKeeper     = 10514,  ///< Объект дерева СЧИ.
  ksObjectStyles             = 10515,  ///< Коллекция стилей.
  ksObjectCurvesStyles       = 10516,  ///< Коллекция стилей кривых.
  ksObjectHatchsStyles       = 10517,  ///< Коллекция стилей штриховок.
  ksObjectTextsStyles        = 10518,  ///< Коллекция стилей текстов.
  ksObjectStyle              = 10519,  ///< Cтиль.
  ksObjectCurveStyle         = 10520,  ///< Стиль кривой.
  ksObjectHatchStyle         = 10521,  ///< Стиль штриховки.
  ksObjectSpecificationStyles= 10522,  ///< Коллекция стилей спецификации.
  ksObjectText                 = 10700,  ///< Текст.
  ksObjectTextLine             = 10701,  ///< Cтрока текста.
  ksObjectTextItem             = 10702,  ///< Компонент строки текста.
  ksObjectTableCell            = 10703,  ///< Ячейка таблицы.
  ksObjectExternalTessellation = 10704,  ///< Объект с внешней триангуляцией
  ksObjectContour              = 10705,  ///< Контур.
  ksObjectContourSegment       = 10706,  ///< Сегментом контура.
  ksObjectContourLineSegment   = 10707,  ///< Сегментом контура - отрезок.
  ksObjectContourArc           = 10708,  ///< Сегментом контура - дуга.
  ksObjectExternalGDI          = 10709,  ///< Внешний GDI- объект.
  ksObjectLibArraySettings     = 10710,  ///< Интерфейс для выбора состояний библиотек в настройках.
  ksObjectTextTable            = 10711,  ///< Таблица в тексте тексторого документа.
  ksObjectSnapInfo             = 10712,  ///< Интерфейс информации о текущей привязки.
  ksObjectPropertyTwinSwitcher = 10713,  ///< Переключатель.
  ksObjectPropertyPoint3D      = 10714,  ///< Точка 3D.
  ksObjectPart7               = 11000,  ///< 3D компонент.
  ksObjectModelObject       = 11001,  ///< 3D объект.
  ks3dMateConstraint        = 11002,  ///< 3D Сопряжение.
  ksObjectParts7            = 11003,  ///< Коллекция 3D компонентов.
  ksObjectVariableTable     = 11004,  ///< Таблица параметров.
  ksObjectSketchs           = 11005,  ///< Коллекция эскизов.
  ksObjectSketch            = 11006,  ///< Эскиз.
  ksObjectExtrussions       = 11007,  ///< Коллекция операций выдавливания.
  ksObjectExtrusion         = 11008,  ///< Операция выдавливания.
  ksObjectBody7             = 11009,  ///< Твёрдое тело.
  ksObjectCutExtrusion      = 11010,  ///< Операция 'вырезать выдавливанием'.
  ksObjectSheetMetalBodies  = 11011,  ///< Коллекция листовых тел.
  ksObjectSheetMetalBody    = 11012,  ///< Листовое тело.
  ksObjectPoints3D          = 11013,  ///< Коллекция пространственных точек.
  ksObjectPoint3D           = 11014,  ///< Пространственная точка.
  ksObjectPoint3DParamCoord = 11015,  ///< Точка заданная по координатам.
  ksObjectPoint3DParamDisplace  = 11016,  ///< Точка заданная по смещению от опорного объекта.
  ksObjectPoint3DParamIntersect = 11017,  ///< Точка заданная на пересечении опорных объектов.
  ksObjectPoint3DParamCenter    = 11018,  ///< Точка заданная в центре опорного объекта.
  ksObjectPoint3DParamCurve     = 11019,  ///< Точка заданная на кривой со смещением.
  ksObjectPoint3DParamSurface   = 11020,  ///< Точка заданная на поверхности.
  ksObjectPoint3DParamProjection= 11021,  ///< Точка заданная проецированием.
  ksObjectSheetMetalBend        = 11022,  ///< Сгиб.
  ksObjectSheetMetalBends       = 11023,  ///< Коллекция сгибов.
  ksObjectSheetMetalLineBend    = 11024,  ///< Сгиб по линии.
  ksObjectSheetMetalLineBends   = 11025,  ///< Коллекция сгибов по линии.
  ksObjectSheetMetalHole        = 11026,  ///< Отверстие.
  ksObjectSheetMetalHoles       = 11027,  ///< Коллекция элементов 'отверстие'.
  ksObjectSheetMetalCut         = 11028,  ///< Вырез.
  ksObjectSheetMetalCuts        = 11029,  ///< Коллекция элементов 'вырез'.
  ksObjectLineDimensions3D      = 11030,  ///< Коллекция линейных размеров 3D
  ksObjectBaseLineDimension3D   = 11031,  ///< Линейный размер 3D (от отрезка до точки)
  ksObjectLineDimension3D       = 11032,  ///< Линейный размер 3D (на плоскости)
  ksObjectRadialDimension3D     = 11033,  ///< Радиальный размер 3D
  ksObjectDiametralDimension3D  = 11034,  ///< Диаметральный размер 3D
  ksObjectRadialDimensions3D    = 11035,  ///< Коллекция радиальных размеров 3D
  ksObjectDiametralDimensions3D = 11036,  ///< Коллекция диаметральных размеров 3D
  ksObjectAngleDimension3D      = 11037,  ///< Угловой размер 3D
  ksObjectAngleDimensions3D     = 11038,  ///< Коллекция угловых размеров 3D
  ksObjectLocalCoordinateSystems    = 11039,  ///< Коллекция локальных систем координат
  ksObjectLocalCoordinateSystem     = 11040,  ///< Локальная система координат
  ksObjectLocalCSAxesDirectionParam = 11041,  ///< Параметры для типа ориентации ЛСК-'направление осей'.
  ksObjectLocalCSOrientByObjectParam = 11042,  ///< Параметры для типа ориентации ЛСК-'ориентирование по объекту'.
  ksObjectLocalCSEulerParam          = 11043,  ///< Параметры для типа ориентации ЛСК-'система углов Эйлера'.
  ksObjectSpline3D      = 11044,  ///< Сплайн
  ksObjectSplines3D     = 11045,  ///< Коллекция сплайнов
  ksObjectCurveVertexParam = 11046,  ///< Параметры вершины кривой
  ksObjectPolyLines     = 11047,  ///< Коллекция 3D ломаных
  ksObjectPolyLine      = 11048,  ///< 3D ломаная
  ksObjectLeaders3D     = 11049,  ///< Коллекция линий выносок 3D
  ksObjectLeader3D      = 11050,  ///< Линия выноска 3D
  ksObjectMarkLeader3D  = 11051,  ///< Знак маркировки 3D
  ksObjectRough3D           = 11052,  ///< Обозначение 3D шероховатости.
  ksObjectRoughs3D          = 11053,  ///< Коллекция обозначений 3D шероховатости.
  ksObjectPositionLeader3D  = 11054,  ///< Линия выноски для обозначения позиции 3D
  ksObjectBrandLeader3D  = 11055,  ///< Знак клеймения 3D
  ksObjectBase3D         = 11056,  ///< Обозначение 3D базы.
  ksObjectBases3D        = 11057,  ///< Коллекция обозначений 3D базы.
  ksObjectTolerances3D   = 11058,  ///< Коллекция допуска формы 3D.
  ksObjectTolerance3D    = 11059,  ///< Обозначение допуска формы 3D.
  ksObjectControlPoints = 11060,  ///< Коллекция контрольных точек.
  ksObjectControlPoint  = 11061,  ///< Контрольная точка.
  ksObjectConjunctivePoints = 11062,  ///< Коллекция присоединительных точек.
  ksObjectConjunctivePoint  = 11063,  ///< Присоединительная точка.
  ksObjectSplitLines        = 11064,  ///< Коллекция линий разъема.
  ksObjectSplitLine         = 11065,  ///< Линия разъема.
  ksObjectSurfacePatches    = 11066,  ///< Коллекция заплаток.
  ksObjectSurfacePatch      = 11067,  ///< Заплатка.
  ksObjectFaceRemovers      = 11068,  ///< Коллекция операций удаления граней.
  ksObjectFaceRemover       = 11069,  ///< Операция удаления граней.
  ksObjectSurfaceSewers      = 11070,  ///< Коллекция операций сшивки поверхностей.
  ksObjectSurfaceSewer       = 11071,  ///< Операция сшивки поверхностей.
  ksObjectNurbsSurfaces      = 11072,  ///< Коллекция NURBS-поверхностей.
  ksObjectNurbsSurface       = 11073,  ///< NURBS-поверхность.
  ksObjectSurfacesIntersectionCurves = 11074,  ///< Коллекция кривых пересечений поверхностей.
  ksObjectSurfacesIntersectionCurve  = 11075,  ///< Кривая пересечения поверхностей.
  ksObjectEquidistants3D  = 11076,  ///< Коллекция эквидистант 3D.
  ksObjectEquidistant3D   = 11077,  ///< Эквидистанта 3D.
  ksObjectTrimmedCurves   = 11078,  ///< Коллекция операций усеченния кривой.
  ksObjectTrimmedCurve    = 11079,  ///< Операция усеченния кривой.
  ksObjectFeaturePatterns         = 11080,  ///< Коллекция операций копирования.
  ksObjectLinearPattern           = 11081,  ///< Массив операций по сетке.
  ksObjectCircularPattern         = 11082,  ///< Массив операций по концентрической сетке.
  ksObjectPathPattern             = 11083,  ///< Массив операций вдоль кривой.
  ksObjectPartsLinearPattern      = 11084,  ///< Массив компонентов по сетке для сборки.
  ksObjectPartsCircularPattern    = 11085,  ///< Массив компонентов по концентрической сетке для сборки.
  ksObjectPartsPathPattern        = 11086,  ///< Массив компонентов вдоль кривой для сборки.
  ksObjectAuxLinearPattern        = 11087,  ///< Массив вспомогательной геометрии по сетке.
  ksObjectAuxCircularPattern      = 11088,  ///< Массив вспомогательной геометрии по концентрической сетке.
  ksObjectAuxPathPattern          = 11089,  ///< Массив вспомогательной геометрии вдоль кривой.
  ksObjectPointDrivenPattern      = 11090,  ///< Массив операций по точкам.
  ksObjectPartsPointDrivenPattern = 11091,  ///< Массив компонентов по точкам.
  ksObjectDerivedPattern          = 11092,  ///< Массив по образцу.
  ksObjectMirrorPattern           = 11093,  ///< Зеркальный массив.
  ksObjectShellMirrorPattern      = 11094,  ///< Зеркально отобразить тело или операцию.
  ksObjectAuxMirrorPattern        = 11095,  ///< Зеркальный массив вспомогательной геометрии.
  ksObjectRuledSurfaces           = 11096,  ///< Коллекция операций создания линейчатой поверхности.
  ksObjectRuledSurface            = 11097,  ///< Линейчатая поверхность.
  ksObjectExtensionSurfaces       = 11098,  ///< Коллекция операций продления поверхности.
  ksObjectExtensionSurface        = 11099,  ///< Операция продления поверхности.
  ksObjectEquidistantSurfaces     = 11100,  ///< Коллекция операций построения эквидистант поверхности.
  ksObjectEquidistantSurface      = 11101,  ///< Операция построения эквидистанты поверхности .
  ksObjectTrimmedSurfaces         = 11102,  ///< Коллекция Операций усечения поверхности.
  ksObjectTrimmedSurface          = 11103,  ///< Операция усечения поверхности.
  ksObjectVector3D                         = 11104,  ///< Вектор 3D.
  ksObjectVector3DBy2VertexesParameters    = 11105,  ///< Параметры вектора 3D по двум вершинам.
  ksObjectVector3DByCoefficientsParameters = 11106,  ///< Параметры вектора 3D по коэффициентам.
  ksObjectVector3DBy2AnglesParameters      = 11107,  ///< Параметры вектора 3D по двум углам.
  ksObjectVector3DByObjectParameters       = 11108,  ///< Параметры вектора 3D по ребру или плоскости.
  ksObjectVector3DAlongSurfaceNormalParameters = 11109,  ///< Параметры вектора 3D, перпендикулярного грани в указанной точке.
  ksObjectVector3DByCurveParameters            = 11110,  ///< Параметры вектора 3D по базисному вектору в точке кривой.
  ksObjectVector3DByScreenNormalParameters = 11111,  ///< Параметры вектора 3D перпендикулярно плоскости экрана.
  ksObjectVector3DByLocalCSParameters      = 11112,  ///< Параметры вектора 3D по углу в плоскости СК и по оси СК.
  ksObjectConnectCurves                    = 11113,  ///< Коллекция операций соединения кривых.
  ksObjectConnectCurve                     = 11114,  ///< Операция соединения кривых.
  ksObjectFilletCurves                     = 11115,  ///< Коллекция операций скругления кривых.
  ksObjectFilletCurve                      = 11116,  ///< Операция соединения кривых.
  ksObjectSurfaceThickenings               = 11117,  ///< Коллукция операций придания толщины поверхности.
  ksObjectSurfaceThickening                = 11118,  ///< Операция придания толщины поверхности.
  ksObjectArcs3D                           = 11119,  ///< Коллекция дуг 3D.
  ksObjectArc3D                            = 11120,  ///< 3D дуга.
  ksObjectAuxPointDrivenPattern            = 11121,  ///< Массив вспомогательной геометрии по точкам.
  ksObjectBodiesPointDrivenPattern         = 11122,  ///< Массив тел по точкам.
  ksObjectTablePattern                     = 11123,  ///< Массив операций по таблице из файла.
  ksObjectPartsTablePattern                = 11124,  ///< Массив компонентов по таблице из файла.
  ksObjectAuxTablePattern                  = 11125,  ///< Массив компонентов по таблице из файла.
  ksObjectBodiesTablePattern               = 11126,  ///< Массив вспомогательной геометрии по таблице из файла.
  ksObjectRotateds                         = 11127,  ///< Коллекция операций вращения.
  ksObjectRotated                          = 11128,  ///< Операция вращения.
  ksObjectCutRotated                       = 11129,  ///< Операция 'вырезать вращением'.
  ksObjectExtrusionSurfaces                = 11130,  ///< Коллекция поверхностей выдавливания.
  ksObjectExtrusionSurface                 = 11131,  ///< Операция поверхность выдавливания.
  ksObjectRotatedSurfaces                  = 11132,  ///< Коллекция поверхностей вращения.
  ksObjectRotatedSurface                   = 11133,  ///< Операция поверхность вращения.
  ksObjectPoint3DParamBySphere             = 11134,  ///< Точка, заданная сферическими координатами.
  ksObjectPoint3DParamByCylinder           = 11135,  ///< Точка, заданная цилиндрическими координатами.
  ksObjectMeshPointsSurfaces               = 11136,  ///< Коллекция поверхностей по сети точек.
  ksObjectMeshPointsSurface                = 11137,  ///< Поверхность по сети точек.
  ksObjectCloudPointsSurfaces              = 11138,  ///< Коллекция поверхностей по облаку точек.
  ksObjectCloudPointsSurface               = 11139,  ///< Поверхность по облаку точек.
  ksObjectImportedSurfaces                 = 11140,  ///< Коллекция импортированных поверхностей.
  ksObjectImportedSurface                  = 11141,  ///< Импортированная поверхность.
  ksObjectBodiesLinearPattern              = 11142,  ///< Массив тел по сетке.
  ksObjectBodiesCircularPattern            = 11143,  ///< Массив тел по концентрической сетке.
  ksObjectBodiesPathPattern                = 11144,  ///< Массив тел вдоль кривой.
  ksObjectScalings3D                       = 11145,  ///< Коллекция операций масштабирования.
  ksObjectScaling3D                        = 11146,  ///< Масштабирование.
  ksObjectCurveOutLine                     = 11147,  ///< Линия очерка.
  ksObjectCurveOutLines                    = 11148,  ///< Коллекция линий очерка.
  ksObjectCurveByLaw                       = 11149,  ///< Кривая по закону.
  ksObjectCurveByLaws                      = 11150,  ///< Коллекция кривых по закону.
  ksObjectIsoparametricCurve               = 11151,  ///< Изопараметрическая кривая.
  ksObjectIsoparametricCurves              = 11152,  ///< Коллекция изопараметрических кривых.
  ksObjectIsoparametricCurvesSet           = 11153,  ///< Группа изопараметрических кривых.
  ksObjectIsoparametricCurvesSets          = 11154,  ///< Коллекция групп изопараметрических кривых.
  ksObjectSplineOnSurface                  = 11155,  ///< Сплайн по поверхности.
  ksObjectSplinesOnSurfaces                = 11156,  ///< Коллекция сплайнов по поверхностям.
  ksObjectProjectionCurve                  = 11157,  ///< Проекционная кривая.
  ksObjectProjectionCurves                 = 11158,  ///< Коллекция проекционных кривых.
  ksObjectCurveBy2Projections              = 11159,  ///< Проекционная кривая.
  ksObjectCurvesBy2Projectionses           = 11160,  ///< Коллекция проекционных кривых.
  ksObjectContour3D                        = 11161,  ///< Контур 3D.
  ksObjectContours3D                       = 11162,  ///< Коллекция контуров 3D.
  ksObjectLineSegment3D                    = 11163,  ///< Отрезок 3D.
  ksObjectLineSegments3D                   = 11164,  ///< Коллекция отрезков 3D.
  ksObjectUnhistoredCurve3D                = 11165,  ///< Кривая без истории.
  ksObjectUnhistoredCurves3D               = 11166,  ///< Коллекция кривых без истории.
  ksObjectTechnicalDemand3D                = 11167,  ///< Технические требования 3D.
  ksObjectEmbodiment                       = 11168,  ///< Исполнение.
  ksObjectOperationLinearDimension         = 11169,  ///< Управляющий линейный размер операции 3D.
  ksObjectOperationAngularDimension        = 11170,  ///< Управляющий угловой размер операции 3D.
  ksObjectOperationRadialDimension         = 11171,  ///< Управляющий радиальный размер операции 3D.
  ksObjectOperationDiametralDimension      = 11172,  ///< Управляющий диаметральный размер операции 3D.
  ksObjectSketchLinearDimension            = 11173,  ///< Управляющий линейный размер эскиза 3D.
  ksObjectSketchAngularDimension           = 11174,  ///< Управляющий угловой размер эскиза 3D.
  ksObjectSketchBreakAngularDimension      = 11175,  ///< Управляющий угловой размер эскиза 3D с обрывом.
  ksObjectSketchRadialDimension            = 11176,  ///< Управляющий радиальный размер эскиза 3D.
  ksObjectSketchBreakRadialDimension       = 11177,  ///< Управляющий радиальный размер эскиза 3D с обрывом.
  ksObjectSketchDiametralDimension         = 11178,  ///< Управляющий диаметральный размер эскиза 3D.
  ksObjectConicSpiral3D                    = 11179,  ///< Коническая спираль.
  ksObjectCylindricSpiral3D                = 11180,  ///< Цилиндрическая спираль.
  ksObjectSpirals3D                        = 11181,  ///< Коллекция спиралей.
  ksObjectPointsArrOnCurve                 = 11182,  ///< Группа точек по кривой.
  ksObjectPointsArrsOnCurves               = 11183,  ///< Коллекция групп точек по кривым.
  ksObjectPointsArrOnSurface               = 11184,  ///< Группа точек по поверхности.
  ksObjectPointsArrsOnSurfaces             = 11185,  ///< Коллекция групп точек по поверхностям.
  ksObjectPointsArrFromFile                = 11186,  ///< Группа точек из файла.
  ksObjectPointsArrsFromFiles              = 11187,  ///< Коллекция групп точек из файлов.
  ksObjectAxis3D                           = 11188,  ///< Вспомогательная ось 3D.
  ksObjectAxes3D                           = 11189,  ///< Коллекция вспомогательных осей 3D.
  ksObjectAxis3DBy2Points                  = 11190,  ///< Ось через две вершины.
  ksObjectAxis3DBy2Planes                  = 11191,  ///< Ось на пересечении плоскостей.
  ksObjectAxis3DByConeface                 = 11192,  ///< Ось конической поверхности.
  ksObjectAxis3DByEdge                     = 11193,  ///< Ось через ребро.
  ksObjectAxis3DByPointAndObject           = 11194,  ///< Ось через вершину по объекту.
  ksObjectAxis3DByOperation                = 11195,  ///< Ось операции.
  ksObjectPlanes3D                         = 11196,  ///< Коллекция плоскостей 3D.
  ksObjectPlane3D                          = 11197,  ///< Плоскость 3D.
  ksObjectPlane3DByPlaneCurve              = 11198,  ///< Плоскость через плоскую кривую.
  ksObjectPlane3DTangentToFaceInPoint      = 11199,  ///< Плоскость касательная к грани в точке 3D.
  ksObjectPlane3DByOffset                  = 11200,  ///< Смещенная плоскость.
  ksObjectPlane3DBy3Points                 = 11201,  ///< Плоскость, проходящая через три вершины.
  ksObjectPlane3DByAngle                   = 11202,  ///< Плоскость, под углом к другой плоскости.
  ksObjectPlane3DByEdgeAndPoint            = 11203,  ///< Плоскость через ребро и вершину
  ksObjectPlane3DParallelByPoint           = 11204,  ///< Плоскость через вершину параллельно другой плоскости
  ksObjectPlane3DPerpendicularByEdge       = 11205,  ///< Плоскость, проходящая через вершину перпендикулярно ребру
  ksObjectPlane3DNormalToSurface           = 11206,  ///< Нормальная плоскость.
  ksObjectPlane3DMiddle                    = 11207,  ///< Средняя плоскость 3D
  ksObjectPlane3DByEdgeAndPlane            = 11208,  ///< Плоскость через ребро параллельно / перпендикулярно грани 3D
  ksObjectPlane3DBy2Edge                 = 11209,  ///< Плоскость через ребро параллельно /перпендикулярно другому ребру 3D
  ksObjectPlane3DTangentToFace             = 11210,  ///< Плоскость касательная к грани 3D
  ksObjectUserObject3D                     = 11211,  ///< Пользовательский объект 3D.
  ksObjectUserObjects3D                    = 11212,  ///< Коллекция пользовательских объектов 3D.
  ksObjectLinearPatternAnyCopy             = 11213,  ///< Копирование произвольных объектов по сетке.
  ksObjectCircularPatternAnyCopy           = 11214,  ///< Копирование произвольных объектов по окружности.
  ksObjectPathPatternAnyCopy               = 11215,  ///< Копирование произвольных объектов по кривой.
  ksObjectPointDrivenPatternAnyCopy        = 11217,  ///< Копирование произвольных объектов по точкам.
  ksObjectTablePatternAnyCopy              = 11218,  ///< Копирование произвольных объектов по таблице.
  ksObjectLinearUnhistoriedDimension       = 11219,  ///< Импортированный линейный размер.
  ksObjectAngularUnhistoriedDimension      = 11220,  ///< Импортированный угловой размер.
  ksObjectRadialUnhistoriedDimension       = 11221,  ///< Импортированный радиальный размер.
  ksObjectDiametralUnhistoriedDimension    = 11222,  ///< Импортированный диаметральный размер.
  ksObjectPlacement3D                      = 11223,  ///< Интерфейс локальной системы координат (положение объекта).
  ksObjectLayers3D                         = 11224,  ///< Коллекция слоев в 3D.
  ksObjectLayer3D                          = 11225,  ///< Слой в 3D.
  ksObjectLayerGroups3D                    = 11226,  ///< Коллекция групп слоев в 3D.
  ksObjectLayerGroup3D                     = 11227,  ///< Группа слоев в 3D.
  ksObjectDocument3DManager                = 11228,  ///< Менеджер 3D документа.
  ksObjectToleranceRecalc                  = 11229,  ///< Пересчет модели.
  ksObjectSpecRough3D                      = 11230,  ///< Неуказанная шероховатость 3D.
  ksObjectSketchBreakLinearDimension       = 11231,  ///< Управляющий линейный размер эскиза 3D с обрывом.
  ksObjectMathCurve3D                      = 11232,  ///< Математическая кривая в трехмерном пространстве.
  ksObjectMathSurface3D                    = 11233,  ///< Математическая поверхность в трехмерном пространстве.
  ksObjectBilletObsolete                   = 11234,  ///< Деталь заготовка и Зеркальная деталь.
  ksObjectBilletsObsoletes                 = 11235,  ///< Коллекция деталей заготовок и зеркальных деталей.
  ksObjectCopyGeometry                     = 11236,  ///< Копия геометрии.
  ksObjectCopiesGeometry                   = 11237,  ///< Коллекция копий геометрии.
  ksObjectCollectionGeometry               = 11238,  ///< Коллекция геометрии.
  ksObjectCollectionsGeometry              = 11239,  ///< Коллекции коллекций геометрии.
  ksObjectUserWireFrame3D                  = 11240,  ///< Пользовательский объект Каркас 3D.
  ksObjectThreads                          = 11241,  ///< Коллекция условных обозначений резьбы.
  ksObjectThread                           = 11242,  ///< Условное обозначение резьбы.
  ks3dMateConstraints                      = 11243,  ///< Коллекция 3D сопряжений.
  ksMate3DByAngle                          = 11244,  ///< Сопряжение под углом.
  ksMate3DByTangent                        = 11245,  ///< Сопряжение по касательной.
  ksMate3DSymmetry                         = 11246,  ///< Сопряжение симметрия.
  ksMate3DTransmission                     = 11247,  ///< Сопряжение механическое перемещение.
  ksMate3DCamGear                          = 11248,  ///< Сопряжение кулачок-толкатель.
  ksMate3DDependentPosition                = 11249,  ///< Сопряжение зависимое положение.
  ksObjectHoles3D                          = 11250,  ///< Коллекции отверстий 3D.
  ksObjectHole3D                           = 11251,  ///< Отверстие 3D.
  ksObjectCountersinkHoleParameters        = 11252,  ///< Параметры отверстия с зенковкой.
  ksObjectSpotfacingHoleParameters         = 11253,  ///< Параметры отверстия с цековкой.
  ksObjectCountersinkSpotfacingHoleParameters = 11254,  ///< Параметры отверстия с зенковкой и цековкой.
  ksObjectConicHoleParameters              = 11255,  ///< Параметры конического отверстия.
  ksObjectChamfers                         = 11256,  ///< Коллекции фасок.
  ksObjectChamfer                          = 11257,  ///< Фаска.
  ksObjectFillets                          = 11258,  ///< Коллекции скруглений.
  ksObjectFillet                           = 11259,  ///< Скругление.
  ksObjectInclines                         = 11260,  ///< Коллекции операций уклон.
  ksObjectIncline                          = 11261,  ///< Операция Уклон.
  ksObjectRibs                             = 11262,  ///< Коллекции операций Ребро жесткости.
  ksObjectRib                              = 11263,  ///< Ребро жесткости.
  ksObjectShells                           = 11264,  ///< Коллекции операций Оболочка.
  ksObjectShell                            = 11265,  ///< Оболочка.
  ksObjectBooleans                         = 11266,  ///< Коллекция булевых операций.
  ksObjectBoolean                          = 11267,  ///< Булева операция.
  ksObjectCuts                             = 11268,  ///< Коллекция операций 'сечение'
  ksObjectCut                              = 11269,  ///< Операция 'сечение'.
  ksObjectLofts                            = 11270,  ///< Коллекция операций по сечениям.
  ksObjectLoft                             = 11271,  ///< Операция по сечениям.
  ksObjectLoftSurfaces                     = 11272,  ///< Коллекция поверхностей по сечениям.
  ksObjectLoftSurface                      = 11273,  ///< Операция поверхность по сечениям.
  ksObjectCoupling                         = 11274,  ///< Цепочка в операции по сечениям.
  ksObjectEvolutions                       = 11275,  ///< Коллекция кинематических операций.
  ksObjectEvolution                        = 11276,  ///< Кинематическая операция.
  ksObjectEvolutionSurfaces                = 11277,  ///< Коллекция кинематических поверхностей.
  ksObjectEvolutionSurface                 = 11278,  ///< Кинематическая поверхность.
  ksObjectVertex                           = 11279,  ///< Вершина.
  ksObjectEdge                             = 11280,  ///< Ребро.
  ksObjectFace                             = 11281,  ///< Грань.
  ksObjectLoop7                            = 11282,  ///< Цикл.
  ksObjectOrientedEdge7                    = 11283,  ///< Ориентированное ребро.
  ksObjectUnionsComponents                 = 11284,  ///< Коллекция операций объединение компонентов.
  ksObjectUnionComponents                  = 11285,  ///< Операция объединения компонентов.
  ksObjectMoldCavities                     = 11286,  ///< Коллекция операций вычитания компонентов.
  ksObjectMoldCavity                       = 11287,  ///< Операция вычитания компонентов.
  ksObjectMacroObjects3D                   = 11288,  ///< Коллекция макроэлементов 3D.
  ksObjectMacroObject3D                    = 11289,  ///< 3D макроэлемент.
  ksObjectNurbsSurfacesByCurvesMeshs       = 11290,  ///< Коллекция поверхностей по сети кривых.
  ksObjectNurbsSurfaceByCurvesMesh         = 11291,  ///< Поверхностей по сети кривых.
  ksObjectJointSurfaces                    = 11292,  ///< Коллекция поверхностей соединения.
  ksObjectJointSurface                     = 11293,  ///< Поверхность соединения.
  ksObjectBodyRepositions                  = 11294,  ///< Коллекция операций перепози­ционирова­ния тела, поверхно­сти.
  ksObjectBodyReposition                   = 11295,  ///< Перепози­ционирова­ние тела, поверхно­сти.
  ksObjectDistanceAngleMeasurements3D      = 11296,  ///< Коллекция измерений расстояния и угла.
  ksObjectDistanceAngleMeasurement3D       = 11297,  ///< Измерение расстояния и угла.
  ksObjectEdgeLengthMeasurements3D         = 11298,  ///< Коллекция измерений длины ребра.
  ksObjectEdgeLengthMeasurement3D          = 11299,  ///< Измерение длины ребра.
  ksObjectAreaMeasurements3D               = 11300,  ///< Коллекция измерений площади.
  ksObjectAreaMeasurement3D                = 11301,  ///< Измерение площади.
  ksObjectSheetMetalSketchBends            = 11302,  ///< Коллекция операций сгиб по эскизу.
  ksObjectSheetMetalSketchBend             = 11303,  ///< Сгиб по эскизу.
  ksObjectSheetMetalClosedCorners          = 11304,  ///< Коллекция операций Замыкание углов.
  ksObjectSheetMetalClosedCorner           = 11305,  ///< Замыкание углов.
  ksObjectSheetMetalPlates                 = 11306,  ///< Коллекция операций Пластина.
  ksObjectSheetMetalPlate                  = 11307,  ///< Пластина.
  ksObjectSheetMetalUndercuts              = 11308,  ///< Коллекция операций Подсечка.
  ksObjectSheetMetalUndercut               = 11309,  ///< Подсечка.
  ksObjectSheetMetalBendedStraightens      = 11310,  ///< Коллекция операций Согнуть/Разогнуть.
  ksObjectSheetMetalBendedStraighten       = 11311,  ///< Согнуть/Разогнуть.
  ksObjectSheetMetalPressFormings          = 11312,  ///< Коллекция операций открытая или закрытая штамповка.
  ksObjectSheetMetalPressForming           = 11313,  ///< Открытая или закрытая штамповка.
  ksObjectSheetMetalShoulders              = 11314,  ///< Коллекция операций буртик.
  ksObjectSheetMetalShoulder               = 11315,  ///< Буртик.
  ksObjectSheetMetalJalousies              = 11316,  ///< Коллекция операций жалюзи.
  ksObjectSheetMetalJalousie               = 11317,  ///< Жалюзи.
  ksObjectSheetMetalRibs                   = 11318,  ///< Коллекция операций ребро уселения.
  ksObjectSheetMetalRib                    = 11319,  ///< Ребро уселения.
  ksObjectSheetMetalRuledShells            = 11320,  ///< Коллекция операций Обечайка.
  ksObjectSheetMetalRuledShell             = 11321,  ///< Обечайка.
  ksObjectSheetMetalLinearRuledShells      = 11322,  ///< Коллекция операций Линейчатая обечайка.
  ksObjectSheetMetalLinearRuledShell       = 11323,  ///< Линейчатая обечайка.
  ksObjectLibraryHoleParameters            = 11324,  ///< Параметры отверстия из библиотеки.
  ksObjectFullFillets                      = 11325,  ///< Коллекция операций полного скругления.
  ksObjectFullFillet                       = 11326,  ///< Полное скругление.
  ksObjectZone                             = 11327,  ///< Зона.
  ksObjectZonesManager                     = 11328,  ///< Менеджер зон.
  ksObjectZoneParametersByObjects          = 11329,  ///< Параметры зоны по суммарному габариту объектов.
  ksObjectZoneParametersByBorderPoints     = 11330,  ///< Параметры зоны заданной габаритным параллелепипедом.
  ksObjectZoneDivision                     = 11331,  ///< Разбить зону.
  ksObjectZoneDivisionParametersByPlanes   = 11332,  ///< Параметры разбиения зоны для способа по набору плоскостей.
  ksObjectZoneDivisionParametersRegular    = 11333,  ///< Параметры разбиения зоны для способа равномерно по осям.
  ksObjectDynamicCrossSection              = 11334,  ///< Динамическое сечение.
  ksObjectDynamicCrossSectionStep          = 11335,  ///< Шаг динамического сечения.
  ksObjectDynamicCrossSectionStepParametersByFreePlane    = 11336,  ///< Параметры шага динамического сечения по произвольной плоскости.
  ksObjectDynamicCrossSectionStepParametersByOffsetPlane  = 11337,  ///< Параметры шага динамического сечения по смещенной плоскости.
  ksObjectDynamicCrossSectionStepParametersByRotatedPlane = 11338,  ///< Параметры шага динамического сечения по плоскости под углом.
  ksObjectDynamicCrossSectionStepParametersByZone         = 11339,  ///< Параметры шага динамического сечения по зоне.
  ksObjectDynamicCrossSectionStepParametersByBorderPoints = 11340,  ///< Параметры шага динамического сечения по габаритному параллелепипеду заданному точками.
  ksObjectAxisLine3D                       = 11341,  ///< Осевая линия.
  ksObjectRestoredSurfaces                 = 11342,  ///< Коллекция операций восстановленная поверхность.
  ksObjectRestoredSurface                  = 11343,  ///< Восстановленная поверхность.
  ksObjectWireFrames3D                     = 11344,  ///< Коллекция трехмерных каркасов.
  ksObjectWireFrame3D                      = 11345,  ///< Трехмерный каркас.
  ksObjectDismantleStep                    = 11346,  ///< Шаг разнесения сборки.
  ksObjectArcDimension3D                   = 11347,  ///< Размер дуги окружности 3D.
  ksObjectArcDimensions3D                  = 11348,  ///< Коллекция размеров дуги окружностей 3D.
  ksObjectSheetMetalPunch                  = 11349,  ///< Листовой металл, штамповка телом.
  ksObjectSheetMetalPunchs                 = 11350,  ///< Коллекция операций Листовой металл, штамповка телом.
  ksObjectSheetMetalFlanging               = 11351,  ///< Листовой металл, отбортовка.
  ksObjectSheetMetalFlangings              = 11352,  ///< Коллекция операций Листовой металл, отбортовка.
  ksObjectFaceMovers                       = 11353,  ///< Коллекция операций перемещения граней.
  ksObjectFaceMover                        = 11354,  ///< Операция перемещения граней.
  ksObjectSplitSolid                       = 11355,  ///< Операция 'Разрезать'.
  ksObjectSplitSolids                      = 11356,  ///< Коллекция операций 'Разрезать'.
  ksObjectModelText                        = 11357,  ///< Текст в модели.
  ksObjectModelTexts                       = 11358,  ///< Коллекция текстов в модели.
  ksObjectModelTable                       = 11359,  ///< Таблица в модели.
  ksObjectModelTables                      = 11360,  ///< Коллекция таблиц в модели.
  ksObjectConicCurve3D                     = 11361,  ///< Коническая 3D кривая.
  ksObjectConicCurves3D                    = 11362,  ///< Коллекция конических кривых 3D.
  ksObjectComponentPositioner              = 11363,  ///< Интерфейс управления положением компонентов в сборке.
  ksObjectConicSurface                     = 11364,  ///< Поверхность конического сечения.
  ksObjectConicSurfaces                    = 11365,  ///< Коллекция поверхностей конического сечения.
  ksObjectConvertToSheetMetal              = 11366,  ///< Операции преобразования в листовое тело.
  ksObjectConvertsToSheetMetals            = 11367,  ///< Коллекция операций преобразования в листовое тело.
  ksObjectExtensionCurves                  = 11368,  ///< Коллекция продлений кривых.
  ksObjectExtensionCurve                   = 11369,  ///< Продления кривой.
  ksObjectRuledSurfaceParametersByFaces    = 11370,  ///< Параметры линейчатой поверхности 'По двум поверхностям.
  ksObjectRuledSurfaceTangentParametersByCurveAndFace = 11371,  ///< Параметры линейчатой поверхности 'По кривой с касанием к поверхности.
  ksObjectRuledSurfaceParametersByCurveAndFace = 11372,  ///< Параметры линейчатой поверхности 'По кривой и поверхности'.
  ksObjectRuledSurfaceParametersByCurveAndDir = 11373,  ///< Параметры линейчатой поверхности 'По кривой и направлению'.
  ksObjectViewProjection7                  = 11374,  ///< Интерфейс проекции отображения модели в окне.
  ksObjectViewProjectionManager            = 11375,  ///< Менеджер проекций отображения модели в окне.
  ksObjectPlane3DUnhistoried               = 11376,  ///< Плоскость без истории.
  ksObjectDraftFromEdges                   = 11377,  ///< Уклон от базовой линии.
  ksObjectDraftsFromEdges                  = 11378,  ///< Коллекции операций Уклон от базовой линии.
  ksObjectPoint3DParamBetweenPoints        = 11379,  ///< Интерфейс параметров пространственной точки между точками.
  ksObjectDrawingObject     = 13000,  ///< Графический объект.
  ksObjectDrawingText       = 13001,  ///< Текст на чертеже.
  ksObjectDrawingTexts      = 13002,  ///< Коллекция текстов на чертеже.
  ksObjectStraightAxis      = 13003,  ///< Прямая ось.
  ksObjectCircleAxis        = 13004,  ///< Круговая ось.
  ksObjectArcAxis           = 13005,  ///< Дуговая ось.
  ksObjectBuildingAxes      = 13006,  ///< Коллекция строительных осей.
  ksObjectAxisJut           = 13007,  ///< Выступ оси.
  ksObjectMarkNodes         = 13008,  ///< Kоллекция узлов для вставки марки.
  ksObjectMarkNode          = 13009,  ///< Узел для вставки дополнительных марок.
  ksObjectMarkOnLeader    = 13010,  ///< Марка/позиционное обозначение с линией-выноской.
  ksObjectMarkOnLine      = 13011,  ///< Марка/позиционное обозначение на линии.
  ksObjectMarkInsideForm  = 13012,  ///< Марка/позиционное обозначение без линии-выноски.
  ksObjectMarks           = 13013,  ///< Коллекция марок.
  ksObjectCutUnitMarking  = 13014,  ///< Обозначение узла в сечении.
  ksObjectCutUnitMarkings = 13015,  ///< Коллекция Обозначений узла в сечении.
  ksObjectUnitMarking     = 13016,  ///< Обозначение узла.
  ksObjectUnitMarkings    = 13017,  ///< Коллекция обозначений узлов.
  ksObjectUnitNumber      = 13018,  ///< Номер узла.
  ksObjectUnitNumbers     = 13019,  ///< Коллекция номеров узлов.
  ksObjectMultiTextLeader = 13020,  ///< Выносная надпись к многослойным конструкциям.
  ksObjectMultiTextLeaders = 13021,  ///< Коллекция выносных надписей к многослойным конструкциям.
  ksObjectBrace           = 13022,  ///< Фигурная скобка.
  ksObjectBraces          = 13023,  ///< Коллекция фигурных скобок.
  ksObjectLineSegments         = 13024,  ///< Коллекция отрезков.
  ksObjectLineSegment          = 13025,  ///< Отрезок.
  ksObjectArcs                 = 13026,  ///< Коллекция дуг.
  ksObjectArc                  = 13027,  ///< Дуга.
  ksObjectRadialDimension       = 13028,  ///< Радиальный размер.
  ksObjectDiametralDimension    = 13029,  ///< Диаметральный размер.
  ksObjectBreakRadialDimension  = 13030,  ///< Радиальный размер с изломом.
  ksObjectRadialDimensions      = 13031,  ///< Коллекция радиальных размеров.
  ksObjectBreakRadialDimensions = 13032,  ///< Коллекция радиальных размеров с изломом.
  ksObjectDiametralDimensions   = 13033,  ///< Коллекция диаметральных размеров.
  ksObjectLineDimension         = 13041,  ///< Линейный размер.
  ksObjectLineDimensions        = 13042,  ///< Коллекция линейных размеров.
  ksObjectBreakLineDimension    = 13043,  ///< Линейный размер с обрывом.
  ksObjectBreakLineDimensions   = 13044,  ///< Коллекция линейных размеров с обрывом.
  ksObjectHeightDimension       = 13045,  ///< Размер высоты.
  ksObjectHeightDimensions      = 13046,  ///< Коллекция размеров высоты.
  ksObjectAngleDimension        = 13047,  ///< Угловой размер.
  ksObjectBreakAngleDimension   = 13048,  ///< Угловой размер c обрывом.
  ksObjectAngleDimensions       = 13049,  ///< Коллекция угловых размеров.
  ksObjectArcDimension          = 13050,  ///< Размер дуги окружности.
  ksObjectArcDimensions         = 13051,  ///< Коллекция размеров дуг окружностей.
  ksObjectLeader                = 13052,  ///< Простая линия выноски.
  ksObjectLeaders               = 13053,  ///< Коллекция линий выносок.
  ksObjectRough                 = 13054,  ///< Обозначение шероховатости.
  ksObjectRoughs                = 13055,  ///< Коллекция обозначений шероховатости.
  ksObjectMarkLeader            = 13056,  ///< Знак маркировки.
  ksObjectBrandLeader           = 13057,  ///< Знак клеймения.
  ksObjectPositionLeader        = 13058,  ///< Линия выноски для обозначения позиции.
  ksObjectChangeLeader          = 13059,  ///< Обозначение изменения.
  ksObjectBase                  = 13060,  ///< Обозначение базы.
  ksObjectBases                 = 13061,  ///< Коллекция обозначений базы.
  ksObjectDrawingTable          = 13062,  ///< Таблица на чертеже.
  ksObjectDrawingTables         = 13063,  ///< Коллекция таблиц на чертеже.
  ksObjectTolerance             = 13064,  ///< Допуск формы.
  ksObjectTolerances            = 13065,  ///< Коллекция допусков формы.
  ksObjectCutLines              = 13066,  ///< Коллекция линий разреза/сечения.
  ksObjectCutLine               = 13067,  ///< Линия разреза/сечения.
  ksObjectViewPointer           = 13068,  ///< Cтрелка взгляда.
  ksObjectViewPointers          = 13069,  ///< Коллекция стрелок взгляда.
  ksObjectMultiline             = 13070,  ///< Мультилиния.
  ksObjectMultilines            = 13071,  ///< Коллекция мультилиний.
  ksObjectDrawingContour        = 13072,  ///< Контур на чертеже.
  ksObjectDrawingContours       = 13073,  ///< Коллекция контуров на чертеже.
  ksObjectCircles               = 13074,  ///< Коллекция окружностей.
  ksObjectCircle                = 13075,  ///< Окружность.
  ksObjectPoints                = 13076,  ///< Коллекция точек.
  ksObjectPoint                 = 13077,  ///< Точка.
  ksObjectBeziers               = 13078,  ///< Коллекция Bezier сплайнов.
  ksObjectBezier                = 13079,  ///< Bezier сплайн.
  ksObjectMacroObjects          = 13080,  ///< Коллекция макроэлементов.
  ksObjectMacroObject           = 13081,  ///< Макроэлемент.
  ksObjectLines                 = 13082,  ///< Коллекция линий.
  ksObjectLine                  = 13083,  ///< Линия.
  ksObjectPolyLines2D           = 13084,  ///< Коллекция полилиний.
  ksObjectPolyLine2D            = 13085,  ///< Полилиния.
  ksObjectNurbses               = 13086,  ///< Коллекция NURBS-кривых по полюсам.
  ksObjectNurbs                 = 13087,  ///< NURBS-кривая по полюсам.
  ksObjectRasters               = 13088,  ///< Коллекция растровых объектов.
  ksObjectRaster                = 13089,  ///< Растровый объект.
  ksObjectOleDrawingObjects     = 13090,  ///< Коллекция OLE-объектов.
  ksObjectOleDrawingObject      = 13091,  ///< OLE-объект.
  ksObjectEllipses              = 13092,  ///< Коллекция эллипсов.
  ksObjectEllipse               = 13093,  ///< Эллипс.
  ksObjectEllipseArcs           = 13094,  ///< Коллекция дуг элипсов.
  ksObjectEllipseArc            = 13095,  ///< Дуга элипса.
  ksObjectRectangles            = 13096,  ///< Коллекция прямоугольников.
  ksObjectRectangle             = 13097,  ///< Прямоугольник.
  ksObjectRegularPolygons       = 13098,  ///< Коллекция многоугольников.
  ksObjectRegularPolygon        = 13099,  ///< Многоугольник.
  ksObjectEquidistants          = 13100,  ///< Коллекция эквидистант.
  ksObjectEquidistant           = 13101,  ///< Эквидистанта.
  ksObjectInsertionFragment     = 13102,  ///< Вставка фрагмента.
  ksObjectInsertionView         = 13103,  ///< Вставка вида из другого чертежа.
  ksObjectInsertionObjects      = 13104,  ///< Коллекция вставок фрагментов и видов.
  ksObjectInsertionDefinition   = 13105,  ///< Описание вставки фрагмента и вида.
  ksObjectCentreMarkers         = 13106,  ///< Коллекция обозначений центров.
  ksObjectCentreMarker          = 13107,  ///< Обозначение центра.
  ksObjectRemoteElements        = 13108,  ///< Коллекция выносных элементов.
  ksObjectRemoteElement         = 13109,  ///< Выносной элемент.
  ksObjectAxisLines             = 13110,  ///< Коллекция осевых линий.
  ksObjectAxisLine              = 13111,  ///< Осевая линия.
  ksObjectHatchParam            = 13112,  ///< Параметры штриховки.
  ksObjectDrawingGroup          = 13113,  ///< Группа объектов.
  ksObjectDrawingGroups         = 13114,  ///< Коллекция групп объектов.
  ksObjectCurve2D               = 13115,  ///< Математическая 2D кривая.
  ksObjectHatches               = 13116,  ///< Коллекция штриховок.
  ksObjectHatch                 = 13117,  ///< Штриховка.
  ksObjectColourings            = 13118,  ///< Коллекция заливок.
  ksObjectColouring             = 13119,  ///< Заливка.
  ksObjectSpecRough             = 13120,  ///< Неуказанная шероховатость.
  ksObjectTechnicalDemand       = 13121,  ///< Технические требования.
  ksObjectAnnotativeLineSegment = 13122,  ///< Аннотационный отрезок.
  ksObjectAnnotativeCircle      = 13123,  ///< Аннотационная окружность.
  ksObjectAnnotativeEllipse     = 13124,  ///< Аннотационный эллипс.
  ksObjectAnnotativeArc         = 13125,  ///< Аннотационная дуга.
  ksObjectAnnotativeEllipseArc  = 13126,  ///< Аннотационная дуга эллипса.
  ksObjectAnnotativePolyLine    = 13127,  ///< Аннотационная полилиния.
  ksObjectAnnotativePoint       = 13128,  ///< Аннотационная точка.
  ksObjectAnnotativeText        = 13129,  ///< Текст с аннатационной точкой привязки.
  ksObjectAnnotativeObjects = 13130,  ///< Текст с аннатационной точкой привязки.
  ksObjectBuildingCutLines      = 13131,  ///< Коллекция линий разреза/сечения для СПДС.
  ksObjectBuildingCutLine       = 13132,  ///< Линия разреза/сечения для СПДС.
  ksObjectWaveLines             = 13133,  ///< Коллекция волнистых линий.
  ksObjectWaveLine              = 13134,  ///< Волнистая линия.
  ksObjectBrokenLines           = 13135,  ///< Коллекция линий обрыва с изломами.
  ksObjectBrokenLine            = 13136,  ///< Линия обрыва с изломами.
  ksObjectCopyObjectParam       = 13137,  ///< Параметры копирования объектов.
  ksObjectCurveCopyObjectParam  = 13138,  ///< Параметры копирования объектов вдоль кривой.
  ksObjectCircleCopyObjectParam = 13139,  ///< Параметры копирования объектов по окружности.
  ksObjectCircularCopyObjectParam = 13140,  ///< Параметры копирования объектов по концентрической сетке.
  ksObjectMeshCopyObjectParam      = 13141,  ///< Параметры копирования объектов по сетке.
  ksObjectLocalCoordinateSystem2D  = 13142,  ///< Локальная система координат.
  ksObjectLocalCoordinateSystems2D = 13143,  ///< Коллекция локальных систем координат.
  ksObjectAttachedLeader            = 13144,  ///< Присоединенная линия выноски (не имеет текстов).
  ksObjectAttachedLeaders           = 13145,  ///< Коллекция присоединенных линий выносок.
  ksObjectLoadCombinationsParam     = 13146,  ///< Параметры типа загрузки документа.
  ksObjectOpenDocumentParam         = 13147,  ///< Параметры открытия документа.
  ksObjectAssociationTables         = 13148,  ///< Коллекция ассоциативных таблиц.
  ksObjectAssociationTable          = 13149,  ///< Ассоциативная таблица.
  ksObjectNurbsesByPoints           = 13150,  ///< Коллекция NURBS-кривых по точкам.
  ksObjectNurbsByPoints             = 13151,  ///< NURBS-кривая по точкам.
  ksObjectProcess2D                 = 13152,  ///< Процесс 2D из библиотеки.
  ksObjectPhantom2D                 = 13153,  ///< Параметры фантома 2D.
  ksObjectProcess3D                 = 13154,  ///< Процесс 3D из библиотеки.
  ksObjectUserDesignationCompObj    = 13155,  ///< Составной пользовательский объект обозначение 3D.
  ksObjectUserFolder                = 13156,  ///< Пользовательская директория.
  ksObjectUserFolders               = 13157,  ///< Пользовательские директории.
  ksObjectMeshObject3D              = 13158,  ///< Пространственный полигональный объект.
  ksObjectConicCurves               = 13159,  ///< Коллекция конический кривых.
  ksObjectConicCurve                = 13160,  ///< Коническая кривая.
  ksObjectCircularsCentries         = 13161,  ///< Коллекция круговых сеток центоров.
  ksObjectCircularCentres           = 13162,  ///< Круговая сетка центров.
  ksObjectLinearsCentries           = 13163,  ///< Коллекция линейных сеток центоров.
  ksObjectLinearCentres             = 13164,  ///< Линейная сетка центров.
  ksObjectFindObjectParameters      = 13165,  ///< Параметры поиска объектов.
  ksObjectManipulators              = 13166,  ///< Коллекция манипуляторов.
  ksObjectPlacement3DManipulator    = 13167,  ///< Манипулятор системы координат.
  ksObjectEditDoubleManipulator     = 13168,  ///< Манипулятор ввиде редактора числового значения.
  ksObjectMouseEnterLeaveParameters = 13169,  ///< Параметры отображения точки позволяющей определить место применения контрола.
  ksObjectConditionIntersect        = 13170,  ///< Условное пересечение.
  ksObjectConditionIntersects       = 13171,  ///< Коллекция условных пересечений.
  ksObjectSaveAsDetailParam         = 13172,  ///< Параметры преобразования в модель.
  ksObjectFindObject3DParameters    = 13173,  ///< Параметры поиска объектов 3D.
  ksObjectNumericGroup              = 13174   ///< Группа автонумерации.
};


/// Типы контролов панели свойств.
enum ControlTypeEnum : int
{
  ksControlUnknown     = 0,  ///< Неизвестный тип.
  ksControlSeparator   = 1,  ///< Разделитель (сепаратор).
  ksControlEditInt     = 2,  ///< Редактор целочисленных значений.
  ksControlEditReal    = 3,  ///< Редактор дробных значений.
  ksControlEditStr     = 4,  ///< Редактор строковых значений.
  ksControlListInt     = 5,  ///< Комбобокс целочисленных значений.
  ksControlListReal    = 6,  ///< Комбобокс дробных значений.
  ksControlListStr     = 7,  ///< Комбобокс строковых значений.
  ksControlCheckBox    = 8,  ///< Чекбокс.
  ksControlMultiButton = 9,  ///< Набор кнопок.
  ksControlGrid        = 10,  ///< Сетка.
  ksControlSlideBox = 11,  ///< Окно отображения слайда, битмапа, группы или файла документа КОМПАС.
  ksControlUser        = 12,  ///< Пользовательский контрол.
  ksControlTextButton  = 13,  ///< Кнопка с текстом.
  ksControlSpinInt     = 14,  ///< Спин с редактором целочисленных значений.
  ksControlSpinReal    = 15,  ///< Спин с редактором дробных значений.
  ksControlFileName    = 16,  ///< Выбор файла.
  ksControlColor       = 17,  ///< Выбор цвета.
  ksControlEditList    = 18,  ///< Список
  ksControlEditLength  = 19,  ///< Редактор длины.
  ksControlEditAngle   = 20,  ///< Редактор угла.
  ksControlEditPoint   = 21,  ///< Редактор координат.
  ksControlListLength  = 22,  ///< Комбобокс длин.
  ksControlListAngle   = 23,  ///< Комбобокс углов.
  ksControlBmpList     = 24,  ///< Комбобокс со строкой и битмапом.
  ksControlLibExplorer = 25,  ///< Отображение библиотеки документов.
  ksControlListScale   = 26,  ///< Комбобокс со списком масштабов.
  ksControlLineStyle   = 27,  ///< Комбобокс со списком стилей линий.
  ksControlOpticalProps = 28,  ///< Контрол оптических свойств.
  ksControlEditCheckBox = 29,  ///< Редактор строковых значений c чекбоксом.
  ksControlPointStyle   = 30,  ///< Комбобокс со списком стилей точек.
  ksControlPointStyle3D = 31,  ///< Комбобокс со списком стилей точек 3D.
  ksControlLineStyle3D  = 32,  ///< Комбобокс со списком стилей линий 3D.
  ksControlHatchStyle   = 33,  ///< Комбобокс со списком стилей штриховок.
  ksControlGroupBegin   = 34,  ///< Начало группы контролов.
  ksControlGroupEnd     = 35,  ///< Конец группы контролов.
  ksControlTwinSwitcher = 36,  ///< Переключатель.
  ksControlPoint3D      = 37,  ///< Точка 3D.
  ksControlPreviewText  = 38,  ///< Предпросмотр текста.
  ksControlAggregateTriple = 40,  ///< Составной контрол из трех контролов.
  ksControlBasePoint    = 41,  ///< Базовая точка.
  ksControlLinkButton   = 42,  ///< Набор кнопок ввиде ссылок.
  ksControlMarking      = 43,  ///< Контрол обозначение.
  ksControlReplaceList  = 44   ///< Список замен текстов.
};


/// Типы документов КОМПАС.
enum DocumentTypeEnum : int
{
  ksDocumentUnknown       = 0,  ///< Неизвестный тип.
  ksDocumentDrawing       = 1,  ///< Чертеж.
  ksDocumentFragment      = 2,  ///< Фрагмент.
  ksDocumentSpecification = 3,  ///< Спецификация.
  ksDocumentPart          = 4,  ///< Деталь.
  ksDocumentAssembly      = 5,  ///< Сборка.
  ksDocumentTextual       = 6,  ///< Текстовый документ.
  ksDocumentTechnologyAssembly      = 7   ///< Технологическая сборка.
};


/// Типы разделителя (сепаратора).
enum SeparatorTypeEnum : int
{
  ksSeparatorDownName     = 0,  ///< Вывод имени снизу под сепаратором.
  ksSeparatorUpName       = 1,  ///< Вывод имени сверху над сепаратором.
  ksSeparatorWithoutLine  = 2,  ///< Вывод только имени - сепаратор превращается в статик.
  ksSeparatorBMPLeftName  = 3,  ///< Вывод битмапа с именем слева.
  ksSeparatorBMPRightName = 4   ///< Вывод битмапа с именем справа.
};


/// Состояние чекбокса.
enum CheckStateEnum : int
{
  ksCheckUndefined = 0,  ///< Чекбокс не нажат (пустой квадратик). Значение не задано.
  ksCheckCurrent   = 1,  ///< Чекбокс нажат (рисуется галочка).
  ksCheckFixed     = 2,  ///< Чекбокс фиксирован (перечеркнутый квадратик).
  ksCheckVariable  = 3   ///< Чекбокс не нажат (пустой квадратик). Значение задано.
};


/// Видимость имени контрола на панели свойств.
enum PropertyControlNameVisibility : int
{
  ksNameAlwaysVisible     = 0,  ///< Всегда показывать имя контрола панели свойств.
  ksNameHorizontalVisible = 1,  ///< Показывать на горизонтальной панели.
  ksNameVerticalVisible   = 2,  ///< Показывать на вертикальной панели.
  ksNameNoVisible         = 3   ///< Не показывать имя параметра.
};


/// Типы кнопок для элемента панели свойств - Набор кнопок.
enum ButtonTypeEnum : int
{
  ksPushButton   = 0,  ///< Набор обычных не фиксируемых кнопок.
  ksCheckButton  = 1,  ///< Набор фиксируемых кнопок.
  ksRadioButton  = 2   ///< Набор кнопок с возможностью фиксации только одной кнопки.
};


/// События пользовательского элемента управления.
enum ksPropertyUserControlNotifyEnum : int
{
  puCreateOCX  = 1,  ///< Создался OCX контрол.
  puDestroyOCX = 2   ///< Удаляется OCX контрол.
};


/// Тип отображения слайда в окне.
enum SlideTypeEnum : int
{
  ksSlide          = -1,  ///< Отображение слайда.
  ksBitmap         = 1,  ///< Отображение битмапа.
  ksGroup          = 2,  ///< Отображение группы.
  ksKompasDocument = 3,  ///< Отображение документа КОМПАС.
  ksKompasText     = 4   ///< Отображение текста в формате КОМПАС.
};


/// Тип фиксированности для умолчательных элементов управления панели свойств.
enum DefaultFixTypeEnum : int
{
  ksAllFixOff  = -1,  ///< Все элементы управления расфиксированы.
  ksAllFix     = 0,  ///< Все элементы управления фиксированы.
  ksPointFix   = 1,  ///< Фиксирована точка.
  ksAngleFix   = 2   ///< Фиксирован угол.
};


/// Pежим отображения окна.
enum FrameRegimeEnum : int
{
  ksFrameMinimize = 0,  ///< Свернуть окно.
  ksFrameMaximize = 1,  ///< Растянуть окно.
  ksFrameRestore  = 2   ///< Восстановить окно.
};


/// Тип изменения масштаба отображения документа в окне.
enum ZoomTypeEnum : int
{
  ksZoomNext     = 0,  ///< Следующий масштаб.
  ksZoomPrevious = 1,  ///< Предыдущий масштаб.
  ksZoomAll      = 2   ///< Показать весь документ.
};


/// События для окна документа : клавиатура, мышь, события по отрисовке документа.
enum ksDocumentFrameNotifyEnum : int
{
  frBeginPaint           = 1,  ///< Начало отрисовки документа.
  frClosePaint           = 2,  ///< Конец отрисовки документа.
  frMouseDown            = 3,  ///< Нажатие кнопки мыши.
  frMouseUp              = 4,  ///< Отпускание кнопки мыши.
  frMouseDblClick        = 5,  ///< Двойной клик кнопки мыши.
  frBeginPaintGL         = 6,  ///< Начало отрисовки в контексте OpenGL.
  frClosePaintGL         = 7,  ///< Окончание отрисовки в контексте OpenGL.
  frAddGabarit           = 8,  ///< Определение габаритов документа.
  frActivate             = 9,  ///< Окно активизировалось.
  frDeactivate           = 10,  ///< Окно деактивизировалось.
  frCloseFrame           = 11,  ///< Закрытие окна.
  frMouseMove            = 12,  ///< Перемещение мыши.
  frShowOcxTree          = 13,  ///< Активизация закладки дерева документа.
  frBeginPaintTmpObjects = 14,  ///< Начало отрисовки временных объектов(фантомов).
  frClosePaintTmpObjects = 15   ///< Конец отрисовки временных объектов(фантомов).
};


/// Типы интерфейсов параметров создаваемых методом GetParamStruct объекта KompasObject.
enum StructType2DEnum : int
{
  ko_Type1                 = 1,  ///< Интерфейс параметров фантома для сдвига группы ksType1
  ko_Type2                 = 2,  ///< Интерфейс параметров фантома-отрезка или фантома-окружности ksType2
  ko_Type3                 = 3,  ///< Интерфейс параметров фантома-половины прямоугольника c заданным углом ksType3
  ko_Type5                 = 4,  ///< Интерфейс параметров фантома-половины прямоугольника c заданным углом ksType5
  ko_Type6                 = 5,  ///< Интерфейс параметров пользовательского фантома ksType6
  ko_Phantom               = 6,  ///< Интерфейс параметров фантома ksPhantom
  ko_PlacementParam        = 7,  ///< Интерфейс параметров местоположения ksPlacementParam
  ko_ViewParam             = 8,  ///< Интерфейс параметров вида ksViewParam
  ko_LayerParam            = 9,  ///< Интерфейс параметров слоя ksLayerParam
  ko_RequestInfo           = 10,  ///< Интерфейс параметров запроса ksRequestInfo
  ko_LineSegParam          = 11,  ///< Интерфейс параметров отрезка ksLineSegParam
  ko_ArcByAngleParam       = 12,  ///< Интерфейс параметров дуги по центру и углам ksArcByAngleParam
  ko_ArcByPointParam       = 13,  ///< Интерфейс параметров дуги по центу и конечным точкам ksArcByPointParam
  ko_MathPointParam        = 14,  ///< Интерфейс параметров математической точки ksMathPointParam
  ko_RectParam             = 15,  ///< Интерфейс параметров габаритного прямоугольника ksRectParam
  ko_PointParam            = 16,  ///< Интерфейс параметров точки ksPointParam
  ko_BezierPointParam      = 17,  ///< Интерфейс параметров Nurbs-точки ksBezierPointParam
  ko_NurbsPointParam       = 18,  ///< Интерфейс параметров Nurbs-точки ksNurbsPointParam
  ko_BezierParam           = 19,  ///< Интерфейс параметров Bezier сплайна ksBezierParam
  ko_CircleParam           = 20,  ///< Интерфейс параметров окружности ksCircleParam
  ko_LineParam             = 21,  ///< Интерфейс параметров линии ksLineParam
  ko_EllipseParam          = 22,  ///< Интерфейс параметров эллипса ksEllipsceParam
  ko_EllipsArcParam        = 23,  ///< Интерфейс параметров дуги эллипса по углам ksEllipsArcParam
  ko_EllipsArcParam1       = 24,  ///< Интерфейс параметров дуги эллипса по параметрам ksEllipsArcParam1
  ko_EquidParam            = 25,  ///< Интерфейс параметров эквидистанты ksHatchParam
  ko_HatchParam            = 26,  ///< Интерфейс параметров штриховки ksHatchParam
  ko_ParagraphParam        = 27,  ///< Интерфейс параметров параграфа текста ksParagraphParam
  ko_TextParam             = 28,  ///< Интерфейс параметров текста ksTextParam
  ko_TextLineParam         = 29,  ///< Интерфейс параметров строки текста ksTextLineParam
  ko_TextItemFont          = 30,  ///< Интерфейс параметров фонта компоненты строки текста ksTextItemFont
  ko_TextItemParam         = 31,  ///< Интерфейс параметров компоненты строки текста ksTextItemParam
  ko_StandartSheet         = 32,  ///< Интерфейс параметров стандартного листа ksStandartSheet
  ko_SheetSize             = 33,  ///< Интерфейс параметров нестандартного листа ksSheetPar
  ko_SheetPar              = 34,  ///< Интерфейс параметров оформления ksSheetPar
  ko_DocumentParam         = 35,  ///< Интерфейс параметров документа ksDocumentParam
  ko_ColumnInfoParam       = 36,  ///< Интерфейс параметров колонки атрибута ksColumnInfoParam
  ko_AttributeType         = 37,  ///< Интерфейс параметров типа атрибута ksAttributeType
  ko_Attribute             = 38,  ///< Интерфейс параметров колонок атрибута ksAttribute
  ko_LibraryAttrTypeParam  = 39,  ///< Интерфейс параметров типов атрибутов ksLibraryAttrTypeParam
  ko_TAN                   = 40,  ///< Интерфейс параметров точек пересечения ksTAN
  ko_CON                   = 41,  ///< Интерфейс параметров точек пересечения ksCON
  ko_DimText               = 42,  ///< Интерфейс параметров размерной надписи ksDimText
  ko_LDimSource            = 43,  ///< Интерфейс параметров привязки линейного размера ksDimDrawing
  ko_DimDrawing            = 44,  ///< Интерфейс параметров отрисовки линейного и углового размеров ksDimDrawing
  ko_LDimParam             = 45,  ///< Интерфейс параметров линейного размера ksLDimParam
  ko_LBreakDimSource       = 46,  ///< Интерфейс параметров привязки лин. размера с обрывом ksLBreakDimSource
  ko_BreakDimDrawing = 47,  ///< Интерфейс параметров отрисовки линейного и углового размера с обрывом ksBreakDimDrawing
  ko_LBreakDimParam        = 48,  ///< Интерфейс параметров линейного размера с обрывом ksLBreakDimParam
  ko_ADimSource            = 49,  ///< Интерфейс параметров привязки углового размера ksADimSource
  ko_ADimParam             = 50,  ///< Интерфейс параметров углового размера ksADimParam
  ko_ABreakDimParam        = 51,  ///< Интерфейс параметров составляющих объектов размера ksABreakDimParam
  ko_RDimSource            = 52,  ///< Интерфейс параметров привязки диаметрального и радиального размеров ksRDimSource
  ko_RDimDrawing           = 53,  ///< Интерфейс параметров отрисовки диаметрального и радиального размеров ksRDimDrawing
  ko_RDimParam             = 54,  ///< Интерфейс параметров диаметрального и обычного радиального размера ksRBreakDrawing
  ko_RBreakDrawing         = 55,  ///< Интерфейс параметров отрисовки радиального размера с изломом ksRBreakDrawing
  ko_RBreakDimParam        = 56,  ///< Интерфейс параметров радиального размера с изломом ksRBreakDimParam
  ko_RoughPar              = 57,  ///< Интерфейс параметров шероховатости ksRoughPar
  ko_ShelfPar              = 58,  ///< Интерфейс параметров выносной полки шероховатости ksShelfPar
  ko_RoughParam            = 59,  ///< Интерфейс параметров шероховатости ksRoughParam
  ko_LeaderParam           = 60,  ///< Интерфейс параметров простой линии выноски ksLeaderParam
  ko_PosLeaderParam        = 61,  ///< Интерфейс параметров линии выноски для обозначения позиции ksPosLeaderParam
  ko_BrandLeaderParam      = 62,  ///< Интерфейс параметров линии выноски для обозначения клеймения ksBrandLeaderParam
  ko_MarkerLeaderParam     = 63,  ///< Интерфейс параметров линии выноски для обозначения маркирования ksMarkerLeaderParam
  ko_BaseParam             = 64,  ///< Интерфейс параметров базы ksBaseParam
  ko_CutLineParam          = 65,  ///< Интерфейс параметров линии разреза/сечения ksCutLineParam 
  ko_ViewPointerParam      = 66,  ///< Интерфейс параметров стрелки вида ksViewPointerParam
  ko_ToleranceBranch       = 67,  ///< Интерфейс параметров опоры допуска формы ksToleranceBranch
  ko_ToleranceParam        = 68,  ///< Интерфейс параметров участка допуска формы ksToleranceParam
  ko_CurvePattern          = 69,  ///< Интерфейс параметров участка штриховой кривой ksCurvePattern
  ko_CurvePicture          = 70,  ///< Интерфейс параметров участка картинки стиля ksCurvePicture
  ko_CurvePatternEx        = 71,  ///< Интерфейс параметров участка штриховой кривой расширенная ksCurvePatternEx
  ko_CurveStyleParam       = 72,  ///< Интерфейс параметров составляющих стиля кривой ksCurveStyleParam
  ko_DimensionPartsParam   = 73,  ///< Интерфейс параметров составляющих объектов размера ksDimensionPartsParam
  ko_TextStyleParam        = 74,  ///< Интерфейс параметров стиля текста ksTextStyleParam
  ko_ConicArcParam         = 75,  ///< Интерфейс параметров конического сечения ksConicArcParam
  ko_PolylineParam         = 76,  ///< Интерфейс параметров полилинии ksPolylineParam
  ko_LibStyle              = 77,  ///< Интерфейс параметров для подключения стиля из библиотеки ksLibStyle
  ko_TechnicalDemandParam  = 78,  ///< Интерфейс параметров для определения технических требований ksTechnicalDemandParam
  ko_SpecRoughParam        = 79,  ///< Интерфейс параметров для определения неуказанной шероховатости ksSpecRoughParam
  ko_DimensionOptions      = 80,  ///< Интерфейс параметров для определения настроек размеров ksDimensionOptions
  ko_SpcColumnParam        = 81,  ///< Интерфейс параметров для колонки спецификации ksSpcColumnParam
  ko_LibraryStyleParam     = 82,  ///< Интерфейс параметров для стиля в библиотеке стилей ksLibraryStyleParam
  ko_InertiaParam          = 83,  ///< Интерфейс параметров плоских моментно-центровочных характеристик ksInertiaParam
  ko_MassInertiaParam      = 84,  ///< Интерфейс параметров массо-центровочных характеристик ksMassInertiaParam
  ko_VariableParam         = 85,  ///< Интерфейс параметров параметрических переменных ksVariableParam
  ko_SnapOptions           = 86,  ///< Интерфейс параметров привязок в графическом документе ksSnapOptions
  ko_NurbsParam            = 87,  ///< Интерфейс параметров Nurbs-сплайна ksNurbsParam
  ko_InsertFragmentParam   = 88,  ///< Интерфейс параметров вставки фрагмента ksInsertFragmentParam
  ko_ConstraintParam       = 89,  ///< Интерфейс параметров сопряжения ksConstraintParam
  ko_CornerParam           = 90,  ///< Интерфейс параметров углов ksCornerParam
  ko_RectangleParam        = 91,  ///< Интерфейс параметров прямоугольника ksRectangleParam
  ko_RegularPolygonParam   = 92,  ///< Интерфейс параметров многоугольника ksRegularPolygonParam
  ko_CentreParam           = 93,  ///< Интерфейс параметров обозначения центра ksCentreParam
  ko_DocAttachSpcParam     = 94,  ///< Интерфейс параметров объекта спецификации ksDocAttachSpcParam
  ko_SpcObjParam           = 95,  ///< Интерфейс параметров объекта спецификации ksSpcObjParam
  ko_RasterParam           = 96,  ///< Интерфейс параметров растрового объекта ksRasterParam
  ko_RecordTypeAttrParam   = 97,  ///< Интерфейс параметров для стиля СП заполняется для типа значения RECORD_ATTR_TYPE ksRecordTypeAttrParam
  ko_NumberTypeAttrParam   = 98,  ///< Интерфейс параметров для стиля СП заполняется для типа значения DOUBLE_ATTR_TYPE и LINT_ATTR_TYPE ksNumberTypeAttrParam
  ko_SpcStyleColumnParam   = 99,  ///< Интерфейс параметров колонки таблицы спецификации ksSpcStyleColumnParam
  ko_SpcStyleSectionParam  = 100,  ///< Интерфейс параметров стиля разделa спецификации ksSpcStyleSectionParam
  ko_SpcSubSectionParam    = 101,  ///< Интерфейс параметров стиля подраздела спецификации ksSpcSubSectionParam
  ko_SpcTuningSectionParam = 102,  ///< Интерфейс параметров стиля настройки раздела спецификации ksSpcTuningSectionParam
  ko_SpcTuningStyleParam   = 103,  ///< Интерфейс параметров стиля настроек спецификации ksSpcTuningStyleParam
  ko_SpcStyleParam         = 104,  ///< Интерфейс параметров стиля спецификации ksSpcStyleParam.
  ko_SpcDescrParam         = 105,  ///< Интерфейс параметров описания спецификации ksSpcDescrParam.
  ko_QualityItemParam      = 106,  ///< Интерфейс параметров записи об одном интервале квалитета ksQualityItemParam.
  ko_QualityContensParam   = 107,  ///< Интерфейс параметров квалитета ksQualityContensParam
  ko_LtVariant             = 108,  ///< Интерфейс параметров варианта ksLtVariant.
  ko_ContourParam          = 109,  ///< Интерфейс параметров контура ksContourParam.
  ko_DoubleValue           = 110,  ///< Интерфейс параметров Nurbs-узла ksDoubleValue.
  ko_Char255               = 111,  ///< Интерфейс параметров строки ksChar255.
  ko_UserParam             = 112,  ///< Интерфейс параметров ползователя ksUserParam.
  ko_HatchLineParam        = 113,  ///< Интерфейс параметров линии штриховки ksHatchLineParam.
  ko_HatchStyleParam       = 114,  ///< Интерфейс параметров стиля штриховки ksHatchStyleParam.
  ko_OrdinatedSourceParam  = 115,  ///< Интерфейс параметров привязки размера высоты ksOrdinatedSourceParam.
  ko_OrdinatedDrawingParam = 116,  ///< Интерфейс параметров изображения размера высоты ksOrdinatedDrawingParam.
  ko_OrdinatedDimParam     = 117,  ///< Интерфейс параметров размера высоты ksOrdinatedDimParam.
  ko_SheetOptions          = 118,  ///< Интерфейс параметров параметров оформления ksSheetParOptions.
  ko_InsertFragmentParamEx = 119,  ///< Интерфейс параметров вставки фрагмента ksInsertFragmentParamEx.
  ko_TreeNodeParam         = 120,  ///< Интерфейс параметров узла дерева ksTreeNodeParam.
  ko_ViewColorParam        = 121,  ///< Интерфейс параметров цвета фона ksViewColorParam.
  ko_AssociationViewParam  = 122,  ///< Интерфейс параметров ассоциативного вида ksAssociationViewParam.
  ko_AxisLineParam         = 123,  ///< Интерфейс параметров осевой линии ksAxisLineParam.
  ko_TextDocumentParam     = 124,  ///< Интерфейс параметров текстового документа ksTextDocumentParam.
  ko_RemoteElementParam    = 125,  ///< Интерфейс параметров объекта 'Выносной элемент.' ksRemoteElementParam
  ko_CopyObjectParam       = 126,  ///< Интерфейс параметров для копирования объекта 2d документа ksCopyObjectParam.
  ko_OverlapObjectOptions  = 127,  ///< Интерфейс параметров перекрывающихся объектов ksOverlapObjectOptions
  ko_ChangeLeaderParam     = 128,  ///< Интерфейс параметров обозначения изменения
  ko_ParametrisationParam  = 9000   ///< Интерфейс параметров параметризации группы объектов ksParametrisationParam.
};


/// Начальное положение панели.
enum PropertyManagerLayout : int
{
  pmFloating    = 0,  ///< Панель не прикреплена.
  pmAlignTop    = 1,  ///< Панель прикреплена сверху.
  pmAlignBottom = 2,  ///< Панель прикреплена снизу.
  pmAlignRight  = 3,  ///< Панель прикреплена справа.
  pmAlignLeft   = 4,  ///< Панель прикреплена слева.
  pmAlignRightInGroup  = 5,  ///< Панель прикреплена справа в группе.
  pmAlignLeftInGroup   = 6   ///< Панель прикреплена слева в группе.
};


/// Типы процессов в КОМПАС 3D.
enum ProcessTypeEnum : int
{
  prUnknown                       = 0,  ///< Неизвестный процесс.
  prPoint                         = 10000,  ///< Точка.
  prPointAlong                    = 10001,  ///< Точки по кривой.
  prIntersectPoint                = 10002,  ///< Точки пересечения 2-х кривых.
  prAllIntersectPoint             = 10003,  ///< Точки пересечения кривой со всеми.
  prPointOnDistance               = 10004,  ///< Точка на кривой на заданном расстоянии от другой точки.
  prLineSeg                       = 10005,  ///< Отрезок.
  prParallelLineSeg               = 10006,  ///< Параллельный отрезок.
  prPerpendLineSeg                = 10007,  ///< Перпендикулярный отрезок.
  prTanLineSegByOutsidePnt        = 10008,  ///< Касательный отрезок через внешнюю точку.
  prTanLineSegByPntOn             = 10009,  ///< Касательный отрезок через точку кривой.
  prTangent2LineSeg               = 10010,  ///< Отрезок, касательный к 2 кривым.
  prContourLineSeg                = 10011,  ///< Отрезок в контуре.
  prContourParallelLineSeg        = 10012,  ///< Параллельный отрезок в контуре.
  prContourPerpendLineSeg         = 10013,  ///< Перпендикулярный отрезок в контуре.
  prContourTanLineSegByOutsidePnt = 10014,  ///< Касательный отрезок через внешнюю точку в контуре.
  prLine                          = 10015,  ///< Вспомогательная прямая.
  prVerticalLine                  = 10016,  ///< Вертикальная прямая.
  prHorizontalLine                = 10017,  ///< Горизонтальная прямая.
  prPerpendLine                   = 10018,  ///< Перпендикулярная прямая.
  prParallelLine                  = 10019,  ///< Параллельная прямая.
  prTangent2Line                  = 10020,  ///< Прямая, касательная к 2 кривым.
  prTanLineByPntOn                = 10021,  ///< Касательная прямая через точку кривой.
  prTanLineByOutsidePnt           = 10022,  ///< Касательная прямая через внешнюю точку.
  prBisectorLine                  = 10023,  ///< Биссектриса.
  prCircle                        = 10024,  ///< Окружность.
  prCircle3Points                 = 10025,  ///< Окружность по 3 точкам.
  prCircleCentreOnEl              = 10026,  ///< Окружность с центром на объекте.
  prCircleTangent                 = 10027,  ///< Окружность, касательная к 1 кривой.
  prCircleTangent2                = 10028,  ///< Окружность, касательная к 2 кривым.
  prCircleTangent3                = 10029,  ///< Окружность, касательная к 3 кривым.
  prCircle2Points                 = 10030,  ///< Окружность по 2 точкам.
  prCircleArc                     = 10031,  ///< Дуга.
  prArc3Points                    = 10032,  ///< Дуга по 3 точкам.
  prArc2PointsAngle               = 10033,  ///< Дуга по 2 точкам и углу раствора.
  prArc2Points                    = 10034,  ///< Дуга по 2 точкам.
  prArcTangent                    = 10035,  ///< Дуга, касательная к кривой.
  prContourArc                    = 10036,  ///< Дуга по трем точкам в контуре.
  prContourConArc                 = 10037,  ///< Сопряженная дуга в контуре.
  prEllipse                       = 10038,  ///< Эллипс.
  prEllipseGabDiagonal            = 10039,  ///< Эллипс по диагонали прямоугольника.
  prEllipseTangent2               = 10040,  ///< Эллипс, касательный к 2 кривым.
  prEllipseCentre3Points          = 10041,  ///< Эллипс по центру и 3 точкам.
  prEllipseParallel3Points        = 10042,  ///< Эллипс по 3 вершинам параллелограмма.
  prEllipseParallelCentre2Points  = 10043,  ///< Эллипс по центру, середине стороны и вершине параллелограмма.
  prEllipseGabCentrePoint         = 10044,  ///< Эллипс по центру и вершине прямоугольника.
  prBezier                        = 10045,  ///< Кривая Безье.
  prContourBezier                 = 10046,  ///< Сплайн в контуре.
  prPolyline                      = 10047,  ///< Ломаная.
  prNurbs                         = 10048,  ///< NURBS-кривая.
  prContourNurbs                  = 10049,  ///< NURBS-кривая в контуре.
  prRectangle                     = 10050,  ///< Прямоугольник.
  prRectangleCentrePoint          = 10051,  ///< Прямоугольник по центру и вершине.
  prPolygon                       = 10052,  ///< Многоугольник.
  prEquidToObj                    = 10053,  ///< Эквидистанта кривой.
  prAssemblyEquid                 = 10054,  ///< Эквидистанта по стрелке.
  prLineDimension                 = 10055,  ///< Линейный размер.
  prCommonBaseLineDim             = 10056,  ///< Линейный размер от общей базы.
  prChainLineDim                  = 10057,  ///< Линейный цепной размер.
  prCommonLineLineDim             = 10058,  ///< Линейный размер с общей размерной линией.
  pr2ObjectsLineDim               = 10059,  ///< Линейный размер от отрезка до точки.
  prCutLineDimension              = 10060,  ///< Линейный размер с обрывом.
  prAngleDimension                = 10061,  ///< Угловой размер.
  prCommonBaseAngleDim            = 10062,  ///< Угловой размер от общей базы.
  prChainAngleDim                 = 10063,  ///< Угловой цепной размер.
  prCommonLineAngleDim            = 10064,  ///< Угловой размер с общей размерной линией.
  prCutAngleDimension             = 10065,  ///< Угловой размер с обрывом.
  prRadialDimension               = 10066,  ///< Радиальный размер.
  prRadialDimensionWithBreak      = 10067,  ///< Радиальный размер с изломом.
  prDiametralDimension            = 10068,  ///< Диаметральный размер.
  prArcDimension                  = 10069,  ///< Размер дуги окружности.
  prOrdinateDimension             = 10070,  ///< Размер высоты.
  prLeader                        = 10071,  ///< Линия-выноска.
  prBrandLeader                   = 10072,  ///< Знак клеймения.
  prMarkLeader                    = 10073,  ///< Знак маркировки.
  prPositionLeader                = 10074,  ///< Обозначение позиций.
  prChangeLeader                  = 10075,  ///< Знак изменения.
  prHatch                         = 10076,  ///< Штриховка.
  prText                          = 10077,  ///< Ввод текста.
  prTable                         = 10078,  ///< Ввод таблицы.
  prRough                         = 10079,  ///< Шероховатость.
  prBase                          = 10080,  ///< База.
  prCutLine                       = 10081,  ///< Линия разреза.
  prViewPointer                   = 10082,  ///< Стрелка взгляда.
  prRemoteElement                 = 10083,  ///< Выносной элемент.
  prAxedLineSegment               = 10084,  ///< Осевая линия по двум точкам.
  prCentreMarker                  = 10085,  ///< Обозначение центра.
  prAssemblyContour               = 10086,  ///< Собрать контур.
  prFormTolerance                 = 10087,  ///< Допуск формы.
  prInsertRaster                  = 10088,  ///< Вставить растровый объект.
  prMakeMacro                     = 10089,  ///< Объединить в макроэлемент.
  prInsertFragment                = 10090,  ///< Вставить внешний фрагмент.
  prCreateSheetView               = 10091,  ///< Создать вид.
  prInsertOLEObject               = 10092,  ///< Вставить OLE-объект.
  prCreateStandartSheetView       = 10093,  ///< Создать стандартные виды.
  prCreateSectionSheetView        = 10094,  ///< Создать вид разрез/сечение.
  prCreateArbitrarySheetView      = 10095,  ///< Создать произвольный вид.
  prCreateProjectionSheetView     = 10096,  ///< Создать проекционный вид.
  prCreateArrowSheetView          = 10097,  ///< Создать вид по стрелке.
  prCreateRemoteSheetView         = 10098,  ///< Создать вид - выносной элемент.
  prCreateLocalSheetView          = 10099,  ///< Создать местный вид.
  prCreateLocalSectionSheetView   = 10100,  ///< Создать местный вид-разрез.
  prCreateBrokenSheetView         = 10101,  ///< Создать вид с разрывом.
  prContour                       = 10102,  ///< Непрерывный ввод объектов.
  prChamfer                       = 10103,  ///< Фаска между пересекающимися объектами.
  prChamferPolyContour            = 10104,  ///< Фаска на углах  объекта.
  prFillet                        = 10105,  ///< Скругление между пересекающимися объектами.
  prFilletPolyContour             = 10106,  ///< Скругление на углах объекта.
  prProjectionObject              = 10107,  ///< Спроецировать объект на плоскость эскиза.
  prSmartDimension                = 10108,  ///< Авторазмер.
  prSmartAxedLineSegment          = 10109,  ///< Автоосевая.
  prMeasurePointProperties        = 10110,  ///< Измерить координаты точки в локальной системе координат.
  prMeasureDistance2Points        = 10111,  ///< Измерить расстояние между двумя точками.
  prMeasureDistance2PointsByCurve = 10112,  ///< Измерить расстояние между двумя точками на кривой.
  prMeasureDistancePointObject    = 10113,  ///< Измерить расстояние от кривой до точки.
  prMeasureDistance2Curves        = 10114,  ///< Измерить расстояние между двумя кривыми.
  prMeasureAngle2Lines            = 10115,  ///< Измерить угол между двумя прямыми/отрезками.
  prMeasureAngle3Points           = 10116,  ///< Измерить угол, заданный 3 точками.
  prPerimeter                     = 10117,  ///< Измерить длину кривой и суммарную длину.
  prMeasureArea                   = 10118,  ///< Измерить площадь.
  prMix                           = 10119,  ///< Расчет массо-центровочных характеристик плоских фигур.
  prMix3DRevolution               = 10120,  ///< Расчет массо-центровочных характеристик тел вращения.
  prMix3DExtrision                = 10121,  ///< Расчет массо-центровочных характеристик тел выдавливания.
  prMix3DExtrusion                = 10121,  ///< Расчет массо-центровочных характеристик тел выдавливания.
  prObjectShift                   = 10122,  ///< Сдвиг выделенных объектов.
  prObjectShiftAngleLen           = 10123,  ///< Сдвиг с заданием угла и расстояния.
  prObjectRotate                  = 10124,  ///< Поворот выделенных объектов.
  prObjectScale                   = 10125,  ///< Масштабирование выделенных объектов.
  prObjectSymmetry                = 10126,  ///< Симметричное отображение выделенных объектов.
  prObjectMultiply                = 10127,  ///< Копирование выделенных объектов.
  prObjectMultiplyByCurve         = 10128,  ///< Копирование выделенных объектов по кривой.
  prObjectMultiplyByCircle        = 10129,  ///< Копирование выделенных объектов по окружности.
  prObjectMultiplyByRing          = 10130,  ///< Копирование выделенных объектов по концентрической сетке.
  prObjectMultiplyByMesh          = 10131,  ///< Копирование выделенных объектов по сетке.
  prMoveDeformation               = 10132,  ///< Деформация сдвигом.
  prRotateDeformation             = 10133,  ///< Деформация поворотом.
  prScaleDeformation              = 10134,  ///< Деформация масштабированием.
  prCutObjectPart                 = 10135,  ///< Усечь кривую.
  prCutObjectPartBy2Points        = 10136,  ///< Усечь кривую двумя точками.
  prJustify                       = 10137,  ///< Выровнять кривую по границе.
  prRemoveChamfer                 = 10138,  ///< Удалить фаску или скругление.
  prBreakCurve                    = 10139,  ///< Разбить кривую на две части.
  prBreakCurveNParts              = 10140,  ///< Разбить кривую на N равных частей.
  prBlackBox                      = 10141,  ///< Очистить заданную область.
  prConvertToNurbs                = 10142,  ///< Преобразовать геометрический объект или текст в NURBS-кривые.
  prParametricHorizontal          = 10143,  ///< Установить горизонтальность отрезка или прямой.
  prParametricVertical            = 10144,  ///< Установить вертикальность отрезка или прямой.
  prParametricXAlign              = 10145,  ///< Выровнять по горизонтали две характерные точки объектов.
  prParametricYAlign              = 10146,  ///< Выровнять по вертикали две характерные точки объектов.
  prParametricMergePoints         = 10147,  ///< Объединить две точки.
  prParametricPointOnCurve        = 10148,  ///< Задать размещение точки на кривой.
  prParametricPointSymmetry       = 10149,  ///< Симметрия 2 точек относительно оси.
  prParametricParallel            = 10150,  ///< Установить параллельность двух прямых и/или отрезков.
  prParametricNormal              = 10151,  ///< Установить перпендикулярность двух прямых и/или отрезков.
  prParametricColinear            = 10152,  ///< Установить коллинеарность двух прямых и/или отрезков.
  prParametricTangent             = 10153,  ///< Установить касание двух кривых.
  prParametricFixPoint            = 10154,  ///< Зафиксировать координаты точки.
  prParametricEqualRadiuses       = 10155,  ///< Установить равенство радиусов двух дуг и/или окружностей.
  prParametricEqualLength         = 10156,  ///< Установить равенство длин двух отрезков.
  prParametricFixDimension        = 10157,  ///< Зафиксировать значение размера.
  prParametricChangeDimension     = 10158,  ///< Установить значение размера.
  prParametricSelected            = 10159,  ///< Параметризовать выделенные объекты.
  prParametricDeleteObjConstraints= 10160,  ///< Показать/удалить ограничения.
  prParametricDeleteAllConstraints= 10161,  ///< Удалить все ограничения.
  prSelectObject                  = 10162,  ///< Выделить отдельный объект.
  prSelectLayer                   = 10163,  ///< Выделить слой указанием лежащего на этом слое объекта.
  prSelectSheetView               = 10164,  ///< Выделить вид указанием точки внутри этого вида.
  prSelectWithRect                = 10165,  ///< Выделить объекты внутри прямоугольной рамки.
  prSelectOutSideRect             = 10166,  ///< Выделить объекты снаружи от прямоугольной рамки.
  prSelectWithCutRect             = 10167,  ///< Выделить объекты, пересекающиеся с прямоугольной рамкой.
  prSelectWithCutPolyline         = 10168,  ///< Выделить объекты, пересекающиеся с ломаной.
  prExcludeObject                 = 10169,  ///< Исключить отдельный объект.
  prExcludeLayer                  = 10170,  ///< Исключить слой указанием лежащего на этом слое объекта.
  prExcludeSheetView              = 10171,  ///< Исключить вид указанием точки внутри этого вида.
  prExcludeWithRect               = 10172,  ///< Исключить объекты внутри прямоугольной рамки.
  prExcludeOutSideRect            = 10173,  ///< Исключить объекты объекты снаружи от прямоугольной рамки.
  prExcludeWithCutRect            = 10174,  ///< Исключить объекты, пересекающиеся с прямоугольной рамкой.
  prExcludeWithCutPolyline        = 10175,  ///< Исключить объекты, пересекающиеся с ломаной.
  prSmartLine                     = 10176,  ///< Автолиния.
  prBrace                         = 10177,  ///< Фигурная скобка.
  prAutoDimL                      = 10178,  ///< Авторазмер - ввод линейного размера.
  prAutoDimA                      = 10179,  ///< Авторазмер - ввод углового размера.
  prAutoDimD                      = 10180,  ///< Авторазмер - ввод диаметрального размера.
  prAutoDimR                      = 10181,  ///< Авторазмер - ввод радиального размера.
  prAutoDimLToPoint               = 10182,  ///< Авторазмер - ввод линейного размера от отрезка до точки.
  prAutoDimLBreak                 = 10183,  ///< Авторазмер - ввод линейного размера с обрывом от отрезка до отрезка осевой линией.
  prAutoDimABreak                 = 10184,  ///< Авторазмер - ввод углового размера с обрывом от отрезка до отрезка осевой линией.
  prTechnicalDemandPlacement      = 10185,  ///< Технические требования-размещение.
  prDirectAxis                    = 10186,  ///< Прямая координационная ось.
  prArcAxis                       = 10187,  ///< Дуговая координационная ось.
  prCircleAxis                    = 10188,  ///< Круговая координационная ось.
  prWaveLine                      = 10189,  ///< Волнистая линия.
  prMarkOnLDRPosNum               = 10190,  ///< Марка/Позиционное обозначение на линии выноске.
  prMarkWoLDRPosNum               = 10191,  ///< Марка/Позиционное обозначение без линии выноски.
  prKnotNumber                    = 10192,  ///< Номер узла.
  prUnitMarking                   = 10193,  ///< Обозначение узла.
  prCutUnitMarking                = 10194,  ///< Обозначение узла в сечении.
  prMultiTextLeader               = 10195,  ///< Выносная надпись к многослойным конструкциям.
  prColouring                     = 10196,  ///< Заливка.
  prMultiLine                     = 10197,  ///< Мультилиния.
  prBuildingCutLine               = 10198,  ///< Линия разреза/сечения для СПДС.
  prBrokenLine                    = 10199,  ///< Линия обрыва с изломами.
  prCreateReport                  = 10200,  ///< Создать отчет.
  prCreateAttachedLeaders         = 10201,  ///< Редактировать оформление составного объекта.
  prEditProperties                = 10202,  ///< Процесс редактирования свойств обекта или документа.
  prParametricBisector            = 10203,  ///< Создание ограничения биссектриса.
  prParametricFixedLenght         = 10204,  ///< Фиксировать длинну .
  prParametricFixedAngle          = 10205,  ///< Фиксировать угол.
  prParametricPointOnCurveMiddle  = 10206,  ///< Точка на середине кривой.
  prTechnicalDemand               = 10207,  ///< Ввод\Редактирование технических требований.
  prSpecRough                     = 10208,  ///< Ввод\Редактирование неуказанной шероховатости.
  prMoveSpecRough                 = 10209,  ///< Ручное размещение неуказанной шероховатости.
  prDeleteHistory                 = 10210,  ///< Удаление истории построения.
  prUndo                          = 10211,  ///< Undo.
  prRedo                          = 10212,  ///< Redo.
  prEmbodimentsReport             = 10213,  ///< Создать таблицу исполнений.
  prArrayParamReport              = 10214,  ///< Создать таблицу параметров массива.
  prConicCurve                    = 10215,  ///< Коническая кривая .
  prConicCurve4Or5Point           = 10216,  ///< Коническая кривая по 4 или 5 точками.
  prMarkOnLeader                  = 10217,  ///< Марка/позиционное обозначение с линией-выноской.
  prCutLineMultiple               = 10218,  ///< Линия сложного разреза/сечения.
  prBuildingCutLineMultiple       = 10219,  ///< Линия сложного разреза/сечения для СПДС.
  prCircularCentres               = 10220,  ///< Круговая сетка центров.
  prLinearCentres                 = 10221,  ///< Линейная сетка центров.
  prSelectWithPolyline            = 10222,  ///< Выделить объекты замкнутой ломаной.
  prBaseExtrusion                 = 20000,  ///< Базовая операция выдавливания.
  prBossExtrusion                 = 20001,  ///< Приклеивание выдавливанием.
  prCutExtrusion                  = 20002,  ///< Вырезать выдавливанием.
  prExtrusionSurface              = 20003,  ///< Поверхность выдавливания.
  prBaseRotated                   = 20004,  ///< Базовая операция вращения.
  prBossRotated                   = 20005,  ///< Приклеивание вращением.
  prCutRotated                    = 20006,  ///< Вырезать вращением.
  prRotatedSurface                = 20007,  ///< Поверхность вращения.
  prBaseEvolution                 = 20008,  ///< Кинематическая операция.
  prBossEvolution                 = 20009,  ///< Приклеинть кинематически.
  prCutEvolution                  = 20010,  ///< Вырезать кинематически.
  prEvolutionSurface              = 20011,  ///< Кинематическая поверхность.
  prBaseLoft                      = 20012,  ///< Базовая операция по сечениям.
  prBossLoft                      = 20013,  ///< Приклеивание по сечениям.
  prCutLoft                       = 20014,  ///< Вырезать по сечениям.
  prLoftSurface                   = 20015,  ///< Поверхность по сечениям.
  prFillet3D                      = 20016,  ///< Операция 'фаска'.
  prChamfer3D                     = 20017,  ///< Операция 'скругление'.
  prCutByPlane                    = 20018,  ///< Операция 'сечение поверхностью'.
  prCutBySketch                   = 20019,  ///< Операция 'сечение эскизом'.
  prMeshCopy                      = 20020,  ///< Операция копирования по сетке.
  prCircularCopy                  = 20021,  ///< Операция копирования по концентрической сетке.
  prCurveCopy                     = 20022,  ///< Операция копирования по кривой.
  prMirrorCopy                    = 20023,  ///< Операция 'зеркальный массив'.
  prMirrorAllCopy                 = 20024,  ///< Операция 'зеркально отразить все'.
  prDerivativePartArray           = 20025,  ///< Операция массив по образцу для сборки.
  prMeshPartArray                 = 20026,  ///< Операция массив по сетке для сборки.
  prCircularPartArray             = 20027,  ///< Операция массив по концентрической сетке для сборки.
  prCurvePartArray                = 20028,  ///< Операция массив по кривой для сборки.
  prIncline                       = 20029,  ///< Операция 'уклон'.
  prShell                         = 20030,  ///< Операция 'оболочка'.
  prRib                           = 20031,  ///< Операция 'ребро жесткости'.
  prHole                          = 20032,  ///< Отверстие.
  prThread                        = 20033,  ///< Условное изображение резьбы.
  prCPlaneOffset                  = 20034,  ///< Смещённая плоскость.
  prCPlane3Points                 = 20035,  ///< Плоскость по 3-м точкам.
  prCPlaneAngle                   = 20036,  ///< Плоскость под углом.
  prCPlaneEdgePoint               = 20037,  ///< Плоскость через ребро и вершину.
  prCPlaneParallel                = 20038,  ///< Плоскость через вершину параллельно другой плоскости.
  prCPlanePerpendicular           = 20039,  ///< Плоскость через вершину перпендикулярно ребру.
  prCPlaneNormalToSurface         = 20040,  ///< Нормальная плоскость.
  prCPlaneTangentToSurface        = 20041,  ///< Касательная плоскость.
  prCPlaneLineToEdge              = 20042,  ///< Плоскость через ребро параллельно/перпендикулярно другому ребру.
  prCAxis2Points                  = 20043,  ///< Ось по двум точкам.
  prCAxis2Planes                  = 20044,  ///< Ось по двум плоскостям.
  prCAxisConeface                 = 20045,  ///< Ось конической грани.
  prCAxisEdge                     = 20046,  ///< Ось проходящая через ребро.
  prCAxisOperation                = 20047,  ///< Ось операции.
  prPolyline3D                    = 20048,  ///< Ломаная.
  prSpline3D                      = 20049,  ///< Сплайн.
  prCylindricSpiral               = 20050,  ///< Цилиндрическая спираль.
  prConicSpiral                   = 20051,  ///< Коническая спираль.
  prImportedSurface               = 20052,  ///< Импортирванная поверхность.
  prInsertSketch                  = 20053,  ///< Эскиз из библиотеки.
  prInsertScetch                  = 20053,  ///< Эскиз из библиотеки.
  prEditSketch                    = 20054,  ///< Редактировать эскиз.
  prEditScetch                    = 20054,  ///< Редактировать эскиз.
  prOrientationScetch             = 20055,  ///< Разместить эскиз на плоскости.
  prInPlacePartEdit               = 20056,  ///< Редактировать компонент на месте.
  prOutPlacePartEdit              = 20057,  ///< Редактировать компонент в своем окне.
  prAddDetail                     = 20058,  ///< Вставить деталь в сборку.
  prAddAssembly                   = 20059,  ///< Вставить сборку в сборку.
  prMateCoincident                = 20060,  ///< Сопряжения компонентов - Совпадение.
  prMateConcentric                = 20061,  ///< Сопряжения компонентов - Соосность.
  prMateParallel                  = 20062,  ///< Сопряжения компонентов - Параллельность.
  prMatePerpendicular             = 20063,  ///< Сопряжения компонентов - Перпендикулярность.
  prMateOnDistance                = 20064,  ///< Сопряжения компонентов - На расстоянии.
  prMateOnAngle                   = 20065,  ///< Сопряжения компонентов - Под углом.
  prMateTangent                   = 20066,  ///< Сопряжения компонентов - Касание.
  prPartVariables                 = 20067,  ///< Просмотр и редактирование переменных.
  prCopyBilletPart                = 20068,  ///< Создание детали путем копирования детали из другого файла.
  prMakeMoldCavity                = 20069,  ///< Вычесть компоненты.
  prMakeUnionComps                = 20070,  ///< Объединить компоненты.
  prAddPartFromFile               = 20071,  ///< Добавить компонент из файла.
  prMovePart                      = 20072,  ///< Переместить компонент.
  prRotatePartWC                  = 20073,  ///< Повернуть компонент вокруг центральной точки.
  prRotatePartAxis                = 20074,  ///< Повернуть компонент вокруг оси.
  prRotatePartPoint               = 20075,  ///< Повернуть компонент вокруг точки.
  prMakeSplitLine                 = 20076,  ///< Построение линии разъема.
  prMeasureDistance3D             = 20077,  ///< Измерить расстояние и угол.
  prMeasurePerimeter3D            = 20078,  ///< Измерить длину ребра.
  prMeasureArea3D                 = 20079,  ///< Измерить площадь.
  prMeasureMix3D                  = 20080,  ///< Вычисление массо-центровочных характеристик.
  prMeasureInterferenceVolumes    = 20081,  ///< Проверка коллизий.
  prBaseShMtSolid                 = 20082,  ///< Листовое тело.
  prShMtBend                      = 20083,  ///< Построение сгиба вдоль ребра листового тела.
  prShMtCombinedBend              = 20084,  ///< Построение сгибов вдоль ребер листового тела по эскизу.
  prShMtBendLine                  = 20085,  ///< Создание сгиба в листовом теле по прямолинейному объекту.
  prShMtBendHook                  = 20086,  ///< Создание подсечки в листовом теле по прямолинейному объекту.
  prShMtHole                      = 20087,  ///< Построение круглого отверстия на грани листового тела.
  prShMtCut                       = 20088,  ///< Построение выреза на грани листового тела.
  prBaseShMtPlate                 = 20089,  ///< Добавление пластины к листовому телу.
  prShMtClosedCorner              = 20090,  ///< Замыкание углов двух смежных элементов листового тела.
  prShMtBendStraighten            = 20091,  ///< Разгибание элементов листового тела.
  prShMtBendBended                = 20092,  ///< Сгибание элементов листового тела.
  prShMtBendParamUnfold           = 20093,  ///< Настроить параметры развертки листового тела.
  prPatchSurface                  = 20094,  ///< Создание поверхности по замкнутому контуру.
  prSewSurface                    = 20095,  ///< Сшивка поверхностей.
  prMakeFaceRemover               = 20096,  ///< Удалить грани.
  prCPlaneMiddle                  = 20097,  ///< Средняя плоскость.
  prCPointControl                 = 20098,  ///< Контрольная точка.
  prCPointConjunctive             = 20099,  ///< Присоединительная точка.
  prCAggregateOper                = 20100,  ///< Булева операция.
  prCPlaneLineToFlat              = 20101,  ///< Плоскость через ребро параллельно/перпендикулярно грани.
  prPoint3D                      = 20103,  ///< Конструктивная 3D точка.
  prLocalCoordinateSystem        = 20104,  ///< Локальная система координат.
  prLineDimention3DPlane         = 20105,  ///< Размер по двум объектам и планару.
  prLineDimention3D              = 20106,  ///< Размер по ребру и точке.
  prAngleDimention3D             = 20107,  ///< Угловой размер.
  prRough3D                      = 20108,  ///< Шероховатость.
  prTolerance3D                  = 20109,  ///< Допуск формы и расположения поверхностей.
  prBrandLeader3D                = 20110,  ///< Клеймление.
  prMarkerLeader3D               = 20111,  ///< Маркировка.
  prPositionLeader3D             = 20112,  ///< Обозначение позиции.
  prBase3D                       = 20113,  ///< База.
  prLeader3D                     = 20114,  ///< Линия выноска.
  prSaveBody                     = 20115,  ///< Процесс сохранения тела в деталь.
  prCreateSketch                 = 20116,  ///< Процесс создания\редактирования эскиза.
  prMeasureInformation           = 20117,  ///< Информация об объекте.
  prEquidistant3D                = 20118,  ///< Эквидистанта 3D.
  prChoiceOperationResult        = 20119,  ///< Выбор результата операции.
  prChoiceBodyUnit               = 20120,  ///< Выбор частей тела.
  prSelectCurrentCS              = 20121,  ///< Выбрать текущую СК.
  prShmtRuledOperation           = 20122,  ///< Обечайка.
  prArc3D                        = 20123,  ///< Дуга в пространстве.
  prConnectCurve                 = 20124,  ///< Cопряжения кривых - соединение.
  prTrimCurve                    = 20125,  ///< Cопряжения кривых - обрезка.
  prFilletCurve                  = 20126,  ///< Cопряжения кривых - скругление.
  prSwithOwnCS                   = 20127,  ///< Перенести в СК.
  prScalingOperation             = 20128,  ///< Масштабирование.
  prPointDrivenPattern           = 20129,  ///< Массив по точкам.
  prNurbs3DByObjects             = 20130,  ///< Сплайн по объектам.
  prCurveOperationCrossing       = 20131,  ///< Кривая пересечение.
  prConvertToNurbsSurface3D      = 20133,  ///< NURBS-поверхность по объектам.
  prNurbsSurface3DByPoints       = 20134,  ///< NURBS-поверхность по точкам.
  prNurbsSurface3DByCurves       = 20135,  ///< NURBS-поверхность по сети кривых.
  prArrayPointsFromFile          = 20136,  ///< Массив точек из файла.
  prArrayPointsOnCurve           = 20137,  ///< Массив точек вдоль кривой.
  prArrayPointsByCloud           = 20138,  ///< NURBS-поверхность по облаку точек.
  prOffsetSurface                = 20139,  ///< Эквидистанта поверхности.
  prAuxObjectMultiplyByMesh      = 20140,  ///< Копирование вспомогательной геометрии по плоской параллелограмной сетке.
  prAuxObjectMultiplyByRing      = 20141,  ///< Копирование вспомогательной геометрии по плоской концентрической сетке.
  prAuxObjectMultiplyByCurve     = 20142,  ///< Копирование вспомогательной геометрии вдоль кривой.
  prTrimmedSurface               = 20143,  ///< Усечение поверхности по объекту.
  prSurfaceToBody                = 20144,  ///< Создание тела из поверхности приданием ей толщины.
  prAxisByDirection              = 20145,  ///< Ось через вершину по объекту.
  prRuledSurface                 = 20146,  ///< Линейчатая поверхность.
  prExtensionSurface             = 20147,  ///< Продление поверхности.
  prCPlaneTangentAtPoint         = 20148,  ///< Плоскость, касательная к грани в точке.
  prCPlaneAtCurve                = 20149,  ///< Плоскость через плоскую кривую.
  prArrayPintsOnSyrface          = 20150,  ///< Группа точек по поверхности.
  prAuxObjectMultiplyMirror      = 20151,  ///< Зеркальная копия вспомогательной геометрии.
  prOutlineCurve                 = 20152,  ///< Построение линии очерка поверхности.
  prSplineOnSurface              = 20153,  ///< Сплайн на поверхности.
  prPartsPointDrivenPattern      = 20154,  ///< Массив компонентов по точкам.
  prChooseLinearPattern          = 20155,  ///< Процесс выбора объектов копирования. По сетке.
  prChooseCircularPattern        = 20156,  ///< Процесс выбора объектов копирования. По концентрической сетке.
  prChooseCurvePattern           = 20157,  ///< Процесс выбора объектов копирования. По кривой.
  prChoosePointDrivenPattern     = 20158,  ///< Процесс выбора объектов копирования. По точкам.
  prChooseTablePattern           = 20159,  ///< Процесс выбора объектов копирования. По таблице.
  prChooseMirrorPattern          = 20160,  ///< Процесс выбора объектов копирования. Симметрия.
  prTablePattern                 = 20161,  ///< Массив операций по таблице.
  prAuxTablePattern              = 20162,  ///< Массив вспомогательной геометрии по таблице.
  prPartsTablePattern            = 20163,  ///< Массив компонентов по таблице.
  prAuxPointDrivenPattern        = 20164,  ///< Массив вспомогательной геометрии по точкам.
  prBodiesLinearPattern          = 20165,  ///< Массив тел по сетке.
  prBodiesCircularPattern        = 20166,  ///< Массив тел по концентрической сетке.
  prBodiesCurvePattern           = 20167,  ///< Массив тел по кривой.
  prBodiesPointDrivenPattern     = 20168,  ///< Массив тел по точкам.
  prBodiesTablePattern           = 20169,  ///< Массив тел по таблице.
  prContour3D                    = 20170,  ///< Контур 3D.
  prCurveOper2Projection         = 20171,  ///< Кривая по 2 проекциям.
  prCurveByLaw                   = 20172,  ///< Кривая по закону.
  prBodyReposition               = 20173,  ///< Изменить положение тела или поверхности.
  prIsoparamCurve                = 20174,  ///< Изопараметрическая кривая.
  prIsoparamCurveArr             = 20175,  ///< Группа изопараметрических кривых на поверхности.
  prBindingMesh                  = 20176,  ///< Редактировать как сплайн по сетке.
  prSaveBodyAs                   = 20177,  ///< Сохранение тела в деталь.
  prBlendSurface                 = 20178,  ///< Поверхность соединения.
  prLineSegment3D                = 20179,  ///< Отрезок 3D.
  prEmbodiment                   = 20180,  ///< Создание исполнения.
  prCreateSpecificationObjects      = 20181,  ///< Создать объекты спецификации.
  prDeleteSpecificationObjects      = 20182,  ///< Удалить объекты спецификации.
  prCreateSpecificationFromAssembly = 20183,  ///< Создать спецификацию по сборке.
  prSpecRough3D                     = 20184,  ///< Ввод\Редактирование неуказанной шероховатости.
  prShmtLinearRuledOperation        = 20185,  ///< Линейчатая обечайка.
  prRepositionPart                  = 20186,  ///< Разместить компонент.
  prAddLocalPartFromFile            = 20187,  ///< Добавить локальную деталь из файла.
  prAddLayoutGeometryFromFile       = 20188,  ///< Добавить компоновочную геометрию.
  prAddBilletPartFromFile           = 20189,  ///< Добавить деталь заготовку.
  prMateSymmetry                    = 20190,  ///< Сопряжения компонентов - Симметрия.
  prMateDependent                   = 20191,  ///< Сопряжения компонентов - Зависимое положение.
  prMateCamGear                     = 20192,  ///< Сопряжения компонентов - Кулачковый механизм. Кулачек-толкатель.
  prMateRotation                    = 20193,  ///< Сопряжения компонентов - Вращение-Вращение .
  prMateRotationTransfer            = 20194,  ///< Сопряжения компонентов - Вращение-Перемещение.
  prTechnicalDemand3D               = 20195,  ///< Ввод\Редактирование технических требований 3D.
  prHoleSimple                      = 20196,  ///< Отверстие простое.
  prHoleCounterbore                 = 20197,  ///< Отверстие с цековкой.
  prHoleCountersinking              = 20198,  ///< Отверстие с зенковкой.
  prHoleCounterdrill                = 20199,  ///< Отверстие с зенковкой и цековкой.
  prHoleConic                       = 20200,  ///< Отверстие коническое.
  prPoint3DCoord                 = 20201,  ///< Конструктивная 3D точка. Точка по координатам.
  prPoint3DDisplace              = 20202,  ///< Конструктивная 3D точка. Точка переносом.
  prPoint3DIntersect             = 20203,  ///< Конструктивная 3D точка. Точка на пересечении.
  prPoint3DCurve                 = 20204,  ///< Конструктивная 3D точка. Точка на кривой.
  prPoint3DSurface               = 20205,  ///< Конструктивная 3D точка. Точка на поверхности.
  prPoint3DCenter                = 20206,  ///< Конструктивная 3D точка. Точка в центре.
  prPoint3DProjection            = 20207,  ///< Конструктивная 3D точка. Точка в центре.
  prPoint3DCylindrCoord          = 20208,  ///< Конструктивная 3D точка. Цилиндрические координаты.
  prPoint3DSphericCoord          = 20209,  ///< Конструктивная 3D точка. Сферические координаты.
  prShMtBendObject                      = 20210,  ///< Листовой металл, сгибы листовых операций.
  prShMtClocingPressForming             = 20211,  ///< Листовой металл, закрытая штамповка.
  prShMtOpeningPressForming             = 20212,  ///< Листовой металл, открытая штамповка.
  prShMtShoulder                        = 20213,  ///< Листовой металл, буртик.
  prShMtJalousie                        = 20214,  ///< Листовой металл, жалюзи.
  prShMtRib                             = 20215,  ///< Ребро усиления
  prAxis3D                              = 20216,  ///< Осевая линия
  prFullFillet                          = 20217,  ///< Полное скругление
  prRestoredSurface                     = 20218,  ///< Восстановленная поверхность.
  prCurvatureGraph                      = 20219,  ///< График кривизны.
  prContinuityCheck                     = 20220,  ///< Проверка непрерывности.
  prSectionAnalysis                     = 20221,  ///< Сетка графиков кривизны.
  prArcDimension3D                      = 20222,  ///< Размер дуги окружности 3D.
  prSketchArcDimension3D                = 20223,  ///< Управляющий размер дуги окружности эскиза 3D.
  prSheetMetalPunch                     = 20224,  ///< Листовой металл, штамповка телом.
  prSheetMetalFlanging                  = 20225,  ///< Листовой металл, отбортовка.
  prMakeFaceMover                       = 20226,  ///< Переместить грани.
  prSplitSolid                          = 20227,  ///< Операция 'Разрезать'.
  prSheetMetalConvertFromBody           = 20228,  ///< Операция 'Преобразования в листовое тело'.
  prConicSectionSurface                 = 20229,  ///< Поверхность конического сечения.
  prConicCurve3DVertexAndHeight         = 20230,  ///< Коническая кривая по вершине и дискриминанту.
  prConicCurve3DVertexAndPointOnCurve   = 20231,  ///< Коническая кривая по вершине и точке на кривой.
  prConicCurve3DTangentsAndHeight       = 20232,  ///< Коническая кривая по касательным и дискриминанту.
  prConicCurve3DTangentsAndPointOnCurve = 20233,  ///< Коническая кривая по касательным и точке на кривой.
  prAddDummyPartFromFile                = 20234,  ///< Добавить макет компонента из файла.
  prExtensionCurve                      = 20235,  ///< Продление кривой.
  prPoint3DBetweenPoints                = 20236,  ///< Конструктивная 3D точка. Между точками.
  prAlignShelfs                     = 36075,  ///< Выровнять полки выносок.
  prZoomWindow                   = 32411,  ///< Увеличить масштаб окном.
  prMoveView                     = 32418,  ///< Сдвинуть изображение.
  prPanoramaView                 = 32419,  ///< Приблизить/отдалить изображение.
  prRotateView                   = 32420,  ///< Повернуть изображение (для 3Д-окна).
  prEditSelectedObject           = 35736,  ///< Редактировать выделенный объект.
  prEditSelectedObject3D         = 40707,  ///< Редактировать выделенный 3D объект.
  prEditCopy     = ID_EDIT_COPY,  ///< Копировать в буфер обмена.
  prEditCut      = ID_EDIT_CUT,  ///< Вырезать в буфер обмана.
  prEditPaste    = ID_EDIT_PASTE   ///< Вставить из буфера обмена.
};


/// Действия при закрытии документа КОМПАС.
enum DocumentCloseOptions : int
{
  kdDoNotSaveChanges    = 0,  ///< Закрыть без сохранения, если документ был изменен.
  kdSaveChanges         = 1,  ///< Закрыть с сохранением, если документ был изменен.
  kdPromptToSaveChanges = 2   ///< Выдать запрос на сохранение документа, если он изменен.
};


/// Типы преобразования логических координат в координаты документа.
enum ConvertCoordTypeEnum : int
{
  kcDocument        = 1,  ///< В СК документа.
  kcGeoView         = 2,  ///< В геом.точку текущего вида.
  kcCurrentPlane    = 3   ///< в СК текущего плоского объекта.
};


/// Состояние параметра в условии фильтрации слоев.
enum FilterConditionStateEnum : int
{
  ksStateUndefined = -1,  ///< Состояние неопределено.
  ksStateFALSE     = 0,  ///< Состояние FALSE.
  ksStateTRUE      = 1   ///< Состояние TRUE.
};


/// Типы видов чертежа.
enum LtViewType : int
{
  vtUnknown   = -1,  ///< Неизвестный тип.
  vt_System    = 0,  ///< Системный вид (с номером 0, создается автоматически, существует всегда).
  vt_Normal    = 1,  ///< Обычный вид.
  vt_Arbitrary = 2,  ///< Произвольный вид.
  vt_Standart  = 3,  ///< Стандартный вид.
  vt_Projected = 4,  ///< Проекционный вид.
  vt_Arrow     = 5,  ///< Вид по стрелке.
  vt_Remote    = 6,  ///< Выносной вид.
  vt_Section   = 7,  ///< Вид разрез\сечение.
  vt_Remote2D  = 100   ///< Выносной вид не связанный с 3D моделью.
};


/// Способ группировки слоев.
enum LayersGroupWayEnum : int
{
  wgLayers                = 0,  ///< Группировать слои.
  wgLayersCharacteristics = 1   ///< Группировать свойства слоев.
};


/// Типы графических объектов.
enum DrawingObjectTypeEnum : int
{
  ksUnknown            = -1,  ///< Неизвестный объект.
  ksAllObj             = 0,  ///< Все объекты).
  ksDrLineSeg            = 1,  ///< Отрезок.
  ksDrCircle             = 2,  ///< Окружность.
  ksDrArc                = 3,  ///< Дуга.
  ksDrDrawText           = 4,  ///< Текст на чертеже.
  ksDrPoint              = 5,  ///< Точка.
  ksDrHatch              = 7,  ///< Штриховка.
  ksDrBezier             = 8,  ///< Bezier сплайн.
  ksDrLDimension         = 9,  ///< Линейный размер.
  ksDrADimension         = 10,  ///< Угловой размер.
  ksDrDDimension         = 13,  ///< Диаметральный размер.
  ksDrRDimension         = 14,  ///< Радиальный размер.
  ksDrRBreakDimension    = 15,  ///< Радиальный размер с изломом.
  ksDrRough              = 16,  ///< Шероховатость.
  ksDrBase               = 17,  ///< База.
  ksDrWPointer           = 18,  ///< Стрелка вида.
  ksDrCut                = 19,  ///< Линия разреза.
  ksDrLeader             = 20,  ///< Простая линия выноски.
  ksDrPosLeader          = 21,  ///< Линия выноски для обозначения позиции.
  ksDrBrandLeader        = 22,  ///< Линия выноски для обозначения клеймения.
  ksDrMarkerLeader       = 23,  ///< Линия выноски для обозначения маркирования.
  ksDrTolerance          = 24,  ///< Допуск формы.
  ksDrTable              = 25,  ///< Таблица.
  ksDrContour            = 26,  ///< Контур.
  ksDrMacro              = 27,  ///< Нетипизированный макроэлемент.
  ksDrLine               = 28,  ///< Линия.
  ksLayer                = 29,  ///< Слой.
  ksDrFragment           = 30,  ///< Вставной фрагмент.
  ksDrPolyline           = 31,  ///< Полилиния.
  ksDrEllipse            = 32,  ///< Эллипс.
  ksDrNurbs              = 33,  ///< NURBS-кривая по полюсам.
  ksDrEllipseArc         = 34,  ///< Дуга эллипса.
  ksDrRectangle          = 35,  ///< Прямоугольник.
  ksDrRegularPolygon     = 36,  ///< Многоугольник.
  ksDrEquid              = 37,  ///< Эквидистанта.
  ksDrLBreakDimension    = 38,  ///< Линейный размер с обрывом.
  ksDrABreakDimension    = 39,  ///< Угловой размер с обрывом.
  ksDrOrdinateDimension  = 40,  ///< Размер высоты.
  ksDrColorFill          = 41,  ///< Фоновая заливка цветом.
  ksDrCentreMarker       = 42,  ///< Обозначение центра.
  ksDrArcDimension       = 43,  ///< Размер длины дуги.
  ksDrRaster             = 45,  ///< Растровый объект.
  ksDrChangeLeader       = 46,  ///< Обозначение изменения.
  ksDrRemoteElement      = 47,  ///< Выносной элемент.
  ksDrAxisLine           = 48,  ///< Осевая линия.
  ksDrOLEObject          = 49,  ///< Вставка ole объекта.
  ksDrUnitNumber         = 50,  ///< Номер узла.
  ksDrBrace              = 51,  ///< Фигурная скобка.
  ksDrMarkOnLeader       = 52,  ///< Марка/позиционное обозначение с линией-выноской.
  ksDrMarkOnLine         = 53,  ///< Марка/позиционное обозначение на линии.
  ksDrMarkInsideForm     = 54,  ///< Марка/позиционное обозначение без линии-выноски.
  ksDrWaveLine           = 55,  ///< Волнистая линия.
  ksDrStraightAxis       = 56,  ///< Прямая ось.
  ksDrBrokenLine         = 57,  ///< Линия обрыва с изломами.
  ksDrCircleAxis         = 58,  ///< Круговая ось.
  ksDrArcAxis            = 59,  ///< Дуговая ось.
  ksDrCutUnitMarking     = 60,  ///< Обозначение узла в сечении.
  ksDrUnitMarking        = 61,  ///< Обозначение узла.
  ksDrMultiTextLeader    = 62,  ///< Выносная надпись к многослойным конструкциям.
  ksDrExternalView       = 63,  ///< Вставка внешнего вида.
  ksDrAnnLineSeg         = 64,  ///< Аннотационный отрезок.
  ksDrAnnCircle          = 65,  ///< Аннотационная окружность.
  ksDrAnnEllipse         = 66,  ///< Аннотационный эллипс.
  ksDrAnnArc             = 67,  ///< Аннотационная дуга.
  ksDrAnnEllipseArc      = 68,  ///< Аннотационная дуга эллипса.
  ksDrAnnPolyline        = 69,  ///< Аннотационная полилиния.
  ksDrAnnPoint           = 70,  ///< Аннотационная точка.
  ksDrAnnText            = 71,  ///< Текст с аннатационной точкой привязки.
  ksDrMultiLine          = 72,  ///< Мультилиния.
  ksDrBuildingCutLine    = 73,  ///< Линия разреза/сечения для СПДС.
  ksDrAttachedLeader     = 74,  ///< Присоединенная линия выноски (не имеет текстов).
  ksDrConditionCrossing  = 75,  ///< Условное пересечение.
  ksReportTable          = 76,  ///< Ассоциативная таблица отчета.
  ksEmbodimentsTable     = 77,  ///< Таблица иполнений.
  ksDrSpecialCurve       = 78,  ///< Кривая общего вида.
  ksArrayParamTable      = 79,  ///< Таблица параметров массива.
  ksDrNurbsByPoints      = 80,  ///< NURBS-кривая по точкам.
  ksDrConicCurve         = 81,  ///< Коническая кривая.
  ksDrCircularCentres    = 84,  ///< Круговая сетка центров.
  ksDrLinearCentres      = 85,  ///< Линейная сетка центров.
  ksDrEllipseArcAxis     = 86,  ///< Дуговая осевая линия.
  ksView                 = 123   ///< Вид.
};


/// События для менеджера видов и слоев.
enum ksViewsAndLayersManagerNotifyEnum : int
{
  vmBeginEdit  = 1,  ///< Начало редактирования.
  vmEndEdit    = 2   ///< Завершение редактирования.
};


/// Типы библиотек.
enum ksLibraryTypeEnum : int
{
  ksLibraryUnknown   = 0,  ///< Неизвестный тип
  ksLibraryProcedure = 1,  ///< Прикладная библиотека
  ksLibraryFragment  = 2,  ///< Библиотека фрагментов.
  ksLibraryModel     = 3,  ///< Библиотека моделей.
  ksLibraryDocuments = 4   ///< Универсальная библиотека документов.
};


/// Стили отображения прикладных библиотек.
enum ksLibraryStyleEnum : int
{
  ksLibraryStyleUnknown   = 0,  ///< Неизвестный стиль
  ksLibraryStyleMenu      = 1,  ///< Отображение в виде меню
  ksLibraryStyleDialog    = 2,  ///< Отображение в виде диалогового окна.
  ksLibraryStyleWindow    = 3,  ///< Отображение в виде специального окна.
  ksLibraryStyleBar       = 4,  ///< Отображение в виде панели инструментов.
  ksLibraryStyleInvisible = 5   ///< Невидимый режим.
};


/// События для менеджера библиотек.
enum ksLibraryManagerNotifyEnum : int
{
  ksLMBeginAttach                = 1,  ///< Подключить библиотеку.
  ksLMAttach                     = 2,  ///< Подключили библиотеку.
  ksLMBeginDetach                = 3,  ///< Отключить библиотеку.
  ksLMDetach                     = 4,  ///< Отключили библиотеку.
  ksLMBeginExecute               = 5,  ///< Запуск выполнения комманды библиотеки.
  ksLMEndExecute                 = 6,  ///< Завершение выполнения комманды библиотеки.
  ksLMSystemControlStop          = 7,  ///< Передача управления библиотеке.
  ksLMSystemControlStart         = 8,  ///< Передача управления системе.
  ksLMAddLibraryDescription      = 9,  ///< Добавили описание библиотеки.
  ksLMDeleteLibraryDescription   = 10,  ///< Удалили описание библиотеки.
  ksLMAddInsert                  = 11,  ///< Добавили документ в библиотеку документов.
  ksLMDeleteInsert               = 12,  ///< Удалили документ из библиотеки документов.
  ksLMEditInsert                 = 13,  ///< Редактирование документа из библиотеки документов.
  ksLMTryExecute                 = 14,  ///< Попытались вызвать команду библиотеки
  ksLMBeginInsertDocument        = 15   ///< Запуск вставки документа из библиотеки.
};


/// Результаты передачи управления системе КОМПАС.
enum ksSystemControlStartEnum : int
{
  ksSCStoppedByMenuCommand    = 1,  ///< Выполнена команда меню 'Остановить работу библиотеки'.
  ksSCCloseApplication        = 0,  ///< Идет закрытие системы КОМПАС/Не запущен SystemControlStart.
  ksSCStopItself              = -1,  ///< Вызов функции SystemControlStop из-под библиотеки.
  ksSCAlreadyStarted          = -2,  ///< Управление системе КОМПАС уже передано той же библиотекой.
  ksSCStartedByAnotherLibrary = -3,  ///< Управление системе КОМПАС уже передано другой библиотекой.
  ksSCError                   = -4   ///< Ошибка.
};


/// Варианты оформления спецификации.
enum ksSpecificationVariantEnum : int
{
  ksSpecificationSimple   = 0,  ///< Простая.
  ksSpecificationVariantA = 1,  ///< Вариант А.
  ksSpecificationVariantB = 2,  ///< Вариант Б.
  ksSpecificationVariantV = 3,  ///< Вариант В.
  ksSpecificationVariantG = 4   ///< Вариант Г.
};


/// Режимы связи сборки или чертежа со спецификацией.
enum ksSpecificationLinkTypeEnum : int
{
  ksLinkNone                  = 0,  ///< Нет.
  ksLinkOnlyObjects           = 1,  ///< Только вставка объектов спецификации.
  ksLinkWithPositionCalculate = 2   ///< Связь с расчетом позиций.
};


/// Типы колонок спецификации.
enum ksSpecificationColumnTypeEnum : int
{
  ksSColumnUnknown         = 0,  ///< Неизвестный тип.
  ksSColumnFormat          = 1,  ///< Формат.
  ksSColumnZone            = 2,  ///< Зона.
  ksSColumnPosition        = 3,  ///< Позиция.
  ksSColumnMark            = 4,  ///< Обозначение.
  ksSColumnName            = 5,  ///< Наименование.
  ksSColumnCount           = 6,  ///< Количество.
  ksSColumnNote            = 7,  ///< Примечание.
  ksSColumnMass            = 8,  ///< Масса.
  ksSColumnMaterial        = 9,  ///< Материал.
  ksSColumnUser            = 10,  ///< Пользовательская.
  ksSColumnCode            = 11,  ///< Код.
  ksSColumnFactory         = 12,  ///< Завод изготовитель.
  ksSColumnDocumentNumber  = 13,  ///< Номер документа.
  ksSColumnDocumentName    = 14,  ///< Наименование документа.
  ksSColumnDocumentCode    = 15,  ///< Код документа.
  ksSColumnCodeOKP         = 16   ///< Код ОКП.
};


/// Типы значения атрибута, его колонок и колонок спецификации.
enum ksValueTypeEnum : int
{
  ksValueTypeUnknown         = 0,  ///< Неизвестный.
  ksValueTypeInteger         = 1,  ///< Целое со знаком.
  ksValueTypeFloat           = 2,  ///< Вещественное.
  ksValueTypeString          = 3,  ///< Строка длиной 255 символов.
  ksValueTypeRecord          = 4   ///< Запись.
};


/// Типы сортировки.
enum ksSortTypeEnum : int
{
  ksSortTypeNone          = 0,  ///< Нет сортировки.
  ksSortTypeCompositeUp   = 1,  ///< Составная сортировка по возрастанию колонок.
  ksSortTypeUp            = 3,  ///< Сортировка по возрастанию колонок.
  ksSortTypeDocument      = 4,  ///< Сортировка раздела документация.
  ksSortTypeDown          = 5,  ///< Сортировка по убыванию колонок.
  ksSortTypeCompositeDown = 6   ///< Составная сортировка по убыванию колонок.
};


/// Форматы листа.
enum ksDocumentFormatEnum : int
{
  ksFormatA0   = 0,  ///< Формат А0.
  ksFormatA1   = 1,  ///< Формат А1.
  ksFormatA2   = 2,  ///< Формат А2.
  ksFormatA3   = 3,  ///< Формат А3.
  ksFormatA4   = 4,  ///< Формат А4.
  ksFormatA5   = 5,  ///< Формат А5.
  ksFormatUser = 6   ///< Пользовательский формат.
};


/// Выравнивание.
enum ksAlignEnum : int
{
  ksAlignDefault  = -1,  ///< По умолчанию(из стиля).
  ksAlignLeft     = 0,  ///< Выравнивание слева.
  ksAlignCenter   = 1,  ///< Выравнивание по центру.
  ksAlignRight    = 2,  ///< Выравнивание справа.
  ksAlignAllWidth = 3,  ///< Выравнивание на всю ширину.
  ksAlignDecimal  = 3   ///< Выравнивание по десятичной точке.
};


/// Заполнение табулятора.
enum ksTabulatorFillingEnum : int
{
  ksTabulatorFillingNone       = 0,  ///< Без заполнения.
  ksTabulatorFillingBaseLine   = 1,  ///< Базовая линия.
  ksTabulatorFillingCenterLine = 2,  ///< Средняя линия.
  ksTabulatorFillingBaseDot    = 3,  ///< Базовые точки.
  ksTabulatorFillingCenterDot  = 4,  ///< Средние точки.
  ksTabulatorFillingBaseDash   = 5,  ///< Базовый пунктир.
  ksTabulatorFillingCenterDash = 6   ///< Средний пунктир.
};


/// Ошибки API, кроме 3D.
enum ErrorType : int
{
  etNoTXTDocument = -8,  ///< Документ не активизирован или не является текстовым документом.
  etNo3dDocument  = -7,  ///< Документ не активизирован или не является деталью/сборкой.
  etNoAllDocument = -6,  ///< Документ не активизирован.
  etNoSPCDocument = -5,  ///< Документ не активизирован или не является спецификацией.
  etLibraryClose  = -4,  ///< Принудительное завершение выполнения библиотеки.
  etNoPreView     = -3,  ///< В режиме Preview нельзя создавать или открывать выдимые документы.
  etNoDocument    = -2,  ///< Документ не активизирован или не является листом/фрагментом.
  etAbort         = -1,  ///< Аварийное завершение.
  etSuccess = 0,  ///< Успешное завершение.
  etError1 = 1,  ///< Попытка выполнить EndObj при неоткрытом составном элементе.
  etError2 = 2,  ///< Попытка поставить в сплайн недопустимый объект.
  etError3 = 3,  ///< Попытка поставить в штриховку недопустимый объект.
  etError4 = 4,  ///< Попытка выполнить delete_mtr при невведенной локальной системе координат.
  etError5 = 5,  ///< Ошибка при введении локальной системы координат.
  etError6 = 6,  ///< Группа дожна быть постоянной.
  etError7 = 7,  ///< Объект не существует.
  etError8 = 8,  ///< В текущем документе объект не найден.
  etError9 = 9,  ///< Нет памяти!.
  etError10 = 10,  ///< Вырожденный объект.
  etError11 = 11,  ///< Неверный указатель группы.
  etError12 = 12,  ///< Объект не принадлежит группе.
  etError13 = 13,  ///< Объект нельзя поставить в группу.
  etError14 = 14,  ///< Группа должна быть временной.
  etError15 = 15,  ///< Первый объект не существует или не является кривой.
  etError16 = 16,  ///< Второй объект не существует или не является кривой.
  etError17 = 17,  ///< Кривые расположены в разных видах.
  etError18 = 18,  ///< Не совпадают СК определения кривых (геом и анн).
  etError19 = 19,  ///< Первый объект не является кривой.
  etError20 = 20,  ///< Второй объект не является кривой.
  etError21 = 21,  ///< Объект уже в группе.
  etError22 = 22,  ///< Временный объект не может быть в постоянной группе.
  etError23 = 23,  ///< В документе не предусмотрена работа с видами.
  etError24 = 24,  ///< Вид с заданным номером уже существует.
  etError25 = 25,  ///< Недопустимое значение номера вида.
  etError26 = 26,  ///< В текущем документе вид не найден.
  etError27 = 27,  ///< Неверный указатель вида.
  etError28 = 28,  ///< Вид не редактируется.
  etError29 = 29,  ///< Состояние вида задано неверно.
  etError30 = 30,  ///< Параметры текущего вида не меняются.
  etError31 = 31,  ///< Неверный указатель макроэлемента.
  etError32 = 32,  ///< Должен быть режим редактирования макроэлемента.
  etError33 = 33,  ///< Неверный тип параметров редактирования макроэлемента.
  etError34 = 34,  ///< В виде остались не закрытые составные элементы.
  etError35 = 35,  ///< Неверный указатель слоя.
  etError36 = 36,  ///< Недопустимое значение номера слоя.
  etError37 = 37,  ///< В текущем виде слой не найден.
  etError38 = 38,  ///< У объекта параметров нет.
  etError39 = 39,  ///< Не соответствует размер структуры параметров.
  etError40 = 40,  ///< Состояние слоя задано неверно.
  etError41 = 41,  ///< Параметры текущего слоя не меняются.
  etError42 = 42,  ///< В указанном виде редактирование запрещено.
  etError43 = 43,  ///< В указанном слое редактирование запрещено.
  etError44 = 44,  ///< Параметры системного вида не меняется.
  etError45 = 45,  ///< Попытка поставить в текст недопустимый объект.
  etError46 = 46,  ///< Неверный ввод текста.
  etError47 = 47,  ///< Неверный тип массива.
  etError48 = 48,  ///< Неверный указатель массива.
  etError49 = 49,  ///< Указатель на структуру параметров должен быть не NULL.
  etError50 = 50,  ///< Неверный индекс массива.
  etError51 = 51,  ///< Неверное редактирование текста.
  etError52 = 52,  ///< Bezier-точка используется не верно.
  etError53 = 53,  ///< Неправильный индекс.
  etError54 = 54,  ///< Режим работы документа задан неверно.
  etError55 = 55,  ///< Режим обработки документов задан неверно.
  etError56 = 56,  ///< Неверный указатель документа.
  etError57 = 57,  ///< Попытка сохранить документ без имени.
  etError58 = 58,  ///< Документ закрыт без сохранения.
  etError59 = 59,  ///< Имя файла документа задано не верно.
  etError60 = 60,  ///< Объект не соответствует типу поиска.
  etError61 = 61,  ///< Не могу создать документ. Документ с таким именем уже открыт.
  etError62 = 62,  ///< Поиск объектов задан неверно.
  etError63 = 63,  ///< В текущем документе итератор не найден.
  etError64 = 64,  ///< Документ не найден или неверная структура файла.
  etError65 = 65,  ///< Документ открыт в видимом режиме.
  etError66 = 66,  ///< Документ открыт в невидимом режиме.
  etError67 = 67,  ///< Нельзя менять тип документа.
  etError68 = 68,  ///< Стиль спецификации не найден.
  etError69 = 69,  ///< У фрагмента нет размеров листа.
  etError70 = 70,  ///< Режим работы документа не меняется.
  etError71 = 71,  ///< Вид должен быть активным или текущим.
  etError72 = 72,  ///< Тип атрибута задан неверно.
  etError73 = 73,  ///< Тип атрибута не найден.
  etError74 = 74,  ///< Неверный пароль.
  etError75 = 75,  ///< Не найдено определение локального фрагмента.
  etError76 = 76,  ///< Атрибут в документе не найден.
  etError77 = 77,  ///< Атрибут не принадлежит объекту.
  etError78 = 78,  ///< Неправильный номер колонки атрибута.
  etError79 = 79,  ///< Неправильный номер строки атрибута.
  etError80 = 80,  ///< Родительское окно не найдено.
  etError81 = 81,  ///< Библиотека атрибутов не найдена или ошибка в библиотеке.
  etError82 = 82,  ///< Текст размера задан неверно.
  etError83 = 83,  ///< Параметры привязки размера заданы неверно.
  etError84 = 84,  ///< Текст шероховатости задан неверно.
  etError85 = 85,  ///< Неверный указатель линейного размера.
  etError86 = 86,  ///< Текст линии выноски задан неверно.
  etError87 = 87,  ///< Параметры линии выноски заданы неверно.
  etError88 = 88,  ///< Попытка поставить в контур недопустимый объект.
  etError89 = 89,  ///< У звеньев контура не совпадают узлы.
  etError90 = 90,  ///< В документе не предусмотрена работа с техническими требованиями.
  etError91 = 91,  ///< В документе не предусмотрена работа с неуказанной шероховатостью.
  etError92 = 92,  ///< Попытка поставить в таблицу \n\r недопустимый объект.
  etError93 = 93,  ///< В составном объекте не предусмотрена  работа с техническими требованиями.
  etError94 = 94,  ///< В документе не предусмотрена работа с основной надписью.
  etError95 = 95,  ///< В составном объекте не предусмотрена работа с основной надписью.
  etError96 = 96,  ///< Попытка поставить в допуск формы недопустимый объект.
  etError97 = 97,  ///< Nurbs-точка используется не верно.
  etError98 = 98,  ///< Попытка поставить в полилинию недопустимый объект.
  etError99 = 99,  ///< Объект должен быть геометрическим.
  etError100 = 100,  ///< Эквидистанту в контур включать нельзя.
  etError101 = 101,  ///< Неправильная работа с указателем на определение вставного фрагмента.
  etError102 = 102,  ///< Рекурсивная вставка фрагмента.
  etError103 = 103,  ///< Ошибка чтения файла фрагмента.
  etError104 = 104,  ///< Аналогичное определение вставки фрагмента уже есть. Новый комментарий не принимается.
  etError105 = 105,  ///< Неправильная работа с указателем на основную надпись.
  etError106 = 106,  ///< Неправильная работа с указателем на неуказанную шероховатость.
  etError107 = 107,  ///< Неправильная работа с указателем на технические требования.
  etError108 = 108,  ///< Документ должен быть активным.
  etError109 = 109,  ///< Стиль кривой не найден.
  etError110 = 110,  ///< Объект не является кривой.
  etError111 = 111,  ///< Стиль текста не найден.
  etError112 = 112,  ///< Неверно заданы параметры для расчета длины текста.
  etError113 = 113,  ///< Новый слой должен существовать и быть доступным для редактирования.
  etError114 = 114,  ///< Номер раздела задан неверно.
  etError115 = 115,  ///< Стиль спецификации не найден.
  etError116 = 116,  ///< В текущем документе объект спецификации не найден.
  etError117 = 117,  ///< Попытка подключить к объекту СП недопустимый объект.
  etError118 = 118,  ///< Тип объекта задан неверно.
  etError119 = 119,  ///< Объект заданного типа не редактируется.
  etError120 = 120,  ///< Нужно завершить редактирование составного объекта.
  etError121 = 121,  ///< Объект должен быть таблицей.
  etError122 = 122,  ///< Объект должен быть допуском формы.
  etError123 = 123,  ///< Не найден файл для отрисовки слайда.
  etError124 = 124,  ///< Неверная структура файла.
  etError125 = 125,  ///< Нужно завершиить редактирование объекта спецификации.
  etError126 = 126,  ///< Объект должен быть макрообъектом.
  etError127 = 127,  ///< Попытка поставить в макро недопустимый объект.
  etError128 = 128,  ///< Библиотека фрагментов уже закрыта или не открывалась.
  etError129 = 129,  ///< Библиотека фрагментов уже открыта.
  etError130 = 130,  ///< Файл библиотеки фрагментов не найден.
  etError131 = 131,  ///< Ошибка в структуре файла библиотеки фрагментов.
  etError132 = 132,  ///< Ошибка в имени файла библиотеки фрагментов.
  etError133 = 133,  ///< Ошибка в имени фрагмента для библиотеки фрагментов.
  etError134 = 134,  ///< Доступ к документу в библиотеке документов  невозможен.
  etError135 = 135,  ///< В документе не предусмотрена работа со спецификацией на листе.
  etError136 = 136,  ///< Некорректный вид типа атрибута.
  etError137 = 137,  ///< Номер листа спецификации задан неверно.
  etError138 = 138,  ///< Документ должен быть открыт в видимом режиме.
  etError139 = 139,  ///< Ошибка при обработке картинки для стиля кривой.
  etError140 = 140,  ///< Объект должен быть штриховкой.
  etError141 = 141,  ///< Объект должен быть текстом.
  etError142 = 142,  ///< В документе не предусмотрена работа со спецификацией на листе.
  etError143 = 143,  ///< В документе не предусмотрена работа с зонами.
  etError144 = 144,  ///< Объект спецификации не редактируется.
  etError145 = 145,  ///< Файл c растровым объектом не найден.
  etError146 = 146,  ///< Ошибка в определении параметров описания спецификации.
  etError147 = 147,  ///< Описание спецификации не найдено.
  etError148 = 148,  ///< Имя файла спецификации уже используется в листе.
  etError149 = 149,  ///< Описание спецификации данного типа уже есть в листе.
  etError150 = 150,  ///< Необходимо завершить текущую операцию.
  etError151 = 151,  ///< Редактируемый макрообъект удалять нельзя.
  etError152 = 152,  ///< Служебный файл допусков graphic.tol не найден.
  etError153 = 153,  ///< Попытка поставить в макро собственный объект.
  etError154 = 154,  ///< Неправильно задано оформление первого листа спецификации: не указана таблица, предназначенная для спецификации.
  etError155 = 155,  ///< Не найдено оформление первого листа спецификации.
  etError156 = 156,  ///< Неправильно задано оформление первого листа спецификации: не найдены ячейки типа Для спецификации.
  etError157 = 157,  ///< Неправильно задано оформление второго и последующих листов спецификации: не указана таблица, предназначенная для спецификации.
  etError158 = 158,  ///< Не найдено оформление второго и последующих листов спецификации.
  etError159 = 159,  ///< Неправильно задано оформление второго и последующих листов спецификации: не найдены ячейки типа Для спецификации.
  etError160 = 160,  ///< Попытка изменить параметры объкекта только для чтения.
  etError161 = 161,  ///< Попытка изменить параметры объкекта только для чтения.
  etError162 = 162,  ///< Oшибка создания файла библиотеки.
  etError163 = 163,  ///< Текущий документ пустой. Сохранение в выбранном формате производиться не будет.
  etError164 = 164,  ///< Не найдена библиотека стилей спецификаций.
  etError165 = 165,  ///< Размер растра превышает допустимый максимальный размер (65536 x 65536).
  etError166 = 166,  ///< Нехватает памяти для создания растра указанного размера.
  etError167 = 167,  ///< Выбранный диапазон страниц в документе не существует.
  etError168 = 168,  ///< Неверный указатель линии выноски.
  etError169 = 169,  ///< Имя документа изменить нельзя. Документ с таким именем уже открыт.
  etError170 = 170,  ///< Базовый вид должен быть ассоциативным.
  etError171 = 171,  ///< Базовый объект должен быть стрелкой вида.
  etError172 = 172,  ///< Базовый объект должен быть выносным элементом.
  etError173 = 173,  ///< Неправильно задан цвет.
  etError174 = 174,  ///< Неправильно заданы единицы измерения.
  etError175 = 175,  ///< Нельзя создать пользовательскую панель свойств.
  etError176 = 176,  ///< Метод не используется для данного интерфейса.
  etError177 = 177,  ///< Документ, открытый только для чтения, не может быть сохранён.
  etError178 = 178,  ///< Нельзя отключить работающую библиотеку.
  etError179 = 179,  ///< Нельзя отключить AddIn-библиотеку.
  etError180 = 180,  ///< Команда не выполнена, т.к она недоступна.
  etError181 = 181,  ///< Параметры разделов СП заданы неверно.
  etError182 = 182,  ///< Параметры стиля текста СП заданы неверно.
  etError183 = 183,  ///< Параметры подразделов СП заданы неверно.
  etError184 = 184,  ///< Значение выходит за границы диапазона.
  etError185 = 185,  ///< Значение размера выходит за границы диапазона 30'' - 359°59'30''.
  etError186 = 186,  ///< Значение размера выходит за границы диапазона 0.5'' - 359°59'59.5''.
  etError187 = 187,  ///< Значение размера выходит за границы диапазона 30' - 359°30'.
  etError188 = 188,  ///< Ограничение создать нельзя. Данный тип размера не параметризуется.
  etError189 = 189,  ///< Ограничение создать нельзя.Нет информации о привязке.
  etError190 = 190,  ///< Ограничение создать нельзя.
  etError191 = 191,  ///< Ограничение такого типа уже существует.
  etError192 = 192,  ///< Ограничение создать нельзя.Недопустимое имя переменной.
  etError193 = 193,  ///< Ограничение создать нельзя.Недопустимое значение размера.
  etError194 = 194,  ///< Ограничение создать нельзя.Размер может быть только информационным.
  etError195 = 195,  ///< Аннотационный объект может быть создан только в составе макро.
  etError196 = 196,  ///< Не найдена вершина мультилии с заданным индексом.
  etError197 = 197,  ///< Не найдена линия мультилии с заданным индексом.
  etError198 = 198,  ///< Неправильно задан базовый контур мультилинии.
  etError199 = 199,  ///< Не найден сегмент с заданным индексом.
  etError200 = 200,  ///< Не найдена строка текста с заданным индексом.
  etError201 = 201,  ///< Система не имеет решения.
  etError202 = 202,  ///< Переменная с таким именем уже существует.
  etError203 = 203,  ///< Недопустимое имя переменной.
  etError204 = 204,  ///< Невозможно добавить постоянный объект во временный макроэлемент.
  etError205 = 205,  ///< Недопустимая команда в режиме редактирования макрообъекта.
  etError206 = 206,  ///< Неправильно задан пароль.
  etError207 = 207,  ///< Контур самопересекается.
  etError208 = 208,  ///< Контур не замкнут.
  etError209 = 209,  ///< Тип операции задан неверно.
  etError210 = 210,  ///< Некорректное имя.
  etError211 = 211,  ///< Хранилище с указанным именем уже зарегистрировано.
  etError212 = 212,  ///< Запрашиваемое хранилище не зарегистровано.
  etError213 = 213,  ///< Запрашиваемого файла нет в хранилище.
  etError214 = 214,  ///< Ошибка при работе с файловой системой.
  etError215 = 215,  ///< Ошибка при перезаписи файла.
  etError216 = 216,  ///< Метод не может быть вызван : отсутствует лицензия.
  etError217 = 217,  ///< Документ создан более поздней версией.
  etError218 = 218   ///< Файл защищен с помощью приложения КОМПАС-Защита.
};


/// Типы объектов для спецификации.
enum ksSpecificationObjectTypeEnum : int
{
  ksSpecificationUnknownObject   = 0,  ///< Неизвестный тип.
  ksSpecificationBaseObject      = 1,  ///< Базовый объект.
  ksSpecificationComment         = 2,  ///< Комментарий.
  ksSpecificationSectionName     = 3,  ///< Имя раздела.
  ksSpecificationBlock           = 4,  ///< Начало блока.
  ksSpecificationReserveString   = 5,  ///< Резервная строка.
  ksSpecificationEmptyString     = 6,  ///< Пустая строка.
  ksSpecificationBilletObject    = 7   ///< Объект заготовка.
};


/// Состояние объекта спецификации.
enum ksSpecificationObjectStateEnum : int
{
  ksObjectStateIndependent     = 0,  ///< Самостоятельный объект.
  ksObjectStateFromInsert      = 1,  ///< Объект из вставки.
  ksObjectStateEdit            = 2,  ///< Объект редактировался в документе.
  ksObjectStateUserSetNotEdit  = 3   ///< Пользователь снял признак редактирования.
};


/// События для листов оформления.
enum ksLayoutSheetsNotifyEnum : int
{
  ksLayoutAdd    = 1,  ///< Добавлен лист оформления.
  ksLayoutDelete = 2,  ///< Удален лист оформления.
  ksLayoutUpdate = 3   ///< Изменены параметры листа оформления.
};


/// Типы внутренних конвертеров КОМПАС 3D.
enum ksKOMPASConverterEnum : int
{
  ksConverterFromSAT   = -1,  ///< Конвертация из формата SAT.  Для открытия документов.
  ksConverterFromXT    = -2,  ///< Конвертация из формата XT.   Для открытия документов.
  ksConverterFromSTEP  = -3,  ///< Конвертация из формата STEP. Для открытия документов.
  ksConverterFromIGES  = -4,  ///< Конвертация из формата IGES. Для открытия документов.
  ksConverterFromSTL   = -6,  ///< Конвертация из формата STL. Для открытия документов.
  ksConverterFromC3D   = -7,  ///< Конвертация из формата C3D. Для открытия документов.
  ksConverterFromJT    = -8,  ///< Конвертация из формата JT.  Для открытия документов.
  ksConverterFromOBJ   = -9,  ///< Конвертация из формата OBJ. Для открытия документов.
  ksConverterFromNX    = -100,  ///< Формат NX. Для открытия документов.
  ksConverterFromCREO  = -101,  ///< Формат CREO. Для открытия документов.
  ksConverterFromSW    = -102,  ///< Формат SolidWorks. Для открытия документов.
  ksConverterFromINV   = -103,  ///< Формат Inventor. Для открытия документов.
  ksConverterFromCATIA = -104,  ///< Формат Catia. Для открытия документов
  ksConverterFromSE    = -105,  ///< Формат SolidEdge. Для открытия документов
  ksConverterFrom3DXML = -106,  ///< Формат 3DXML. Для открытия документов
  ksConverterToRaster = 0,  ///< Конвертация в растровый формат.
  ksConverterToSAT    = 1,  ///< Конвертация в формат SAT.
  ksConverterToXT     = 2,  ///< Конвертация в формат XT.
  ksConverterToSTEP   = 3,  ///< Конвертация в формат STEP.
  ksConverterToIGES   = 4,  ///< Конвертация в формат IGES.
  ksConverterToVRML   = 5,  ///< Конвертация в формат VRML.
  ksConverterToSTL    = 6,  ///< Конвертация в формат STL.
  ksConverterToC3D    = 7,  ///< Конвертация в формат C3D.
  ksConverterToJT     = 8,  ///< Конвертация в формат JT.
  ksConverterToSTEP_AP203  = 203,  ///< Формат STEP AP203. Прикладной протокол 203 ( Проектирование с управляемой конфигурацией )
  ksConverterToSTEP_AP214  = 214,  ///< Формат STEP AP214. Прикладной протокол 214 ( Проектирование автомобилей ).
  ksConverterToSTEP_AP242  = 242   ///< Формат STEP AP242. Прикладной протокол 242 ( Проектирование автомобилей ).
};


/// Единицы измерения длины.
enum ksLengthUnitEnum : int
{
  ksLUMillimetres = 0,  ///< Миллиметры.
  ksLUCentimetres = 1,  ///< Сантиметры.
  ksLUDecimetres  = 2,  ///< Дециметры.
  ksLUMetres      = 3,  ///< Метры.
  ksLUKilometres  = 4   ///< Километры.
};


/// Идентификаторы ячеек штампа.
enum ksStampEnum : int
{
  ksStPartNumber           = 1,  ///< Наименование изделия.
  ksStDescription          = 2,  ///< Обозначение документа.
  ksStMaterial             = 3,  ///< Обозначение материала.
  ksStMass                 = 5,  ///< Масса изделия.
  ksStScale                = 6,  ///< Масштаб.
  ksStSheetNumber          = 7,  ///< Номер листа.
  ksStNumberOfSheets       = 8,  ///< Количество листов.
  ksStCompany              = 9,  ///< Индекс предприятия.
  ksStTypeOfWork           = 10,  ///< Характер работы.
  ksStFormat               = 32,  ///< Формат.
  ksStDocumentLetter1      = 40,  ///< Литера документа (графа 1)
  ksStDocumentLetter2      = 41,  ///< Литера документа (графа 2)
  ksStDocumentLetter3      = 42,  ///< Литера документа (графа 3)
  ksStFullFileName         = 43,  ///< Имя файла (полное).
  ksStShortFileName        = 44,  ///< Имя файла (короткое).
  ksStMarkingLine          = 45,  ///< Строка обозначения и дефис.
  ksStDocumentName         = 51,  ///< Наименование документа.
  ksStDocumentCode         = 52,  ///< Код документа.
  ksStOKPCode              = 53,  ///< Код ОКП.
  ksStAuthor               = 110,  ///< Фамилия разработавшего.
  ksStCheckedBy            = 111,  ///< Фамилия проверившего.
  ksStMfgApprovedBy        = 112,  ///< Фамилия тех. контр.
  ksStDesigner             = 113,  ///< Фамилия вып. работу.
  ksStRateOfInspection     = 114,  ///< Фамилия норм. контр.
  ksStApprovedBy           = 115,  ///< Фамилия утверждающего.
  ksStEndDesignDate        = 130,  ///< Дата окончания разработки.
  ksStCheckedDate          = 131,  ///< Дата проверки.
  ksStMfgApprovedDate      = 132,  ///< Дата тех. контр.
  ksStExecutionDate        = 133,  ///< Дата выполнения.
  ksStRateOfInspectionDate = 134,  ///< Дата норм. контр.
  ksStApprovedDate         = 135   ///< Дата утверждения .
};


/// Тип элемента панели свойств - Список.
enum ksEditListTypeEnum : int
{
  ksEditList   = 0,  ///< Обычный список.
  ksCheckList  = 1,  ///< Список флагов.
  ksRadioList  = 2   ///< Список переключателей.
};


/// Идентификаторы стандартных команд для элемента панели свойств - Список.
enum ksEditListCommandEnum : int
{
  ksListItemNew       = 1,  ///< Создать новый элемент в списке.
  ksListItemDelete    = 2,  ///< Удалить выделенные элементы из списка.
  ksListItemMoveUp    = 3,  ///< Переместить вверх.
  ksListItemMoveDown  = 4,  ///< Переместить вниз.
  ksListItemEdit      = 5   ///< Редактировать элемент в списке.
};


/// Тип API интерфейса.
enum ksAPITypeEnum : int
{
  ksAPIUndef = 0,  ///< Интерфейс неопределённого типа.
  ksAPI5Auto = 1,  ///< API5 - интерфейсы автоматизации.
  ksAPI7Dual = 2,  ///< API7 - дуальные интерфейсы.
  ksAPI3DCom = 3,  ///< API 3D COM - интерфейсы.
  ksAPI22    = 4   ///< API22 - интерфейсы.
};


/// Типы дерева построения 3D документа.
enum ksTreeTypeEnum : int
{
  ksOperTree  = 0,  ///< Операционное дерево.
  ksMultiTree = 1   ///< Многотельное дерево.
};


/// Команды Компаса.
enum ksKompasCommandEnum : int
{
  ksCMViewFullScreen         = 32403,  ///< Полный экран.
  ksCMSaveAll                = 32404,  ///< Сохранить все.
  ksCMSaveTechnicalDemand    = 32405,  ///< Сохранить технические требования.
  ksCMSaveTechnicalDemandToTxt = 32406,  ///< Сохранить технические требования в текстовый документ.
  ksCMCloseTechnicalDemand   = 32407,  ///< Закрыть технические требования.
  ksCMCloseSpcSlave          = 32408,  ///< Закрыть окно собъектов спецификаций.
  ksCMDocumentSetup          = 32410,  ///< Настройки текущего документа.
  ksCMZoomWindow             = 32411,  ///< Увеличить масштаб окном.
  ksCMZoomIn                 = 32412,  ///< Увеличить масштаб.
  ksCMZoomOut                = 32413,  ///< Уменьшить масштаб.
  ksCMScaleView              = 32414,  ///< Текущий масштаб(Комбобокс с масштабом).
  ksCMZoomEntireDocument     = 32415,  ///< Показать весь документ.
  ksCMZoomSelected           = 32416,  ///< Показать полностью выделенные объекты.
  ksCMRefresh                = 32417,  ///< Обновить изображение.
  ksCMMoveView               = 32418,  ///< Сдвинуть изображение.
  ksCMPanoramaView           = 32419,  ///< Приблизить/отдалить изображение.
  ksCMRotateView             = 32420,  ///< Повернуть изображение (для 3Д-окна).
  ksCMSetAttributeTypes      = 32421,  ///< Типы атрибутов.
  ksCMSetCurveStyles         = 32422,  ///< Стили линий.
  ksCMSetTextStyles          = 32423,  ///< Стили текстов.
  ksCMSetStampStyles         = 32424,  ///< Редактирование изображения штампа.
  ksCMSetTextShape           = 32425,  ///< Редактирование текстовых оформлений.
  ksCMSetGraphicShape        = 32426,  ///< Редактирование графических оформлений.
  ksCMSetHatchStyles         = 32427,  ///< Стили штриховок.
  ksCMSetSpcStyles           = 32448,  ///< Стили спецификаций.
  ksCMSummaryInfo            = 32440,  ///< Информация (свойства документа).
  ksCMViewVariables          = 32498,  ///< Скрыть/показать панель Переменные.
  ksCMMoveDocumentEX    = 32522,  ///< Перейти к листу (со списком листов).
  ksCMMoveDocumentFirst = 32523,  ///< Перейти к первому листу документа.
  ksCMMoveDocumentLast  = 32524,  ///< Перейти к первому листу документа.
  ksCMMoveDocumentPrev  = 32525,  ///< Перейти к предыдущему листу документа.
  ksCMMoveDocumentNext  = 32526,  ///< Перейти к последующему листу документа.
  ksCMRetryCommand = 32534,  ///< Повтор последней команды.
  ksCMTutor3D         = 32535,  ///< Азбука КОМПАС-3D.
  ksCMTutor2D         = 32540,  ///< Азбука КОМПАС-График.
  ksCMSetProperties   = 32541,  ///< Дополнительные свойства объектов.
  ksCMSetReportStyles = 32542,  ///< Поднять окно редактирования стиля отчёта.
  ksCMZoom1           = 32545,  ///< Масштаб 1,0.
  ksCMCloseAll     = 33008,  ///< Закрыть все.
  ksCMRepeatFind      = 33207,  ///< Повторение поиска объекта.
  ksCMStop            = 33206,  ///< Отмена текущей команды(Стоп).
  ksCMEscape          = 33211,  ///< Отмена текущей команды(По клавише Esc).
  ksCMCreateObject    = 33700,  ///< Создать объект.
  ksCMCansel          = 33701,  ///< Отказ от создания объекта(Стоп).
  ksCMSpcObjectsSort  = 33796,  ///< Автоматическая сортировка объектов текущего раздела СП.
  ksCMSpcRebuild      = 33797,  ///< Перестроить спецификацию.
  ksCMFullPageHeight  = 33800,  ///< Изменить масштаб по высоте листа для спецификации.
  ksCMFullPageWidth   = 33801,  ///< Изменить масштаб по ширине листа для спецификации.
  ksCMSpcMakePosition = 33891,  ///< Расставить позиции.
  ksCMSpcObjectDelete = 33892,  ///< Удалить элемент спецификации.
  ksCMSpcObjectInsert = 33893,  ///< Добавить элемент спецификации.
  ksCMSpcSynchronize = 33896,  ///< Cинхронизовать данные.
  ksCMSpcInsertLine      = 33898,  ///< Добавить вспомогательный объект.
  ksCMSpcShowAll         = 33900,  ///< Показать все объекты.
  ksCMSpcTuningSetup     = 33901,  ///< Настройка спецификации.
  ksCMSpcCopyObject      = 33902,  ///< Копировать объект спецификации.
  ksCMSpcObjectMoveUp    = 33903,  ///< Cдвинуть объект спецификации вверх.
  ksCMSpcObjectMoveDovn  = 33904,  ///< Cдвинуть объект спецификации вниз.
  ksCMSpcObjectEdit      = 33905,  ///< Редактировать текст элемента спецификации.
  ksCMSpcInsertIspoln    = 33906,  ///< Добавить объекты-исполнения для элемента спецификации.
  ksCMSpcOpenGeometryDocs= 33907,  ///< Открыть документы с геометрией объекта.
  ksCMCpcShowExcludedObjects = 33911,  ///< Показать исключенные объекты.
  ksCMFragmentManager    = 35704,  ///< Управление фрагментами.
  ksCMEditFragment       = 35705,  ///< Редактировать фрагмент.
  ksCMCreateLocalFragment= 35706,  ///< Создать локальный фрагмент.
  ksCMEditFragmentSource = 35707,  ///< Запустить редактирование источника для селектированной вставки фрагмента.
  ksCMSelectGroup  = 35711,  ///< Выделить группу.
  ksCMSelectLayer  = 35712,  ///< Выделить слой.
  ksCMSelectByType = 35713,  ///< Выделить по типу.
  ksCMStoreGroup   = 35715,  ///< Запомнить группу.
  ksCMSelectView   = 35716,  ///< Выделить вид из списка видов.
  ksCMSelectByAttr = 35717,  ///< Выделить по атрибутам.
  ksCMSelectByCurveStyle = 35718,  ///< Выделить по стилю кривой.
  ksCMSelectPrevList = 35719,  ///< Выделить прежний список.
  ksCMUnSelectSroup  = 35720,  ///< Исключить группу.
  ksCMUnSelectLayer  = 35721,  ///< Исключить слой.
  ksCMUnSelectByType = 35722,  ///< Исключить по типу.
  ksCMUnSelectView   = 35723,  ///< Исключить вид.
  ksCMUnSelectByAttr = 35724,  ///< Исключить по атрибутам.
  ksCMUnSelectByCurveStyle = 35725,  ///< Исключить по стилю кривой.
  ksCMUnSelectPrevList = 35726,  ///< Исключить прежний список.
  ksCMMakeMacro    = 35727,  ///< Объединить в макроэлемент.
  ksCMDestroyMacro = 35728,  ///< Разрушить макроэлемент.
  ksCMViewObjAttr  = 35729,  ///< Атрибуты  объекта.
  ksCMChangeSelObjStyles = 35730,  ///< Изменить стиль селектированных объектов.
  ksCMChangeSelObjLayer  = 35731,  ///< Изменить слой селектированных объектов.
  ksCMEditObject         = 35736,  ///< Редактировать выделенный объект.
  ksCMToggleToObjLayer   = 35737,  ///< Сделать текущим слой объекта.
  ksCMObjStreamline      = 35738,  ///< Очистить фон у объекта.
  ksCMDelAuxCurves      = 35739,  ///< Удалить вспомогательные кривые во всех видах.
  ksCMDelAuxCurvesInCurentView = 35740,  ///< Удалить вспомогательные кривые в текущем виде.
  ksCMDelStamp          = 35741,  ///< Удалить штамп.
  ksCMDelTechnicalDemand= 35742,  ///< Удалить технические требования.
  ksCMDelSpecRough      = 35743,  ///< Удалить неуказанную шероховатость.
  ksCMViewLayerStates   = 35745,  ///< Состаяние слоев.
  ksCMGridOnOf          = 35746,  ///< Включить/выключить отображение сетки.
  ksCMSnapSuspend     = 35748,  ///< Включить/выключить действие глобальных привязок.
  ksCMSnapSetup       = 35749,  ///< Настройка глобальных привязок.
  ksCMOrthoModeOnOff  = 35750,  ///< Включить/выключить режим ортогонального черчения.
  ksCMDiscreteModeOnOff  = 35747,  ///< Включить/выключить режим 'дискретирования' линейных величин по шагу курсора.
  ksCMRebuildSheet      = 35751,  ///< Перестроить чертеж.
  ksCMSheetViewParams   = 35752,  ///< Параметры текущего вида.
  ksCMTechnicalDemand   = 35753,  ///< Технические требования-ввод.
  ksCMSpecRough         = 35754,  ///< Неуказанная шероховатость.
  ksCMSlaveSpc             = 35755,  ///< Просмотр\редактирование объектов спецификации.
  ksCMSlaveChangeList = 35756,  ///< Просмотр\редактирование объектов таблицы изменений.
  ksCMAddEditSpcObject     = 35760,  ///< Добавить\редактировать объект спецификации.
  ksCMAddEditChangeListObject = 35761,  ///< Добавить\редактировать объект таблицы изменений.
  ksCMSpcSinhronize         = 35763,  ///< Cинхронизировать данные.
  ksCMSheetSpc              = 35764,  ///< Таблица спецификации на листе.
  ksCMLayoutManager         = 35765,  ///< Управление списком оформлений документа.
  ksCMAddPage               = 35766,  ///< Добавить лист в многолистовой документ.
  ksCMGoto00        = 36028,  ///< Поставить курсор в точку 0.0.
  ksCMToggleCursor  = 36029,  ///< Переключить курсор.
  ksCMRegulateLeaderLineX  = 36075,  ///< Выровнять линии выноски по горизонтали.
  ksCMRegulateLeaderLineY  = 36076,  ///< Выровнять линии выноски по вертикали.
  ksCMEditSpcObject = 36077,  ///< Редактировать объект спецификации по линии-выноске.
  ksCMEditSpcObjectForGeom = 36086,  ///< Редактировать объект спецификации по геометрии.
  ksCMGridSetup = 36090,  ///< Настроить параметры сетки.
  ksCMSlaveSpcDelegate = 36094,  ///< Просмотр\редактирование объектов-делегатов спецификации.
  ksCMAddSpcDelegate   = 36095,  ///< Добавить\редактировать объект-делегат спецификации.
  ksCMAutoCreateSpcObj = 36097,  ///< Сформировать объекты спецификации для модели.
  ksCMLibraryBarVisible  = 36104,  ///< Скрыть/показать панель Библиотеки.
  ksRestoreStylesInAssociationView = 37002,  ///< Восстановить стили объектов ассоциативного вида.
  ksCMBuildTreeView    = 37003,  ///< Скрыть/показать дерево построений.
  ksSheetViewParams    = 37005,  ///< Параметры вида.
  ksCMaximizeWorkArea  = 37079,  ///< Показать панели.
  ksCMEditObject3D         = 40707,  ///< Редактировать выделенный 3D объект.
  ksEditDocumentProperties         = 37171,  ///< Процесс редактирования свойств документа.
  ksEditInserionFragmentProperties = 37172,  ///< Процесс редактирования свойств вставки фрагмента.
  ksEditInserionViewProperties     = 37173,  ///< Процесс редактирования свойств вставки вида.
  ksEditMacroObjectProperties      = 37174,  ///< Процесс редактирования свойств макроэлемента.
  ksCMRebuildSheetComplete      = 37082,  ///< Недокументированная константа. Перестроить чертеж. Полное перестроение.
  ksClearAttachedLeaders = 37186,  ///< Очистить оформление составного объекта.
  ksPrintSpecialExecute  = 37289,  ///< Отправить документ на специальную полистную печать.
  ksCMParameters = 37608,  ///< Настройки системы и новых документов.
  ksCMZoomUndo  = 38530,  ///< Предыдущий масштаб.
  ksCMZoomRedo = 38531,  ///< Последующий масштаб.
  ksViewShowBreakups = 39344,  ///< Вид - Показать разрывы.
  ksCMHideCPlaces      = 40360,  ///< Скрыть\показать начала координат.
  ksCMHideCPlanes      = 40361,  ///< Скрыть\показать конструктивные плоскости.
  ksCMHideCAxies       = 40362,  ///< Скрыть\показать конструктивные оси.
  ksCMHideSketches     = 40363,  ///< Скрыть\показать эскизы.
  ksCMHideSurfaces     = 40364,  ///< Скрыть\показать поверхности.
  ksCMHideThreads      = 40365,  ///< Скрыть\показать изображения резьбы.
  ksCMHideCurves       = 40366,  ///< Скрыть\показать пространственные кривые.
  ksCMHidePoints       = 40367,  ///< Скрыть\показать конструктивные точки.
  ksCMHideAllObjects   = 40368,  ///< Скрыть\показать вспомогательные объекты.
  ksCMHideDimensions   = 40369,  ///< Скрыть\показать размеры.
  ksCMHideDesignations = 40370,  ///< Скрыть\показать условные обозначения.
  ksCMCreateSheetFromModel   = 40373,  ///< Создать новый чертеж из модели.
  ksCMDeleteRollbackObjects  = 40375,  ///< Удалить все объекты под указателем.
  ksCM3DRebuild              = 40356,  ///< Перестроить 3D документ.
  ksCMSelectedObjectProperties      = 40461,  ///< Свойства объекта (оси, плоскости, эскиза, операции, грани).
  ksCMSelectedObjectOwnerProperties       = 40462,  ///< Свойства родителя (эскиза, операции).
  ksCMSelectedCompanentProperties         = 40463,  ///< Свойства детали или сборки.
  ksCMSelectedCompanentInstanceProperties = 40464,  ///< Свойства вставленного компонента.
  ksCMEditBilletPart                      = 40621,  ///< Редактировать источник для операции деталь-заготовка.
  ksCMChangeBilletPart                    = 40622,  ///< Заменить источник для операции деталь-заготовка.
  ksCMViewFeatureInTree        = 40524,  ///< Показать в дереве.
  ksCMLODOn                    = 40610,  ///< Упрощенное отображение.
  ksCM3DArrayDestroy           = 40615,  ///< Разрушить массив компонентов.
  ksCMEmbodimentManager        = 40710,  ///< Редактор исполнений.
  ksCMAdditionNumberberManager = 40711,  ///< Редактор дополнительных номеров исполнений.
  ksCMCreateSheetFromObject   = 40723,  ///< Создать чертеж из модели для селектированного объекта.
  ksCMHideInCompCPlaces      = 40728,  ///< Скрыть\показать во вставках начала координат.
  ksCMHideInCompCPlanes      = 40729,  ///< Скрыть\показать во вставках конструктивные плоскости.
  ksCMHideInCompCAxies       = 40730,  ///< Скрыть\показать во вставках конструктивные оси.
  ksCMHideInCompSketches     = 40731,  ///< Скрыть\показать во вставках эскизы.
  ksCMHideInCompSurfaces     = 40732,  ///< Скрыть\показать во вставках поверхности.
  ksCMHideInCompThreads      = 40733,  ///< Скрыть\показать во вставках изображения резьбы.
  ksCMHideInCompCurves       = 40734,  ///< Скрыть\показать во вставках пространственные кривые.
  ksCMHideInCompPoints       = 40735,  ///< Скрыть\показать во вставках конструктивные точки.
  ksCMHideInCompAllObjects   = 40736,  ///< Скрыть\показать во вставках вспомогательные объекты.
  ksCMHideInCompDimensions   = 40737,  ///< Скрыть\показать во вставках размеры.
  ksCMHideInCompDesignations = 40738,  ///< Скрыть\показать во вставках условные обозначения.
  ksCM3DSavePartAs = 40744,  ///< Преобразование Компонент деталь – компонент сборка и наоборот
  ksCM3DUnitParts       = 40745,  ///< Объединить компоненты в подсборку.
  ksCM3DAssemblyDestroy = 40746,  ///< Разрушить подсборку
  ksCMZoomSketch        = 40872,  ///< Показать эскиз полностью
  ksCMWireframeMode       = 41882,  ///< Каркас.
  ksCMHiddenRemovedMode   = 41883,  ///< Удаление невидимых линий.
  ksCMHiddenThinMode      = 41884,  ///< Невидимые линии тонкие.
  ksCMShadedMode          = 41885,  ///< Полутоновое.
  ksCMPerspective         = 41886,  ///< Перспективное отображение.
  ksCMShadedWireframeMode = 41893,  ///< Полутоновое с каркасом.
  ksCMRotateCCW = 41887,  ///< Вращать изображение против часовой стрелки.
  ksCMRotateCC  = 41888,  ///< Вращать изображение по часовой стрелки.
  ksCMRotate90CCW = 41889,  ///< Вращать изображение против часовой стрелки на 90гр.
  ksCMRotate90CC  = 41890,  ///< Вращать изображение по часовой стрелки на 90гр.
  ksCMFastLines      = 41891,  ///< Быстрое отображение линий.
  ksCMTreeStructure  = 41904,  ///< Вариант состава дерева построения.
  ksCMPropertyEditor  = 45171,  ///< Редактов свойств.
  ksCMProcessBarVisible  = 46541,  ///< Скрыть/показать панель параметров.
  ksCMFileNew          = ID_FILE_NEW,  ///< Создать файл.
  ksCMFileOpen         = ID_FILE_OPEN,  ///< Открыть файл.
  ksCMFileClose        = ID_FILE_CLOSE,  ///< Закрыть файл.
  ksCMFileSave         = ID_FILE_SAVE,  ///< Сохранить файл.
  ksCMFileSaveAs       = ID_FILE_SAVE_AS,  ///< Сохранить файл как.
  ksCMFilePrintSetup   = ID_FILE_PRINT_SETUP,  ///< Настройки принтера.
  ksCMFilePrint        = ID_FILE_PRINT,  ///< Печать.
  ksCMFilePrintPreview = ID_FILE_PRINT_PREVIEW,  ///< Предварительный просмотр.
  ksCMFileSendMail = ID_FILE_SEND_MAIL,  ///< Отправить файл по электронной почте.
  ksCMEditClear    = ID_EDIT_CLEAR,  ///< Удалить выделенные объекты.
  ksCMEditClearAll = ID_EDIT_CLEAR_ALL,  ///< Удалить все объекты документа.
  ksCMEditCopy     = ID_EDIT_COPY,  ///< Копировать в буфер обмена.
  ksCMEditCut      = ID_EDIT_CUT,  ///< Вырезать в буфер обмана.
  ksCMEditFind     = ID_EDIT_FIND,  ///< Найти.
  ksCMEditPaste    = ID_EDIT_PASTE,  ///< Вставить из буфера обмена.
  ksCMEditRepeat   = ID_EDIT_REPEAT,  ///< Повторить поиск.
  ksCMEditReplace  = ID_EDIT_REPLACE,  ///< Заменить.
  ksCMEditSelectAll= ID_EDIT_SELECT_ALL,  ///< Выделить все.
  ksCMEditUndo     = ID_EDIT_UNDO,  ///< Отменить.
  ksCMEditRedo     = ID_EDIT_REDO,  ///< Повторить.
  ksCMWindowNew    = ID_WINDOW_NEW,  ///< Новое окно.
  ksCMAbout       = ID_APP_ABOUT,  ///< Информация о приложении.
  ksCMHelpIndex   = ID_HELP_INDEX,  ///< Вызов справки.
  ksCMHelpFinder  = ID_HELP_FINDER,  ///< Вызов справки с поиском.
  ksCMContextHelp = ID_CONTEXT_HELP,  ///< Вызов контекстной справки(shift-F1).
  ksCMHelp        = ID_HELP,  ///< Получить справку в текущем контексте.
  ksCM3DRebuildComplete =   92359   ///< Не документированная константа. Перестроить 3D документ. Полное перестроение.
};


/// Скрывать выдачу сообщений.
enum ksHideMessageEnum : int
{
  ksShowMessage    = 0,  ///< Показывать все сообщения.
  ksHideMessageYes = 1,  ///< Скрывать все сообщения с указанием ответа 'Да' на все запросы.
  ksHideMessageNo  = 2   ///< Скрывать все сообщения без указания ответов на запросы.
};


/// Тип нумерации абзаца.
enum ksTextNumberingEnum : int
{
  ksTNumbUnknown       = -1,  ///< Тип не определенный.
  ksTNumbNoNumber      = 0,  ///< Cрока без нумерации.
  ksTNumbNumber        = 1,  ///< Cтрока с нумерацией уровня level.
  ksTNumbNewNumber     = 2,  ///< На строке начинается новая нумерация пунктов.
  ksTNumbDisableNumber = 3   ///< Cтрока не должна нумероваться никогда.
};


/// Тип дроби в тексте.
enum ksTextSizeEnum : int
{
  ksTextDefault = 0,  ///< Умолчательной высоты.
  ksTextNormal  = 1,  ///< Нормальной высоты.
  ksTextMiddle  = 2,  ///< Средней высоты.
  ksTextSmall   = 3,  ///< Малой высоты.
  ksTextBig     = 2   ///< Большей высоты.
};


/// Тип вставки в текст.
enum ksTextItemEnum : int
{
  ksTItString             = 0,  ///< Строка.
  ksTItNumerator          = 0x1,  ///< Числитель.
  ksTItDenominator        = 0x2,  ///< Знаменатель.
  ksTItFractionEnd        = 0x3,  ///< Конец дроби.
  ksTItUpperDeviation     = 0x4,  ///< Верхнее отклонение.
  ksTItLowerDeviation     = 0x5,  ///< Нижнее отклонение.
  ksTItDeviationEnd       = 0x6,  ///< Конец  отклонений.
  ksTItSBase              = 0x7,  ///< Основание выражения типа суммы.
  ksTItSUpperIndex        = 0x8,  ///< Верхний индекс выражения типа суммы.
  ksTItSLowerIndex        = 0x9,  ///< Нижний индекс выражения типа суммы.
  ksTItSEnd               = 0x10,  ///< Конец выражения типа суммы.
  ksTItSpecialSymbol      = 0x11,  ///< Спецзнак.
  ksTItSpecialSymbolEnd   = 0x12,  ///< Конец спецзнаков с текстом.
  ksTItSpecialSymbolNext  = 0x13,  ///< Начало для ввода следующих строк в спецзнаке с текстом.
  ksTItSpecialSymbolDown  = 0x14,  ///< Для ввода строк снизу в спецзнаке с текстом.
  ksTItSpecialSymbolRight = 0x15,  ///< Для ввода строк справа в спецзнаке с текстом.
  ksTItTab                = 0x16,  ///< Табуляция по текущему стилю.
  ksTItFontSymbol         = 0x17,  ///< Символ фонта.
  ksTItSeparator          = 0x18,  ///< Сепаратор (Разделитель частей обозначения).
  ksTItHyperTextEnd       = 0x19,  ///< Конец текста ссылки.
  ksTItFontSymbolW        = 0x2017,  ///< Символ фонта Unicode.
  ksTItHyperText          = 0x2000   ///< Cсылка на текст или положение объекта.
};


/// Признак горизонтального форматирования.
enum ksTextHorizontalFormatEnum : int
{
  ksHFormatNot           = 0,  ///< Перенос правой границы(нет форматирования).
  ksHFormatStrNarrowing  = 1,  ///< Сужение текста.
  ksHFormatDivision      = 2   ///< Перенос на другую строку.
};


/// Размещенеие объекта.
enum ksAllocationEnum : int
{
  ksAlLeft    = 0,  ///< Слева.
  ksAlCentre  = 1,  ///< По центру.
  ksAlRight   = 2   ///< Справа.
};


/// Тип формы для марки(без линии-выноски).
enum ksMarkInsideFormEnum : int
{
  ksMFormEmpty                       = 0,  ///< Без формы.
  ksMFormCirle                       = 1,  ///< Окружность.
  ksMFormCircle                      = 1,  ///< Окружность.
  ksMFormRectangle                   = 2,  ///< Прямоугольник.
  ksMFormSquare                      = 3,  ///< Квадрат.
  ksMFormRhomb1                      = 4,  ///< Ромб 1.
  ksMFormRhomb2                      = 5,  ///< Ромб 2.
  ksMFormHexagon                     = 6,  ///< Шестиугольник.
  ksMFormTriangle1                   = 7,  ///< Треугольник 1.
  ksMFormTriangle2                   = 8,  ///< Треугольник 2.
  ksMFormChamferedRectangle          = 9,  ///< Скругленный прямоугольник.
  ksMFormCircleWidthVerticalDelimer  = 10,  ///< Окружность с вертикальным разделителем.
  ksMFormDoubleCircle                = 11   ///< Двойная окружность.
};


/// Положение марки относительно линии.
enum ksMarkOnLinePosTypeEnum : int
{
  ksMTextAboveLine    = 0,  ///< Текст над линией.
  ksMTextOnLine       = 1,  ///< Текст на линии.
  ksMTextUnderLine    = 2   ///< Текст под линией.
};


/// Тип стрелки линии-выноски.
enum ksArrowEnum : int
{
  ksLeaderWithoutArrow = 0,  ///< Без стрелки.
  ksLeaderPoint        = 1,  ///< Вспомогательная точка.
  ksLeaderArrow        = 2,  ///< Стрелка.
  ksWithoutArrow       = 0,  ///< Без стрелки.
  ksPoint              = 1,  ///< Вспомогательная точка.
  ksArrow              = 2,  ///< Стрелка.
  ksUpHalfArrow        = 3,  ///< Верхняя половина стрелки изнутри.
  ksDownHalfArrow      = 4,  ///< Нижняя половина стрелки изнутри.
  ksNotch              = 5,  ///< Засечка.
  ksLeftNotch          = 6,  ///< Засечка с наклоном влево.
  ksRightAngle         = 7,  ///< Угол 90 град.
  ksClosedArrow        = 8,  ///< Стрелка закрытая.
  ksOpenArrow          = 9,  ///< Стрелка открытая.
  ksDot                = 10,  ///< Точка. Диаметр равен длине стрелки.
  ksSmallDot = 11,  ///< Точка маленькая. Диаметр равен 0.6 от длины стрелки
  ksTriangle60         = 12,  ///< Треугольник 60 град.
  ksTriangle90         = 13   ///< Треугольник 90 град.
};


/// Направление полки.
enum ksShelfDirectionEnum : int
{
  ksLSLeft  = -1,  ///< Влево.
  ksLSNone  = 0,  ///< Нет полки.
  ksLSRight = 1,  ///< Вправо.
  ksLSUp    = 2,  ///< Вверх.
  ksLSDown  = 3   ///< Вниз.
};


/// Тип параметров объекта.
enum ksDrawingObjectParamTypeEnum : int
{
  ksAllParam      = -1,  ///< Параметры в системе координат владельца.
  ksSheetAllParam = -2,  ///< Параметры в системе координат листа.
  ksViewAllParam  = -7   ///< Параметры в системе координат вида.
};


/// Тип узла марки.
enum ksMarkNodeEnum : int
{
  ksMarkCircle            = 0,  ///< Окружность.
  ksMarkRefCircle         = 1,  ///< Указатель ориентации оси c окружностью.
  ksMarkText              = 2   ///< Текст.
};


/// Системные стили линий.
enum ksCurveStyleEnum : int
{
  ksCSHidden                    = -1,  ///< Невидимая-скрытая(для кривых).
  ksCSUnvisible                 = 0,  ///< Невидимая (для таблицы).
  ksCSNormal                    = 1,  ///< Основная.
  ksCSThin                      = 2,  ///< Тонкая.
  ksCSAxial                     = 3,  ///< Осевая.
  ksCSDashed                    = 4,  ///< Штриховая.
  ksCSBrokenLine                = 5,  ///< Для линии обрыва.
  ksCSConstruction              = 6,  ///< Вспомогательная.
  ksCSThick                     = 7,  ///< Утолщенная.
  ksCSDash2Dots                 = 8,  ///< Пунктир 2.
  ksCSDashedNormal              = 9,  ///< Штриховая основная.
  ksCSNormalDashDot             = 10,  ///< Осевая осн.
  ksCSThinForHatch              = 11,  ///< Тонкая включаемая в штриховку.
  ksCSISO02Dashed               = 12,  ///< ISO 02 штриховая линия.
  ksCSISO03DashedLSpace         = 13,  ///< ISO 03 штриховая линия (дл. пробел).
  ksCSISO04DashDotLDash         = 14,  ///< ISO 04 штрихпунктирная линия (дл. штрих ).
  ksCSISO05DashDotLDash2Dots    = 15,  ///< ISO 05 штрихпунктирная линия (дл. штрих 2 пунктира).
  ksCSISO06DashDotLDash3Dots    = 16,  ///< ISO 06 штрихпунктирная линия (дл. штрих 3 пунктира).
  ksCSISO07Dotted               = 17,  ///< ISO 07 пунктирная линия.
  ksCSISO08DashDotLShDashes     = 18,  ///< ISO 08 штрихпунктирная линия (дл. и кор. штрихи).
  ksCSISO09DashDot1L2ShDashes   = 19,  ///< ISO 09 штрихпунктирная линия (дл. и 2 кор. штриха).
  ksCSISO10DashDot              = 20,  ///< ISO 10 штрихпунктирная линия.
  ksCSISO11DashDot2Dashes       = 21,  ///< ISO 11 штрихпунктирная линия (2 штриха).
  ksCSISO12DashDot2Dots         = 22,  ///< ISO 12 штрихпунктирная линия (2 пунктира).
  ksCSISO13DashDot3Dots         = 23,  ///< ISO 13 штрихпунктирная линия (3 пунктира).
  ksCSISO14DashDot2Dashes2Dots  = 24,  ///< ISO 14 штрихпунктирная линия (2 штриха 2 пунктира).
  ksCSISO15DashDot2Dashes3Dots  = 25   ///< ISO 15 штрихпунктирная линия (2 штриха 3 пунктира).
};


/// Системные стили текста.
enum ksTextStyleEnum : int
{
  ksTSDefault                    = 0,  ///< Умолчательный стиль для данного типа объекта.
  ksTSDrawingAnnotation          = 1,  ///< Текст на чертеже.
  ksTSSpecifications             = 2,  ///< Текст для технических требований.
  ksTSDimensionText              = 3,  ///< Текст для размерной надписи.
  ksTSSurfaceFinish              = 4,  ///< Текст для шероховатости.
  ksTSLeader1                    = 5,  ///< Текст для линии выноски  ( позиционной ).
  ksTSLeader2                    = 6,  ///< Текст для линии выноски  ( над\под полкой ).
  ksTSLeader3                    = 7,  ///< Текст для линии выноски  ( сбоку ).
  ksTSShapeDeviations            = 8,  ///< Текст для отклонений формы и базы.
  ksTSTableHeader                = 9,  ///< Текст для таблицы ( заголовок ).
  ksTSTableCell                  = 10,  ///< Текст для таблицы ( ячейка ).
  ksTSSectionLine                = 11,  ///< Текст для линии разреза/сечения.
  ksTSDirectionArrow             = 12,  ///< Текст для стрелки вида.
  ksTSUnspecifiedSurfaceFinish   = 13,  ///< Текст для неуказанной шероховатости.
  ksTSModificationSymbol         = 14,  ///< Текст для обозначения изменения.
  ksTSBrace                      = 15,  ///< Текст для фигурной скобки.
  ksTSUnitNumber                 = 16,  ///< Текст для номера узла.
  ksTSMultiTextLeader            = 17,  ///< Текст для выносной надписи.
  ksTSUnitMarking                = 18,  ///< Текст для обозначения узла.
  ksTSAxisMark                   = 19,  ///< Текст для марки координационной оси.
  ksTSMarkOnLeader               = 20,  ///< Текст для МПО(марка/позиционное обозначение с линией-выноской).
  ksTSMarkOnLine                 = 21,  ///< Текст для МПО(марка/позиционное обозначение) на линии.
  ksTSMarkInsideForm             = 22,  ///< Текст для МПО(марка/позиционное обозначение) без линии выноски.
  ksTSBOMTableName               = 23,  ///< Текст для заголовков спецификации.
  ksTSBuildingCutLine            = 24,  ///< Текст для линия разреза/сечения для СПДС.
  ksTSRprtTableHeader            = 25,  ///< Текст для таблицы отчета ( заголовок ).
  ksTSRprtTableCell              = 26,  ///< Текст для таблицы отчета ( ячейка ).
  ksTSRprtTableName              = 27,  ///< Текст для таблицы отчета ( наименование ).
  ksTSTableName                  = 28,  ///< Текст для таблицы ( наименование ).
  ksTSTextMark                   = 29   ///< Текст текстовой метки.
};


/// Форма контура Обозначения узла.
enum ksContourFormEnum : int
{
  ksUFormCirle      = 0,  ///< Окружность.
  ksUFormCircle     = 0,  ///< Окружность.
  ksUFormRectangle  = 1,  ///< Прямоугольник.
  ksUFormCRectangle = 2   ///< Cкруглённый прямоугольник.
};


/// Тип фигурной скобки.
enum ksAlignmentTypeEnum : int
{
  ksATArbitrary   = 0,  ///< Произвольная.
  ksATHorizontal  = 1,  ///< Горизонтальноая
  ksATVertical    = 2   ///< Вертикальная.
};


/// Единицы измерения длины.
enum ksLengthUnitsEnum : int
{
  ksLUnSM   = 0,  ///< Сантиметры
  ksLUnMM   = 1,  ///< Миллиметры.
  ksLUnDM   = 2,  ///< Дециметры.
  ksLUnM    = 3,  ///< Метры.
  ksLUnDocument   = 4   ///< Настройки документа.
};


/// Единицы измерения массы.
enum ksMassUnitsEnum : int
{
  ksMUnGR   = 0,  ///< Граммы
  ksMUnKG   = 1,  ///< Килограммы.
  ksMUnT    = 2,  ///< Тонны.
  ksMUnDocument   = 4   ///< Настройки документа.
};


/// Варианты задания МЦХ.
enum ksMassSettingModeEnum : int
{
  ksCalculateParam = 0,  ///< Расчет параметров.   
  ksManualMass     = 1   ///< Ручное задание массы.
};


/// Типы параметрических ограничений.
enum ksConstraintTypeEnum : int
{
  ksCUnknown            = 0,  ///< Неизвестный тип.
  ksCFixedPoint         = 1,  ///< Фиксировать точку.
  ksCPointOnCurve       = 2,  ///< Точка на кривой.
  ksCHorizontal         = 3,  ///< Горизонталь.
  ksCVertical           = 4,  ///< Вертикаль.
  ksCParallel           = 5,  ///< Параллельность двух прямых или отрезков.
  ksCPerpendicular      = 6,  ///< Перпендикулярность двух прямых или отрезков.
  ksCEqualLength        = 7,  ///< Равенство длин двух отрезков.
  ksCEqualRadius        = 8,  ///< Равенство радиусов двух дуг/окружностей.
  ksCHAlignPoints       = 9,  ///< Выравнивать две точки по горизонтали.
  ksCVAlignPoints       = 10,  ///< Выравнивать две точки по вертикали.
  ksCMergePoints        = 11,  ///< Совпадение двух точек.
  ksCAssociation        = 12,  ///< Ассоциативная связь.
  ksCDimWithVariable    = 13,  ///< Размер с переменной.
  ksCFixedDim           = 14,  ///< Фиксированный размер.
  ksCTangentTwoCurves   = 15,  ///< Касание двух кривых.
  ksCSymmetryTwoPoints  = 16,  ///< Симметрия двух точек относительно отрезка.
  ksCCollinear          = 17,  ///< Коллинеарность двух отрезков.
  ksCFixedAngle         = 18,  ///< Фиксированный угол.
  ksCFixedLenght        = 19,  ///< Фиксированная длина.
  ksCPointOnCurveMiddle = 20,  ///< Точка на серидине кривой.
  ksCBisector           = 21,  ///< Биссектриса.
  ksCConcentricity      = 22   ///< Cовпадение центров окружностей, дуг, эллипсов и точек.
};


/// Стили отображения пространсвенной точки.
enum ksAnnotationSymbolEnum : int
{
  ksUnknownSymbol     = 0,  ///< Символ неопределён.
  ksDotPoint          = 1,  ///< Точка.
  ksPlusPoint         = 2,  ///< Крестик.
  ksXPoint            = 3,  ///< X-точка.
  ksSquarePoint       = 4,  ///< Квадрат.
  ksTrianglePoint     = 5,  ///< Треугольник.
  ksCirclePoint       = 6,  ///< Окружность.
  ksAsteriskPoint     = 7,  ///< Звезда.
  ksStrikeSquarePoint = 8,  ///< Перечеркнутый квадрат.
  ksPlusPointTwo      = 9   ///< Утолщённый плюс.
};


/// Выравнивание размерной надписи.
enum ksDimensionTextAlignEnum : int
{
  ksDimACentreLowFont   = 0,  ///< По центру, с уменьшенным шрифтом.
  ksDimAUpperBoundary   = 1,  ///< По верхней границе.
  ksDimACentre          = 2,  ///< По центру.
  ksDimALowerBoundary   = 3   ///< По нижней границе.
};


/// Размер в скобках.
enum ksDimensionTextBracketsEnum : int
{
  ksDimBracketsOff     = 0,  ///< Размер без скобок.
  ksDimBrackets        = 1,  ///< Размер в круглых скобках.
  ksDimSquareBrackets  = 2   ///< Размер в квадратных скобках.
};


/// Отклонения номинального значения размера.
enum ksDimensionDeviationEnum : int
{
  ksDimDeviation     = 0,  ///< Отклонения.
  ksDimLimits        = 1,  ///< Предельные значения.
  ksDimLineLimits    = 2   ///< Предельные значения в одну строку.
};


/// Тип размерной надписи.
enum ksDimensionTextTypeEnum : int
{
  ksDimTAuto     = 0,  ///< Автоматическое.
  ksDimTManual   = 1,  ///< Ручное.
  ksDTPOnShelf   = 2   ///< На полке.
};


/// Параметр отрисовки текста.
enum ksDimensionBaseEnum : int
{
  ksDimBaseCenter      = 0,  ///< От центра.
  ksDimBaseP1          = 1,  ///< От первой выносной линии.
  ksDimBaseP2          = 2,  ///< От второй выносной линии.
  ksDimCommonBase      = 3,  ///< Размер с общей размерной линией.
  ksDimFirstCommonBase = 4   ///< Первый размер в цепочке размерных линий.
};


/// Положение размерной надписи отноcительно выносной линии.
enum ksDimensionTextPosEnum : int
{
  ksDimTextParallelOnLine  = 0,  ///< Параллельно, над линией.
  ksDimTextParallelInCut   = 1,  ///< Параллельно, в разрезе линии.
  ksDimTextHorizontalInCut = 2   ///< Горизонтально, в разрезе линии.
};


/// Размещение стрелок относительно выносной линии.
enum ksDimensionArrowPosEnum : int
{
  ksDimArrowInside  = 0,  ///< Стрелки изнутри.
  ksDimArrowOutside = 1,  ///< Стрелки снаружи.
  ksDimArrowAuto    = 2   ///< Автооразмещение стрелок.
};


/// Тип ориентации линейного размера.
enum ksLineDimensionOrientationEnum : int
{
  ksLinDParallel   = 0,  ///< Параллельно объекту.
  ksLinDHorizontal = 1,  ///< Горизонтально.
  ksLinDVertical   = 2   ///< Вертикально.
};


/// Тип размеров высоты.
enum ksHeightDimTypeEnum : int
{
  ksHDFrontView     = 0,  ///< Для вида спереди или разреза, с полкой и стрелкой, возможна выносная линия.
  ksHDTopView       = 1,  ///< Для вида сверху без линии-выноски.
  ksHDTopViewLeader = 2   ///< Для вида сверху с линией-выноской.
};


/// Тип углового размера.
enum ksAngleDimTypeEnum : int
{
  ksADMinAngle  = 0,  ///< На минимальный (острый) угол.
  ksADMaxAngle  = 1,  ///< На максимальный (тупой) угол.
  ksADMoreAngle = 2   ///< На угол более 180 гр.
};


/// Формат отображения размерной надписи.
enum ksDimTextFormatEnum : int
{
  ksDimTextFormatGMS  = 0,  ///< Градусы-минуты-секунды.
  ksDimTextFormatGDD  = 1   ///< Градусы и десятичные доли градуса.
};


/// Тип значка шероховатости.
enum ksRoughSignEnum : int
{
  ksNoProcessingType      = 0,  ///< Без указания типа обработки.
  ksDeleteMaterial        = 1,  ///< С удалением слоя материала.
  ksWithoutDeleteMaterial = 2   ///< Без удаления слоя материала.
};


/// Тип значка для линии выноски.
enum ksLeaderSignEnum : int
{
  ksLSignNone         = 0,  ///< Без знака.
  ksLGlueSign         = 1,  ///< Знак склеивания.
  ksLSolderingSign    = 2,  ///< Знак пайки.
  ksLSewingSign       = 3,  ///< Знак сшивания.
  ksLCrampSign = 4,  ///< Знак соединения внахлестку металлическими скобками.
  ksLcornerCrampSign = 5,  ///< Знак углового соединения металлическими скобами.
  ksLMontageJointSign = 6   ///< Знак монтажного шва.
};


/// Тип формы для позиционной линии выноски.
enum ksPositionLederFormEnum : int
{
  ksPLSingleText            = 0,  ///< Простой текст.
  ksPLOpenText              = 1,  ///< Открытый текст.
  ksPLCircle                = 2,  ///< Круг.
  ksPLHexagon               = 3,  ///< Шестиугольник.
  ksPLCircleWithSeparator   = 4   ///< Круг с разделителем.
};


/// Тип значка для обозначения изменения.
enum ksChangeLeaderSignEnum : int
{
  ksCLSSquare           = 0,  ///< Квадрат.
  ksCLSCircle           = 1,  ///< Окружность.
  ksCLSBracketSquare    = 2,  ///< Квадратные скобки.
  ksCLSBracketCircle    = 3,  ///< Круглые скобки.
  ksCLSBracketCorner    = 4   ///< Угловые скобки.
};


/// Знак в обозначении допуска.
enum ksTolerancePrefixSignEnum : int
{
  ksTPSNone        = 0,  ///< Нет.
  ksTPSRadius      = 1,  ///< Радиус.
  ksTPSDiametr     = 2,  ///< Диаметр.
  ksTPSToleranseT  = 3,  ///< Допуск в диаметральном выражении.
  ksTPSToleranseT2 = 4   ///< Допуск в радиусном выражении.
};


/// Знак в обозначении базы допуска.
enum ksToleranceSuffixSignEnum : int
{
  ksTSNone       = 0,  ///< Нет.
  ksTSToleranseM = 1,  ///< Зависимый допуск.
  ksTSToleranseS = 2,  ///< Независимый допуск.
  ksTSToleranseP = 3   ///< Выступающее поле допуска.
};


/// Тип расположения точки на таблице.
enum ksTablePointEnum : int
{
  ksTPUndefined    = 0,  ///< Незадано.
  ksTPLeftBottom   = 1,  ///< Левый нижний угол.
  ksTPLeftCenter   = 2,  ///< Середина левой стороны.
  ksTPLeftUp       = 3,  ///< Левый верхний угол.
  ksTPUpCenter     = 4,  ///< Середина верхней стороны.
  ksTPRightUp      = 5,  ///< Правый верхний угол.
  ksTPRightCenter  = 6,  ///< Середина правой стороны.
  ksTPRightBottom  = 7,  ///< Правый нижний угол.
  ksTPBottomCenter = 8,  ///< Середина нижней стороны.
  ksTPCenter = 9   ///< Середина точка для контрола Базовая точка.
};


/// Расположение заголовка таблицы.
enum ksTableTileLayoutEnum : int
{
  ksTTLFirstRow    = 0,  ///< В первой строке.
  ksTTLFirstColumn = 1,  ///< В первом столбце.
  ksTTLNotCreate   = 2   ///< Не создавать.
};


/// Типы границ таблицы.
enum ksCellBoundariesEnum : int
{
  ksCBLeftBorder            = 0,  ///< Левая граница.
  ksCBRightBorder           = 1,  ///< Правя граница.
  ksCBTopBorder             = 2,  ///< Верхняя граница.
  ksCBBottomBorder          = 3,  ///< Нижняя граница.
  ksCBHorisontMidleBorder   = 4,  ///< Внутренняя горизонтальная граница.
  ksCBVerticalMidleBorder   = 5,  ///< Внутренняя вертикальная граница.
  ksCBExternalBorders       = 6,  ///< Внешние границы.
  ksCBAllBorders            = 7,  ///< Все границы.
  ksCBInternalBorders       = 8,  ///< Внутренние границы.
  ksCBNoBorders             = 9   ///< Нет границ.
};


/// Тип строки текста.
enum ksTextLineType : int
{
  ksTLError        = 0,  ///< Ошибка.
  ksTLText         = 1,  ///< Простой текст.
  ksTLVerticalText = 2,  ///< Вертикальный текст.
  ksTLFragment     = 3,  ///< Вставка фрагмента.
  ksTLRaster       = 4,  ///< Вставка рисунка.
  ksTLTable        = 5   ///< Вставка таблицы.
};


/// Версии котрольных сумм (ICheckSum) .
enum ksCheckSumVersionEnum : int
{
  ksCsrCurrent            =  0,  ///< Версия текущей задачи.
  ksCsrKompas10SP2        = -1,  ///< Версия KOMPAS 10 SP2.
  ksCsrKompas11           = -5,  ///< Версия KOMPAS 11.
  ksCsrKompas11SP1        = -6,  ///< Версия KOMPAS 11 SP1.
  ksCsrKompas12           = -10,  ///< Версия KOMPAS 12.
  ksCsrKompas12SP1        = -11,  ///< Версия KOMPAS 12 SP1.
  ksCsrKompas13           = -15,  ///< Версия KOMPAS 13.
  ksCsrKompas13SP1        = -16,  ///< Версия KOMPAS 13 SP1.
  ksCsrKompas13SP2        = -17,  ///< Версия KOMPAS 13 SP2.
  ksCsrKompas14           = -20,  ///< Версия KOMPAS 14.
  ksCsrKompas14SP1        = -21,  ///< Версия KOMPAS 14 SP1.
  ksCsrKompas14SP2        = -22,  ///< Версия KOMPAS 14 SP2.
  ksCsrKompas15           = -25,  ///< Версия KOMPAS 15.
  ksCsrKompas15Sp1        = -26,  ///< Версия KOMPAS 15 SP1.
  ksCsrKompas15Sp2        = -27,  ///< Версия KOMPAS 15 SP2.
  ksCsrKompas16           = -30,  ///< Версия KOMPAS 16.
  ksCsrKompas16Sp1        = -31,  ///< Версия KOMPAS 16 SP1.
  ksCsrKompas17           = -35,  ///< Версия KOMPAS 17.
  ksCsrKompas17Sp1        = -36,  ///< Версия KOMPAS 17 SP1
  ksCsrKompas18           = -37   ///< Версия KOMPAS 18 
};


/// Размеры иконок.
enum ksBmpSizeEnum : int
{
  ksBmp1616   = 0,  ///< 16*16.
  ksBmp2424   = 1,  ///< 24*24.
  ksBmp3232   = 2,  ///< 32*32.
  ksBmp4848   = 3   ///< 48*48.
};


/// Тип процесса запрашивающего файл или список файлов.
enum ksRequestFilesTypeEnum : int
{
  ksRFUnknown                               = 0,  ///< Не известный тип.
  ksRFSaveBody                              = 1,  ///< Cохранение тела в модель.
  koRFUnitParts                             = 2,  ///< Объединение вставок в подсборку.
  koRFCopyBilletPart                        = 3,  ///< Вставка детали заготовки.
  koRFSavePartAs                            = 4,  ///< Сохранение вставки в файл.
  koRFAddDetail                             = 5,  ///< Вставка детали в сборку.
  koRFAddAssembly                           = 6,  ///< Вставка подсборки в сборку.
  koRFAddPartFromFile                       = 7,  ///< Добавить компонент из файла.
  koRFChangeDetailFile                      = 8,  ///< Заменить файл источник для вставки детали.
  koRFChangeAssemblyFile                    = 9,  ///< Заменить файл источник для вставки сборки.
  koRFChangeBilletPartFile                  = 10,  ///< Заменить файл источник для детали заготовки.
  koRFSpcObjAddDocument                     = 11,  ///< Подключение документов КОМПАС к объекту спецификации.
  koRFSpcAssemblyAddDocument   = 12,  ///< Подключение документов КОМПАС к спецификации - Управление сборкой.
  koRFAddLocalDetail                        = 13,  ///< Добавить локальную деталь.
  koRFAddLayoutGeometry                     = 14,  ///< Добавить компоновочную геометрию.
  koRFSelectDummyFile                       = 15,  ///< Выбор файла макета.
  koRFSelectCopyGeometryFile                = 16,  ///< Выбор файла модели для копирования геометрии.
  koRFSelectModelForAssociationView         = 17,  ///< Выбор файла модели для создания проекционного вида.
  koRFSelectModelForStandartAssociationView = 18   ///< Выбор файла модели для создания стандартных видов.
};


/// Типы ограничений в вершинах мультилинии.
enum ksMlVertexLimiterEnum : int
{
  ksMVeUnknown   = 0,  ///< Без ограничения.
  ksMVeArc       = 1,  ///< Дуговой.
  ksMVeAngle     = 2,  ///< Угловлй стык.
  ksMVeTangent   = 3   ///< Касательный стык.
};


/// Типы ограничений в углах мультилинии.
enum ksMlEndLimiterEnum : int
{
  ksMEndUnknown    = 0,  ///< Без ограничения.
  ksMEndLine       = 1,  ///< Прямолинейный.
  ksMEndArc        = 2,  ///< Дуговой..
  ksMEndPolyline   = 3   ///< Ломаный.
};


/// Типы обхода вершин мультилинии.
enum ksMlVertexTrackingEnum : int
{
  ksMTrShear        = 0,  ///< Обход срезом.
  ksMTrFillet       = 1,  ///< Обход скруглением.
  ksMTrEquaFillet  = 2   ///< Обход скруглением с одинаковым радиусом.
};


/// Типы сегментов контура.
enum ksContourSegmentEnum : int
{
  ksCSUnknown            = -1,  ///< Неизвестный объект.
  ksCSLineSeg            = 1,  ///< Отрезок.
  ksCSCircle             = 2,  ///< Окружность.
  ksCSArc                = 3,  ///< Дуга.
  ksCSBezier             = 8,  ///< Bezier сплайн.
  ksCSEllipse            = 32,  ///< Эллипс.
  ksCSNurbs              = 33,  ///< Nurbs сплайн.
  ksCSEllipseArc         = 34   ///< Дуга эллипса.
};


/// Типы специальных символов для аннатационных объектов.
enum ksAnnotativeTerminatorSignEnum : int
{
  ksASUnknown           = 0,  ///< Не задан.
  ksASArrowInside       = 101,  ///< Стрелка (ласточкин хвост) изнутри.
  ksASArrowOutside      = 102,  ///< Стрелка (ласточкин хвост) снаружи.
  ksASNotchTail         = 103,  ///< Засечка с продолжением кривой (с хвостиком).
  ksASUpHalfArrow       = 104,  ///< Верхняя половина стрелки изнутри.
  ksASDownHalfArrow      = 105,  ///< Нижняя половина стрелки изнутри.
  ksASBigArrowInside    = 106,  ///< Большая стрелка изнутри (7мм).
  ksASArrowOrdinate = 107,  ///< Стрелка для размера высоты(штрихи длиной 4 мм под углом 45 гр).
  ksASTriangle          = 108,  ///< Треугольник по напр-нию кривой.
  ksAScircleRad2 = 109,  ///< Окружность радиусом 2 мм тонкой линией - для шер-сти и линии-выноски.
  ksASCentreMarker      = 110,  ///< Обозначение фиктивного центра в виде большого креста.
  ksASGlueSign          = 111,  ///< Знак склеивания.
  ksASSolderingSign     = 112,  ///< Знак пайки.
  ksASSewingSign        = 113,  ///< Знак сшивания.
  ksASCrampSign         = 114,  ///< Знак соединения внахлестку металл.скобами.
  ksASCornerCrampSign   = 115,  ///< Знак углового соединения металл.скобами.
  ksASMontageJointSign  = 116,  ///< Знак монтажного шва.
  ksASNotch             = 117,  ///< Засечка без продолжения кривой (без хвостика).
  ksASBaseTriangle      = 118,  ///< Треугольник по текущей СК - для базы.
  ksASClosedArrowInside = 119,  ///< Закрытая стрелка изнутри.
  ksASClosedArrowOutside= 120,  ///< Закрытая стрелка изнутри.
  ksASOpenArrowInside   = 121,  ///< Открытая стрелка снаружи.
  ksASOpenArrowOutside  = 122,  ///< Открытая стрелка изнутри.
  ksASRightAngleInside  = 123,  ///< Стрелка 90 град изнутри.
  ksASRightAngleOutside = 124,  ///< Стрелка 90 град изнутри.
  ksASDot               = 125,  ///< Точка (диаметр равен длине стрелки размера).
  ksASSmallDot          = 126,  ///< Точка маленькая (диаметр равен 0.6 длины стрелки размера).
  ksASPoint             = 127,  ///< Вспомогательная точка.
  ksASLeftNotch         = 128   ///< Засечка с наклоном влево.
};


/// Тип угла объекта.
enum ksCornerTypeEnum : int
{
  ksCTNoProcess  = 0,  ///< Без обработки.
  ksCTChamfer = 1,  ///< Фаска.
  ksCTFillet  = 2   ///< Скругление.
};


/// Тип вставки фрагмента или вида.
enum ksInsertionTypeEnum : int
{
  ksTUnknown           = -1,  ///< Неизвестный.
  ksTBodyFragment      = 0,  ///< Вставка внешнего фрагмента. Взять в документ.
  ksTReferenceFragment = 1,  ///< Вставка внешнего фрагмента. Внешней ссылкой.
  ksTLocalFragment     = 3,  ///< Вставка локального фрагмента.
  ksTBodyView          = 4,  ///< Вставка вида другого чертежа. Взять в документ.
  ksTReferenceView     = 5   ///< Вставка вида другого чертежа. Внешней ссылкой.
};


/// Тип построения эквидистанты.
enum ksEquidistantTypeEnum : int
{
  ksETUnknown = -1,  ///< Неизвестный.
  ksETLeft    = 0,  ///< Слева по направлению.
  ksETRight   = 1,  ///< Справа по направлению.
  ksETBoth    = 2   ///< С двух сторон.
};


/// Тип обозначения центра.
enum ksCentreMarkerEnum : int
{
  ksCMUnknown    = -1,  ///< Неизвестный.
  ksCMPlusPoint  = 0,  ///< Маленький крестик.
  ksCMOneAxis    = 1,  ///< Одна ось.
  ksCMTwoAxis    = 2   ///< Две оси.
};


/// Тип полуоси для обозначения центра.
enum ksSemiAxisTypeEnum : int
{
  ksAxisUnknown = -1,  ///< Неизвестный.
  ksAxisXPlus   = 0,  ///< Полуось по оси X.
  ksAxisXMinus  = 1,  ///< Полуось против оси X.
  ksAxisYPlus   = 2,  ///< Полуось по оси Y.
  ksAxisYMinus  = 3   ///< Полуось против оси Y.
};


/// Тип данных для типа аттрибута.
enum ksAttributeTypeEnum : int
{
  ksATUnknown       = -1,  ///< Неизвестный.
  ksATString        = 0,  ///< Строка.
  ksATDouble        = 1,  ///< Число.
  ksATFixedTable    = 2,  ///< Таблица с фиксированным числом строк.
  ksATVariableTable = 3   ///< Таблица с переменным числом строк.
};


/// Тип проекции стандартного вида относительно главного вида.
enum ksRelativeProjectionTypeEnum : int
{
  ksPtNone   = -1,  ///< Не определена.
  ksPtFront  = 1,  ///< Спереди - Фронтальная плоскость.
  ksPtRear   = 2,  ///< Сзади.
  ksPtUp     = 3,  ///< Сверху - Горизонтальная плоскость.
  ksPtDown   = 4,  ///< Снизу.
  ksPtLeft   = 5,  ///< Слева - Профильная плоскость.
  ksPtRight  = 6,  ///< Справа.
  ksPtIsoXYZ = 7   ///< Изометрия XYZ.
};


/// Тип линии разрыва.
enum ksBreakLineTypeEnum : int
{
  ksBLNotImage   = 0,  ///< Не отображается.
  ksBLStraight   = 1,  ///< Прямая
  ksBLBreak      = 2,  ///< С изломом
  ksBLVawe       = 3  ///< Волнистая
};


/// Тип линии разрыва.
enum ksAngleEnum : int
{
  ksAngle0   = 0,  ///< 0 градусов.
  ksAngle90  = 1,  ///< 90 градусов.
  ksAngle180 = 2,  ///< 180 градусов.
  ksAngle270 = 3   ///< 270 градусов.
};


/// Системные стили штриховки.
enum ksHatchStyleEnum : int
{
  ksHatchMetal                   = 0,  ///< Mеталл.
  ksHatchNonMetal                = 1,  ///< Не металл.
  ksHatchTimber                  = 2,  ///< Дерево.
  ksHatchNaturalStone            = 3,  ///< Камень естественный.
  ksHatchCeramics                = 4,  ///< Керамика.
  ksHatchConcrete                = 5,  ///< Бетон.
  ksHatchGlass                   = 6,  ///< Стекло.
  ksHatchLiquid                  = 7,  ///< Жидкость.
  ksHatchNaturallyGround         = 8,  ///< Естественный грунт.
  ksHatchSpreadGround            = 9,  ///< Насыпной грунт.
  ksHatchArtificialStone         = 10,  ///< Камень искусственный.
  ksHatchReinforcedConcrete      = 11,  ///< Железобетон.
  ksHatchTenseReinforcedConcrete = 12,  ///< Напряженный железобетон.
  ksHatchLongitudalTimber        = 13,  ///< Дерево в продольном сечении.
  ksHatchSand                    = 14   ///< Песок.
};


/// Тип региона.
enum ksRegionTypeEnum : int
{
  ksRTInside   = 1,  ///< Полностью внутри.
  ksRTOutside  = 2,  ///< Cнаружи.
  ksRTCutFrame = 3   ///< Секущей рамкой.
};


/// Тип заливки.
enum ksColouringTypeEnum : int
{
  ksColouringSolid      = 0,  ///< Одноцветная.
  ksColouringLinear     = 1,  ///< Линейная.
  ksColouringAngle      = 2,  ///< Угловая.
  ksColouringCone       = 3,  ///< Коническая.
  ksColouringCircle     = 4,  ///< Радиальная.
  ksColouringSquare     = 5,  ///< Квадратная.
  ksColouringCylinder   = 6   ///< Цилидрическая.
};


/// Тип диапазона страниц.
enum ksSheetsRangeEnum : int
{
  ksAllSheets    = 0,  ///< Все страницы.
  ksUnevenSheets = 1,  ///< Нечетные страницы.
  ksEvenSheets   = 2   ///< Четные страницы.
};


/// Цвет вывода на печать.
enum ksOutputColorTypeEnum : int
{
  ksPJ_OCBlack    = 0,  ///< В черных линиях.
  ksPJ_OCByView   = 1,  ///< Цветом вида.
  ksPJ_OCByLayer  = 2,  ///< Цветом слоя.
  ksPJ_OCByObject = 3   ///< Цветом объекта.
};


/// Типы свойств.
enum ksPropertyTypeEnum : int
{
  ksPropertyDataTypeUnknown    = 0,  ///< Неизвестный.
  ksPropertyDataTypeLong       = 1,  ///< Целый.
  ksPropertyDataTypeDouble     = 2,  ///< Вещественный.
  ksPropertyDataTypeString     = 3,  ///< Строка.
  ksPropertyDataTypeBoolean    = 4,  ///< Логический.
  ksPropertyDataTypeColorRGB   = 5,  ///< Цвет RGB.
  ksPropertyDataTypeHatchStyle = 6,  ///< Стиль штриховки.
  ksPropertyDataTypeGroup      = 7   ///< Группа свойств.
};


/// Типы фильтров в команде создать отчет.
enum ksReportFiltersTypeEnum : int
{
  ksFilterConditionUnknown         = 0,  ///< Неизвестный.
  ksFilterConditionEqual           = 1,  ///< =
  ksFilterConditionSmaller         = 2,  ///< <
  ksFilterConditionLarger          = 3,  ///< >
  ksFilterConditionEqualOrSmaller  = 4,  ///< =<
  ksFilterConditionEqualOrLarger   = 5,  ///< =>
  ksFilterConditionContain         = 6,  ///< содержит
  ksFilterConditionNotContain      = 7   ///< не содержит
};


/// Тип ссылки на текст.
enum ksHypertextTypeEnum : int
{
  ksHTViewScale     =  1,  ///< Масштаб вида.
  ksHTViewUnfold    =  3,  ///< Значек развернуто.
  ksHTViewTurn      =  4,  ///< Значек повернуто.
  ksHTViewTurnAngle =  5,  ///< Повернуто на угол.
  ksHTViewName      =  6,  ///< Имя вида.
  ksHTObjectText           =  0,  ///< Основной текст объекта.
  ksHTObjectText1          =  1,  ///< Первый допольный текст.
  ksHTObjectText2          =  2,  ///< Второй допольный текст.
  ksHTObjectText3          =  3,  ///< Третий допольный текст.
  ksHTObjectText4          =  4,  ///< Четвертый допольный текст.
  ksHTObjectNumberingGroup =  5,  ///< Группа нумерации.
  ksHTVariableValue      = 0,  ///< Значение переменной.
  ksHTVariableName       = 1,  ///< Имя переменной.
  ksHTVariableExpression = 2,  ///< Выражение - Имя = значение.
  ksHTVariableComment    = 3,  ///< Комментарий.
  ksHTPositionNumber     = 0x10,  ///< Номер позиции.
  ksHTSpecificationObjectMarking = 0x80,  ///< Обозначение из объекта спецификации подключенного к линии выноски.
  ksHTSpecificationObjectName   = 0x81,  ///< Наименование из объекта спецификации подключенного к линии выноски.
  ksHTSpecificationObjectCount    = 0x82,  ///< Количество из объекта спецификации подключенного к линии выноски.
  ksHTObjectProperty             = 0x80,  ///< Свойство объекта.
  ksHTObjectZone       = -1,  ///< Обозначение зоны.
  ksHTObjectSheet      = -2,  ///< Номер листа.
  ksHTViewTitleZone  = -1,  ///< Обозначение зоны вида.
  ksHTViewTitleSheet = -2,  ///< Номер листа вида.
  ksHTViewBaseObjectZone = -3,  ///< Обозначение зоны знака вида (стрелки вида, линии сечения, выносного этлемента).
  ksHTViewBaseObjectSheet = -4   ///< Номер листа знака знака вида (стрелки вида, линии сечения, выносного этлемента).
};


/// Тип гиперссылки.
enum ksHyperLinkTypeEnum : int
{
  ksHLUnknown  = 0,  ///< Неизвестный.
  ksHLFile     = 1,  ///< Ссылка на файл или web страницу.
  ksHLObject   = 2,  ///< Ссылка на объект.
  ksHLMail     = 3   ///< Адрес электронной почты.
};


/// Тип менеджера выбора объектов.
enum ksChooseManagerTypeEnum : int
{
  ksChMUnknown         = -2,  ///< Неизвестный
  ksChMAllColors       = -1,  ///< Любой менеджер.
  ksChMLevel1ColorBase = 0,  ///< Основная группа выбора. Цвет - Указание 1.
  ksChMLevel1Color1    = 1,  ///< Дополнительная группа выбора. Цвет - Указание 2.
  ksChMLevel1Color2    = 2,  ///< Дополнительная группа выбора. Цвет - Указание 3.
  ksChMLevel2ColorBase = 100,  ///< Основная группа выбора. Уровень 2. Цвет - Указание 1.
  ksChMLevel2Color1    = 101,  ///< Дополнительная группа выбора. Уровень 2. Цвет - Указание 2.
  ksChMLevel2Color2    = 102,  ///< Дополнительная группа выбора. Уровень 2. Цвет - Указание 3.
  ksChMUser1  = 201,  ///< Пользовательская группа выбора 1.
  ksChMUser2  = 202,  ///< Пользовательская группа выбора 2.
  ksChMUser3  = 203,  ///< Пользовательская группа выбора 3.
  ksChMUser4  = 204,  ///< Пользовательская группа выбора 4.
  ksChMUser5  = 205,  ///< Пользовательская группа выбора 5.
  ksChMUser6  = 206,  ///< Пользовательская группа выбора 6.
  ksChMUser7  = 207,  ///< Пользовательская группа выбора 7.
  ksChMUser8  = 208,  ///< Пользовательская группа выбора 8.
  ksChMUser9  = 209,  ///< Пользовательская группа выбора 9.
  ksChMUser10 = 210   ///< Пользовательская группа выбора 10.
};


/// Признак ошибок при открытии документа с восстановлением
enum ksRecoverErrorEnum : int
{
  ksRNoError     = 0,  ///< Проверка завершена. Ошибок не найдено.
  ksRecover      = 1,  ///< Проверка завершена. Найденные ошибки исправлены.
  ksRNoOpen      = 2,  ///< Проверка завершена. Открыть документ не удалось.
  ksRAlreadyOpen = 3,  ///< Файл уже открыт в одном из окон. Проверка невозможна.
  ksRProtected   = 4  ///< Файл защищен с помощью приложения КОМПАС-Защита. Проверка невозможна.
};


/// Вариант решения биссектрисы для двух прямых.
enum ksBisectorVariant : int
{
  ksBVNone       = 0,  ///< Неопределенное направление (ближайшее решение).
  ksBVNormalSum  = 1,  ///< Биссектриса вдоль суммы нормалей прямых/отрезков.
  ksBVNormalDiff = 2   ///< Биссектриса вдоль разности нормалей прямых/отрезков.
};


/// Тип внешнего файла
enum ksExternalFilesTypesEnum : int
{
  ksEFTUnknown                  = -1,  ///< Неизвестный тип.
  ksEFTDocumentFile             = 0,  ///< Файл документа.
  ksEFTCurveStyleLibrary        = 1,  ///< Библиотека стилей кривых.
  ksEFTTextStyleLibrary         = 2,  ///< Библиотека стилей текстов.
  ksEFTHatchStyleLibrary        = 3,  ///< Библиотека стилей штриховок.
  ksEFTAttributeTypesLibrary    = 4,  ///< Библиотека типов атрибутов.
  ksEFTLayoutsLibrary           = 5,  ///< Библиотека оформлений.
  ksEFTFragmentFile             = 6,  ///< Фрагмент.
  ksEFTFragmentsLibrary         = 7,  ///< Библиотека фрагментов.
  ksEFTSheetConnectedToSpc      = 8,  ///< Лист сборки, прикрепленный к спецификации.
  ksEFTSystemFile               = 9,  ///< Cистемный файл.
  ksEFTIngotsLibrary            = 10,  ///< Библиотека типовых элементов (3D).
  ksEFTPartFile                 = 11,  ///< Деталь (3D).
  ksEFTRasterFile               = 12,  ///< Растровые изображения.
  ksEFTDocConnectedToSpcObj     = 13,  ///< Документ, подключенный к объекту спецификации.
  ksEFTSpcConnectedToSheet      = 14,  ///< Спецификация, подключенная к листу сборки.
  ksEFTDocConnectedToSpcObjInOtherDocs = 15,  ///< Документ, подключенный к объектам спецификации в других документах.
  ksEFTAssemblyFile             = 16,  ///< Файл-сборка (3D).
  ksEFTModelsLibrary            = 17,  ///< Библиотека моделей.
  ksEFTTemporaryFile            = 18,  ///< Временные файл.
  ksEFTSourceFileForVariable    = 19,  ///< Файлы-источники для переменных.
  ksEFTServiceFile              = 20,  ///< Служебный файл.
  ksEFTDraftFile                = 21,  ///< Файл-чертеж.
  ksEFTHyperLink                = 22,  ///< Гиперссылка.
  ksEFTDataFile                 = 23,  ///< Файл данных.
  ksEFTReadingRegimFile         = 24,  ///< Файл режима чтения компонента.
  ksEFTAssRprtTable             = 25,  ///< Файл ассоциативной таблицы отчета.
  ksEFTEexternalHyperText       = 26,  ///< Файл внешней текстовой связок.
  ksEFTCopyExternalGeometry     = 27,  ///< Файл-источник копии внешней геометрии.
  ksEFExternalBilletPart        = 28,  ///< Файлы деталей заготовок.
  ksEFTExternalLayoutGeometry   = 29,  ///< Файлы компоновочной геометрии.
  ksEFTMetaDataSource           = 30,  ///< Файл-источник метаданных.
  ksEFTSheet                    = 31,  ///< Файлы чертежей.
  ksEFTExternalRefContextFile   = 32,  ///< Файл контекста внешней ссылки.
  ksEFTImportingInstanceSource  = 33,  ///< Файлы импортированной вставки.
  ksEFTDummy                    = 34,  ///< Файлы вставки-макета.
  ksEFTBendTable                = 35,  ///< Файл таблицы сгибов.
  ksEFTStandartProducts         = 36,  ///< Файлы стандартных изделий.
  ksEFTProductPartSource        = 37   ///< Документ-источник свойств составной части.
};


/// Типы булевых операций над телами и замкнутыми кривыми.
enum ksBooleanType : int
{
  ksBooleanUnknown  = 0,  ///< Неизвестность.
  ksIntersect       = 1,  ///< Пересечение.
  ksDifference      = 2,  ///< Вычитание.
  ksUnion           = 3   ///< Объединение.
};


/// Тип привязки к объектам.
enum ksSnapTypeEnum : int
{
  ksSTUnknown        = -1,  ///< Информация отсутствует.
  ksSTUndefine       =  0,  ///< Нет тривязки.
  ksSTNearestPoint   =  1,  ///< Ближайшая точка.
  ksSTNearestMiddle  =  2,  ///< Ближайшая середина.
  ksSTObjectCentre   =  3,  ///< Центр объекта.
  ksSTIntersect      =  4,  ///< Пересечение.
  ksSTGrid           =  5,  ///< Привязка по сетке.
  ksSTXYAlign        =  6,  ///< Выравнивание по X Y.
  ksSTAngleSnap      =  7,  ///< Угловая привязка.
  ksSTPointOnCurve   =  8,  ///< Точка на кривой.
  ksSTNormalToCurve  =  9,  ///< По нормали на кривую.
  ksSTTangentToCurve = 10   ///< По касательной на кривую.
};


/// Тип настроек новых документов.
enum ksNewDocumentSettingsTypeEnum : int
{
  ksNewPartDocumentSettings = 1   ///< Настройки новых документов для детали.
};


/// Тип события выбора материала.
enum ksMaterialPropertyTypeEnum : int
{
  ksMPNewPartDocumentSettings = 1   ///< Вызов из настроек новых документов для настроек детали.
};


/// Параметры формирования обозначения.
enum ksVariantMarkingTypeEnum : int
{
  ksVMFullMarking      = -1,  ///< Полное обозначение.
  ksVMBaseMarking      = 0x1,  ///< Базовая часть обозначения.
  ksVMEmbodimentNumber = 0x2,  ///< Исполнение.
  ksVMAdditionalNumber = 0x4,  ///< Дополнительный номер.
  ksVMCode             = 0x8   ///< Код документа.
};


/// Тип отчета.
enum ksReportTypeEnum : int
{
  ksRTPropertiesReport                = 0,  ///< Отчет по свойствам.
  ksRTEmbodimentsReport               = 1,  ///< Отчет по исполнениям.
  ksRTPatternWithVariablesTableReport = 2,  ///< Отчет по таблице изменяемых переменных в массиве.
  ksRTAdditionNumbersReport           = 3   ///< Отчет по таблице дополнительных номеров.
};


/// Формат формирования текста для свойства.
enum ksValueFormatEnum : int
{
  ksVFVariableValue   = 0x1 | 0x8,  ///< Значение.
  ksVFvvfToleranceDiv = 0x2 | 0x4 | 0x8,  ///< Отклонение и допуск.
  ksVFvvfFullValue     = 0x1 | 0x2 | 0x4 | 0x8,  ///< Значение + допуск + отклонения + спецсимволы.
  ksVFvvfGridFullValue = 0x1 | 0x2 | 0x4,  ///< Значение + допуск + отклонения без спецсимволов.
  ksVFBooleanValue     = 0x1,  ///< Значение 1/0.
  ksVFBooleanYesNo     = 0x2,  ///< Значение Да/Нет.
  ksVFBooleanPlusMinus = 0x3,  ///< Значение +/-.
  ksVFFullMarking         = 0x1,  ///< Полное обозначение.
  ksVFOnlyAdditionMarking = 0x2   ///< Только номер исполнения.
};


/// Тип группировки колонки отчета.
enum ksGroupeTypeEnum : int
{
  ksGTNone    = 0,  ///< Нет группировки.
  ksGTMatch   = 1,  ///< Совпадение - группируются только строки с одинаковыми значениями.
  ksGTSum     = 2,  ///< Сумма. (Только для числовых колонок).
  ksGTRange   = 3,  ///< Диапазон. (Только для числовых колонок).
  ksGTEnum    = 4   ///< Перечисление.
};


/// Формат нумерации.
enum ksNumberingTypeEnum : int
{
  ksNTArabicNumerals   = 0,  ///< 1,2,3,4,5...
  ksNTRomanNumerals    = 1,  ///< I, II, III, IV, V...
  ksNTUpperRegEnglish  = 2,  ///< A,B,C,D ...
  ksNTLowerRegEnglish  = 3,  ///< a,b,c,d ...
  ksNTUpperRegRussian  = 4,  ///< А,Б,В,Г ...
  ksNTLowerRegRussian  = 5   ///< а,б,в,г ...
};


/// Формат нумерации строк отчета.
enum ksRowsNumberingTypeEnum : int
{
  ksRNTNone       = 0,  ///< Нумерацию не использовать.
  ksRNTSimple     = 1,  ///< Простая нумерация.
  ksRNTMultiLevel = 2   ///< Многоуровневая нумерация.
};


/// Способ инициализации стиля отчета.
enum ksReportStyleInitEnum : int
{
  ksRSIDefault = 0   ///< Стиль по умолчанию.
};


/// Тип листа.
enum ksSheetTypeEnum : int
{
  ksDocumentSheet        = 0,  ///< Лист документа.
  ksFrontAdditionalSheet = 1,  ///< Дополнительный лист в начале документа.
  ksLastAdditionalSheet  = 2   ///< Дополнительный лист в конце документа.
};


/// Способ преобразования координат внешней триангуляции.
enum ksDrawInScreenPlaneEnum : int
{
  ksDrawNone              = 0,  ///< Не преобразовывать координаты в плоскость экран.
  ksDrawInScreenPlane     = 1,  ///< Координаты Ox и Oy совпадают с экранными.
  ksDrawProjectToScreen   = 2,  ///< Координаты Oz совпадают с экранными, Ox И Oy проецируются на экран
  ksDrawProjectFromScreen = 3   ///< Координаты Ox остаются неизменными, координаты Oz проецируются с экранных
};


/// Выравнивание текста.
enum ksTextAlignEnum : int
{
  ksTALeft             = 0,  ///< Слева.
  ksTARight            = 2,  ///< Справа.
  ksTAHCenter          = 6,  ///< Центр горизонтали.
  ksTATop              = 0,  ///< Вверху.
  ksTABottom           = 8,  ///< Внизу.
  ksTABaseline         = 24,  ///< Базовая линия.
  ksTAVCenter          = 56   ///< Центр вертикали.
};


/// Способ выбора объектов для отчета.
enum ksReportBuildingTypeEnum : int
{
  ksRBAllObjects    = 0,  ///< По всем объектам.
  ksRBChooseObjects = 1,  ///< По указанным объектам.
  ksRBCurrentView   = 2,  ///< По текущему виду.
  ksRBChoiceToLevel = 3   ///< До указанного уровня.
};


/// Тиn компоновки таблиц отчета.
enum ksPageLayoutTypeEnum : int
{
  ksRPLayoutDefault = 0,  ///< Вправо, затем вниз.
  ksRPLayout1       = 1   ///< Вниз, затем вправо.
};


/// Типы контролов для отображения свойств в окне свойств.
enum ksObjectPropertyControlTypeEnum : int
{
  ksOPControlGroup      = 0,  ///< Группа свойств.
  ksOPControlPointCoord = 1,  ///< Координаты точки.
  ksOPControlPointStyle = 2,  ///< Стиль точки 2D.
  ksOPControlLineStyle  = 4,  ///< Стиль линии 2D.
  ksOPControlHatchStyle = 5,  ///< Стиль штриховки.
  ksOPControlColor      = 6,  ///< Цвет.
  ksOPControlEditDouble = 7,  ///< Вещественное значение.
  ksOPControlEditInt    = 10,  ///< Целое значение.
  ksOPControlListDouble = 11,  ///< Список вещественных значений.
  ksOPControlListInt    = 14,  ///< Список целых значений.
  ksOPControlListCheck = 15,  ///< Элемент который принимает два значения true,false.
  ksOPControlListBmp    = 16,  ///< Список с битмапами.
  ksOPControlListString = 17,  ///< Список строк.
  ksOPControlSimpleText   = 19,  ///< Однострочный текст объекта.
  ksOPControlText         = 25,  ///< Многострочный текст.
  ksOPControlEdit  = 31,  ///< Строка.
  ksOPControlExternalEdit = 34,  ///< Внешнее свойство с внешним редактированием. Отображает битмап
  ksOPControlExternalStringEdit = 35,  ///< Внешнее свойство с внешним редактированием. Отображает строку
  ksOPControlFontImageList = 38,  ///< Список со шрифтовыми иконками.
  ksOPControlExternalText      = 44,  ///< Однострочный текст объекта с внешним редактированием.
  ksOPControlExternalMultyText = 45,  ///< Многострочный текст с внешним редактированием.
  ksOPControlUserLineStyle     = 47   ///< Пользовательский стиль линии.
};


/// Типы принтеров.
enum ksPrinterTypeEnum : int
{
  ksPTPrintPreviewPrinter    = 0,  ///< Принтер для печати через предварительный просмотр.
  ksPTSpecialPrinter         = 1   ///< Принтер для специальной печати.
};


/// Отличие стиля СП от библиотечного.
enum ksSpecificationStyleDifferenceTypeEnum : int
{
  ksSpcStyleEqual       = 0,  ///< Стиль спецификации не отличается от библиотечного.
  ksSpcStyleDistinguish = 1,  ///< Стиль спецификации отличается от библиотечного.
  ksSpcStyleNotFound    = -1   ///< Стиль спецификации не найден в библиотеке стилей.
};


/// Типы подчиненных режимов редактирования документов КОМПАС.
enum ksSlaveDocumentTypeEnum : int
{
  ksSDSketchMode          = 1000,  ///< Режим редактирования эскиза.
  ksSDSpecificationSlave  = 1001   ///< Слейв режим редактирования спецификации.
};


/// Способ формирования точек сплайна.
enum ksNurbsByPointsBuildingTypeEnum : int
{
  ksNByPBTUndefined  = 0,  ///< Неопределенный.
  ksNByPBLinear      = 1,  ///< Линейный.
  ksNByPBChordLength = 2,  ///< По длине хорды.
  ksNByPBCentripetal = 3   ///< Центростремительный.
};


/// Вариант управления точкой сплайна.
enum ksNurbsByPointsPointConstraintsEnum : int
{
  ksNByPBPCNone     = 0,  ///< Нет.
  ksNByPBPCTangent  = 1,  ///< Касательностью.
  ksNByPBPCSmoothG2 = 2,  ///< Касательностью и кривизной.
  ksNByPBPCNormal   = 3   ///< Перпендикулярно.
};


/// Способ вычисления шага аппроксимации для точек сплайна.
enum ksNurbsByPointsAproximationTypeEnum : int
{
  ksNBPAproximationStepByCurvature = 0,  ///< Вычисление шага аппроксимации с учетом радиуса кривизны.
  ksNBPAproximationStepByDeviation = 1   ///< Вычисление шага аппроксимации по угловой толерантности.
};


/// Константы вариантов реализаций Компас.
enum ksKompasVariantEnum : int
{
  ksKompasPro           = 0x0000,  ///< КОМПАС.
  ksKompasHome          = 0x0001,  ///< КОМПАС-Home.
  ksKompasViewer        = 0x0002,  ///< КОМПАС-Viewer.
  ksKompasSpds          = 0x0004,  ///< КОМПАС-SPDS.
  ksKompasGraphic       = 0x0100,  ///< КОМПАС-График.
  ksKompasInvisible     = 0x0200,  ///< КОМПАС-Invisible.
  ksKompasLatin         = 0x0400,  ///< КОМПАС - иностранная версия.
  ksKompasConsumer      = 0x1000,  ///< КОМПАС-Consumer.
  ksKompasStudy         = 0x2000   ///< КОМПАС-Study
};


/// Визуальный стиль чекбокса.
enum ksCheckBoxVisualStyleEnum : int
{
  ksCheckBoxDefault     = 0,  ///< Обычный.
  ksCheckBoxSwitcher    = 1   ///< Переключатель.
};


/// Типы фантома.
enum ksPhantomTypeEnum : int
{
  ksUnknownPhantom       = 0,  ///< Нет фантома.
  ksMoveGroupPhantom     = 1,  ///< Cдвиг группы.
  ksLineSegPhantom       = 2,  ///< Отрезок.
  ksRectanglePhantom     = 3,  ///< Прямоугольник.
  ksAngleLineSegPhantom  = 4,  ///< Отрезок с заданным углом.
  ksHalfRectanglePhantom = 5,  ///< Половина прямоугольника.
  ksUserPhantom          = 6,  ///< Пользовательский фантом.
  ksCirclePhantom        = 7   ///< Окружность.
};


/// Типы процессов 2D.
enum ksProcess2DTypeEnum : int
{
  ksProcess2DCursor     = 1,  ///< Запрос на получение точки.
  ksProcess2DPlacement  = 2   ///< Запрос на получение точки и угла.
};


/// События процесса 2D.
enum ksProcess2DNotifyEnum : int
{
  ksProcess2DPlacementChanged     = 1,  ///< Изменение положения.
  ksProcess2DExecuteCommand       = 2,  ///< Выполнить команду меню.
  ksProcess2DRun                  = 3,  ///< Запуск процесса.
  ksProcess2DStop                 = 4,  ///< Остановка процесса.
  ksProcess2DActivate             = 5,  ///< Активизация процесса.
  ksProcess2DDeactivate           = 6,  ///< Деактивизация процесса.
  ksProcess2DEndProcess           = 7,  ///< Окончание процесса.
  ksProcess2DMouseEnterLeaveParam = 8,  ///< Запрос параметров точек для визуального определения места применения параметра.
  ksProcess2DAbortProcess = 9   ///< Прерывание процесса при запуске другого процесса или команды.
};


/// События процесса 3D.
enum ksProcess3DNotifyEnum : int
{
  ksProcess3DPlacementChanged = 1,  ///< Изменение положения.
  ksProcess3DExecuteCommand   = 2,  ///< Выполнить команду меню.
  ksProcess3DRun              = 3,  ///< Запуск процесса.
  ksProcess3DStop             = 4,  ///< Остановка процесса.
  ksProcess3DActivate         = 5,  ///< Активизация процесса.
  ksProcess3DDeactivate       = 6,  ///< Деактивизация процесса.
  ksProcess3DFilterObjects    = 7,  ///< Фильтрация объетов.
  ksProcess3DCreateTakeObject = 8,  ///< Событие создания объекта в подчиненном режиме.
  ksProcess3DEndProcess       = 9,  ///< Окончание процесса.
  ksProcess3DProcessingGroupObjects = 10,  ///< Обработать объекты, пришедшие при селектировании рамкой.
  ksProcess3DAbortProcess   = 11   ///< Прерывание процесса при запуске другого процесса или команды.
};


/// Типы процессов 3D.
enum ksProcess3DTypeEnum : int
{
  ksProcess3DPlacementAndEntity     = 1,  ///< Запрос на указание местоположения и объекта.
  ksProcess3DSelectEntity  = 2   ///< Запрос на выбор объекта.
};


/// Значения переключателя.
enum ksTwinSwitcherValueEnum : int
{
  ksTwinSwitcherPos1  = 1,  ///< Положение 1.
  ksTwinSwitcherPos2  = 2   ///< Положение 2.
};


/// Тип стрелки ответвления у допуска формы.
enum ksToleranceArrowType : int
{
  ksTANone     = 0,  ///< Нет.
  ksTAArrow    = 1,  ///< Стрелка.
  ksTATriangle = 2   ///< Треугольник.
};


/// Тип процессного пменю.
enum ksProcessContextMenuType : int
{
  ksProcessDefaultContextMenu = 0,  ///< Обычное меню процесса .
  ksProcessContextMenuHide = -2,  ///< Без меню.
  ksProcessContextPanel    = -3,  ///< Контекстная панель с контролами.
  ksProcessContextIconMenu = -4   ///< Меню с иконками .
};


/// Тип иконки для кнопки создать.
enum ksEnterButtonIconTypeEnum : int
{
  ksEnterCheckIcon    = 0,  ///< Обычная кнопка. Создать ввиде галочки.
  ksEnterFloppyIcon   = 1,  ///< Дискета.
  ksEnterNewInputIcon = 2,  ///< Новый ввод.
  ksEnterApplyIcon    = 3   ///< Применить.
};


/// Тип стрелки ответвления у допуска формы.
enum ksShowHideTmpObjTypeEnum : int
{
  ksTmpObjHide        = 0,  ///< Объект скрыт.
  ksTmpObjShow        = 1,  ///< Объект отображается как обычный объект.
  ksTmpObjShowPhantom = 2   ///< Объект отображается как фантом.
};


/// Типы документов в библиотеке документов КОМПАС.
enum ksDocumentsLibraryInsertionTypeEnum : int
{
  ksInsertionUnknown       = 0,  ///< Неизвестный тип.
  ksInsertionFragment      = 2,  ///< Фрагмент.
  ksInsertionPart          = 4,  ///< Деталь.
  ksInsertionAssembly      = 5,  ///< Сборка.
  ksInsertionTextual       = 6,  ///< Текстовый документ Компас. *.kdw
  ksInsertionRaster       = 20,  ///< Растр.
  ksInsertionTable        = 21,  ///< Таблица.
  ksInsertionTxtFile = 22   ///< Текстовый документ. *.txt
};


/// Режим перерисовки окнон документа.
enum ksRedrawDocumentModeEnum : int
{
  ksRedrawFull             = 0,  ///< Полная перерисовка.
  ksRedrawAnimation        = 1,  ///< Выполнение анимации сцены.
  ksRedrawSelection        = 2,  ///< Серектирование или подсветка.
  ksRedrawOperationPhantom = 3,  ///< Операционные фантомы.
  ksRedrawDimensions       = 4,  ///< Операционные размеры.
  ksRedrawPhantomObjects   = 5,  ///< Фантомные объекты.
  ksRedrawHighlightObjects = 6,  ///< Подсветка объектов под курсором.
  ksRedrawWidgets          = 7   ///< Манипуляторы, 3D хот-точки и т.п..
};


/// Тип объектов дерева СЧИ.
enum ksProductObjectTypeEnum : int
{
  ksPOTAllObjects         =  -1,  ///< Не задан. Выдавать все объекты.
  ksPOTDocumentObject     = 0x1,  ///< Документ.
  ksPOTEmbodimentsObject  = 0x2,  ///< Исполнение.
  ksPOTPartObject         = 0x4,  ///< Компонент.
  ksPOTBodyObject         = 0x8,  ///< Тело.
  ksPOTProductObject      = 0x10,  ///< Изделие.
  ksPOTInformObject       = 0x20,  ///< Информационный объект.
  ksPOTSurfaceObject      = 0x40,  ///< Поверхность.
  ksPOTBillet             = 0x80,  ///< Изделие-заготовка.
  ksPOTGroupObject        = 0x100   ///< Групповой объект.
};


/// Версия сохранения файла.
enum ksSaveDocumentVersionEnum : int
{
  ksSDV_Prev            = -1,  ///< В предыдущую версию.
  ksSDV_Current         =  0,  ///< В текущую версию.
  ksSDV_Kompas_5_11_R03 =  1,  ///< В версию Компас 5.11.R03.
  ksSDV_Kompas_6_0      =  2,  ///< В версию Компас 6.0.
  ksSDV_Kompas_6_Plus   =  3,  ///< В версию Компас 6 Plus.
  ksSDV_Kompas_7_0      =  4,  ///< В версию Компас 7.0.
  ksSDV_Kompas_7_Plus   =  5,  ///< В версию Компас 7 Plus
  ksSDV_Kompas_8_0      =  6,  ///< В версию Компас 8.0
  ksSDV_Kompas_8_Plus   =  7,  ///< В версию Компас 8 Plus
  ksSDV_Kompas_9_0      =  8,  ///< В версию Компас 9.0
  ksSDV_Kompas_10_0     =  9,  ///< В версию Компас 10.0
  ksSDV_Kompas_11_0     = 10,  ///< В версию Компас 11.0
  ksSDV_Kompas_12_0     = 11,  ///< В версию Компас 12.0
  ksSDV_Kompas_13_0     = 12,  ///< В версию Компас 13.0
  ksSDV_Kompas_14_0     = 13,  ///< В версию Компас 14.0
  ksSDV_Kompas_14_Sp1   = 14,  ///< В версию Компас 14 Sp1
  ksSDV_Kompas_14_Sp2   = 15,  ///< В версию Компас 14 Sp2
  ksSDV_Kompas_15_0     = 16,  ///< В версию Компас 15.0
  ksSDV_Kompas_15_Sp1   = 17,  ///< В версию Компас 15 Sp1
  ksSDV_Kompas_15_Sp2   = 18,  ///< В версию Компас 15 Sp2
  ksSDV_Kompas_16       = 19,  ///< В версию Компас 16
  ksSDV_Kompas_16_Sp1   = 20,  ///< В версию Компас 16 Sp1
  ksSDV_Kompas_17       = 21,  ///< В версию Компас 17
  ksSDV_Kompas_17_Sp1   = 22,  ///< В версию Компас 17_Sp1
  ksSDV_Kompas_18       = 23,  ///< В версию Компас 18
  ksSDV_Kompas_18_Sp1   = 24,  ///< В версию Компас 18_Sp1
  ksSDV_Kompas_19       = 25,  ///< В версию Компас 19
  ksSDV_Kompas_20       = 26,  ///< В версию Компас 20
  ksSDV_Kompas_21       = 27,  ///< В версию Компас 21
  ksSDV_Kompas_22       = 28   ///< В версию Компас 22
};


/// События диалога с произвольным наполнением.
enum ksContentDialogNotifyEnum : int
{
  ksCDCreateContentCallback = 1,  ///< Создание контента.
  ksCDDestroyContent        = 2,  ///< Удаление контента.
  ksCDExecuteCommand        = 3,  ///< Выполнить команду.
  ksCDButtonUpdate          = 4   ///< Установка состояния кнопки панели.
};


/// Темы Компас.
enum ksThemeEnum : int
{
  ksThemeLight  = 0,  ///< Светлая.
  ksThemeDark   = 2   ///< Темная.
};


/// Признаки использования в спецификации.
enum ksSpcUsedTypeEnum : int
{
  ksSpcUsedInAllDescriptions    = 0,  ///< Отображать во всех описаниях.
  ksSpcUsedInCurrentDescription = 1   ///< Отображать в текущем описании.
};


/// Индекс точки конической кривой.
enum ksConicCurvePontIndexEnum : int
{
  ksCCBeginPoint     = 0,  ///< Начальная точка.
  ksCCEndPoint       = 1,  ///< Конечная точка.
  ksCCIntersectPoint = 2,  ///< Точка пересечения.
  ksCCPointOnCurve   = 3   ///< Точка на кривой.
};


/// Тип поиска объектов.
enum ksFindObjectsTypeEnum : int
{
  ksFindObjByType     = -1,  ///< Объект заданного типа.
  ksFindAll           =  0,  ///< Любые объекты.
  ksFindAnyCurve      =  1,  ///< Любая кривая или прямая.
  ksFindCircleAnalog  =  4,  ///< Дуга или окружность.
  ksFindtTimmedCurve  =  8,  ///< Кривая имеющая граничные точки.
  ksFindEllipseAnalog = 13,  ///< Эллипc или дуга эллипса.
  ksFindHatchBoundary = 15   ///< Кривые подходящие для границы штриховки. (Дополнительно проверяется стиль кривых).
};


/// События функции поиска объектов.
enum ksFindObjectParametersNotifyEnum : int
{
  ksFOPFilterObject = 1   ///< Фильтрация объетов.
};


/// События монипуляторов процесса 3D.
enum ksProcess3DManipulatorsNotifyEnum : int
{
  ksRotateManipulator         = 1,  ///< Вращение манипулятора относительно оси на угол.
  ksMoveManipulator           = 2,  ///< Перемещение манипулятора.
  ksClickManipulatorPrimitive = 3,  ///< Клик или двойной клик по примитиву манипулятора.
  ksBeginDragManipulator      = 4,  ///< Начало таскания манипулятора за примитив.
  ksEndDragManipulator        = 5,  ///< Завершение таскания манипулятора за примитив.
  ksCreateManipulatorEdit     = 6,  ///< Создание редактора для ввода значения управляющего положением манипулятора.
  ksDestroyManipulatorEdit    = 7,  ///< Удаление редактора для ввода значения управляющего положением манипулятора.
  ksChangeManipulatorValue    = 8   ///< Завершение редактирования значения в редакторе манипулятора.
};


/// Положение двумерной точки относительно двумерной кривой.
enum ksPointLocationTypeEnum : int
{
  ksPLUndefined = 0,  ///< Положение не определено, кривая разомкнута.
  ksPLOutside   = 1,  ///< Точка снаружи замкнутой кривой.
  ksPLOnCurve   = 2,  ///< Точка на кривой.
  ksLPInside    = 3   ///< Точка внутри замкнутой кривой.
};


/// Тип библиотеки стилей.
enum ksStylesLibraryTypeEnum : int
{
  ksCurveStyleLibrary         = 1,  ///< Библиотека стилей кривых (*.lcs).
  ksHatchStyleLibrary         = 2,  ///< Библиотека стилей штриховок (*.lhs).
  ksTextStyleLibrary          = 3,  ///< Библиотека стилей текстов   (*.lts).
  ksStampStyleLibrary         = 4,  ///< Библиотека стилей описаний штампов (*.lyt).
  ksGraphicLayoutStyleLibrary = 5,  ///< Библиотека стилей оформлений графических документов и спецификаций (*.lyt).
  ksTextLayoutStyleLibrary    = 6,  ///< Библиотека стилей оформлений текстовых документов (*.lyt).
  ksSpcLayoutStyleLibrary     = 7   ///< Библиотека стилей оформлений спецификаций (*.lyt).
};


/// Тип стиля кривой.
enum ksCurveStyleTypeEnum : int
{
  ksCSTSoldLine   = 0,  ///< Сплошная.
  ksCSTBrokenLine = 1   ///< Прерывистая.
};


/// Способ задания параметров пера.
enum ksCurvePenTypeEnum : int
{
  ksCPTIndependent = 0,  ///< Задано значением.
  ksCPTBasicLine   = 1,  ///< Как у основной линии.
  ksCPTThinLine    = 2,  ///< Как у тонкой линии.
  ksCPTHeavyLine   = 3   ///< Как у утолщенной линии.
};


/// Количество знаков после запятой.
enum ksAccuracyEnum : int
{
  ksAccuracyDefault = -1,  ///< По умолчанию. Использовать настройки.
  ksAccuracy0= 0,  ///< 0.
  ksAccuracy1 = 1,  ///< 0,1.
  ksAccuracy2 = 2,  ///< 0,12.
  ksAccuracy3 = 3,  ///< 0,123.
  ksAccuracy4 = 4,  ///< 0,1234.
  ksAccuracy5 = 5,  ///< 0,12345.
  ksAccuracy6 = 6,  ///< 0,123456.
  ksAccuracy7 = 7,  ///< 0,1234567.
  ksAccuracy8 = 8,  ///< 0,12345678.
  ksAccuracy9 = 9   ///< 0,123456789.
};


/// Состояния (статус) защиты продукта.
enum ksProtectProductStatusEnum : int
{
  ksProtectUnknown   = 0,  ///< Неопределенный, состояние неизвестно.
  ksProtectDemo      = 1,  ///< Недоступный, деморежим.
  ksProtectDisabled  = 2,  ///< Запрещенный, отключенный.
  ksProtectExpired   = 3,  ///< Недействительный, просроченный.
  ksProtectNormal    = 4,  ///< Нормальный, рабочий.
  ksProtectFailed    = 5   ///< Неудачный, неисправный, повреждённый.
};


/// Модули Компас.
enum ksKompasModuleEnum : int
{
  ksKompasModule2D  = 1,  ///< Модуль 2D.
  ksKompasModule3D  = 2,  ///< Модуль 3D.
  ksKompasPrint     = 100,  ///< Модуль печати.
  ksKompasExport    = 101   ///< Модуль экспорта.
};


/// Вариант отрисовки.
enum ksModelRenderTypeEnum : int
{
  ksModelRenderNone      = -1,  ///< Без аппаратного ускорения.
  ksModelRenderAuto      = 0,  ///< Автоматическое определение.
  ksModelRenderPerfected = 1,  ///< Улучшенный. Триангуляция лежит на GPU. Минимальное число отрисовочных вызовов.
  ksModelRenderMedium    = 2,  ///< Базовый. Триангуляция лежит на GPU. Группировка по телам.
  ksModelRenderLow       = 3   ///< Совместимый. Старая реализация. Минимальные требования к GPU.
};


/// Качество сглаживания.
enum ksModelPerformanceLevelEnum : int
{
  ksMPLDisabledAntialiasing = 0,  ///< Без сглаживания.
  ksMPLLowAntialiasing      = 1,  ///< Низкое качество сглаживания.
  ksMPLNormalAntialiasing   = 2,  ///< Среднее качество сглаживания.
  ksMPLHightAntialiasing    = 3   ///< Высокое качество сглаживания.
};


/// Прозрачность.
enum ksModelTransparencyTypeEnum : int
{
  ksModelTransparencyMesh      = 0,  ///< Сетчатая прозрачность.
  ksModelTransparencyRealistic = 1   ///< Реалистичная прозрачность.
};


/// Статус в системе версионирования.
enum ksPLMStatusEnum : int
{
  ksPLMStateUndefined     = 0,  ///< Состояние не задано.
  ksPLMStateNotRegistered = 1,  ///< Не зарегистрирован в ЛОЦМАН:PLM.
  ksPLMStateAvailable     = 2,  ///< Просмотр.
  ksPLMStateInProgress    = 3,  ///< Взят в работу.
  ksPLMStateBlocked       = 4,  ///< Заблокирован.
  ksPLMStateError         = 5   ///< Ошибка.
};


/// Отличие в системе версионирования.
enum ksPLMChangesEnum : int
{
  ksPLMChangeUndefined    = 0,  ///< Состояние не задано.
  ksPLMNoChanges          = 1,  ///< Нет различий.
  ksPLMChangesNotCommited = 2,  ///< Изменения не загружены в ЛОЦМАН:PLM.
  ksPLMUpdateNeeded       = 3,  ///< Есть изменения в ЛОЦМАН:PLM.
  ksPLMConflict           = 4   ///< Ошибка.
};


/// Cобытия объектов версионирования.
enum ksPLMObjectNotifyEnum : int
{
  ksPLMStatusChanged  =  1001,  ///< Изменение статуса в системе версионирования.
  ksPLMChangeChanged  =  1002,  ///< Изменение признака отличия в системе версионирования.
  ksPLMValueChanged   =  1003   ///< Изменение значения свойств объекта версионирования.
};


/// События функции поиска объектов 3D.
enum ksFindObject3DParametersNotifyEnum : int
{
  ksFOPFilterObject3D = 1   ///< Фильтрация объетов.
};


/// Тип группы нумерации. Тип номера.
enum ksNumericGroupTypeEnum : int
{
  ksNumericGroupNumbers = 0,  ///< 1, 2, 3, 4, 5...
  ksNumericGroupSymbols = 1   ///< Заданные символы.
};


/// Типы точек размеров.
enum ksDimensionPointEnum : int
{
  ksDimensionTextPoint  = 0,  ///< Точка привязки текста
  ksDimensionBasePoint  = 1,  ///< Точка указания размера.
  ksDimensionShelfPoint = 2,  ///< Точка на линии выноски размера.
  ksDimensionLinePoint  = 3   ///< Точка на размерной линии.
};


/// Типы точек обозначений.
enum ksDesignationPointEnum : int
{
  ksDesignationBasePoint  = 1,  ///< Точка указания.
  ksDesignationShelfPoint = 2   ///< Точка на линии выноски обозначения.
};


/// Типы изображений.
enum ksRasterFormatEnum : int
{
  ksRasterFormatBMP  = 0,  ///< BMP
  ksRasterFormatGIF  = 1,  ///< GIF
  ksRasterFormatJPG  = 2,  ///< JPG
  ksRasterFormatPNG  = 3,  ///< PNG
  ksRasterFormatTIF  = 4,  ///< TIF
  ksRasterFormatTGA  = 5,  ///< TGA
  ksRasterFormatPCX  = 6,  ///< PCX
  ksRasterFormatWMF  = 16,  ///< WMF
  ksRasterFormatEMF  = 17   ///< EMF
};


/// Свойства объектов версионирования.
enum ksPLMPropertyEnum : int
{
  ksPLMPropertyVersion     = 1,  ///< Версия.
  ksPLMPropertyAuthor      = 2,  ///< Создал.
  ksPLMPropertyBlocked     = 3,  ///< Заблокировал.
  ksPLMPropertySession     = 4,  ///< Сессия.
  ksPLMPropertyAccessLevel = 5,  ///< Уровень доступа.
  ksPLMPropertyCondition   = 6   ///< Состояние.
};


/// Многостраничный вывод.
enum ksMultiPageOutputEnum : int
{
  ksMultiPageOff  = 0,  ///< Сохранять листы в отдельных файлах
  ksMultiPageOn   = 1,  ///< Сохранять листы в одном файле
  ksMultiPageOn2  = 2   ///< Сохранять листы одним изображением
};


/// Цвет.
enum ksColorBPPEnum : int
{
  ksColorBPP_O1 = 1,  ///< Черный
  ksColorBPP_O2 = 2,  ///< 4 цвета
  ksColorBPP_O4 = 4,  ///< 16 цветов
  ksColorBPP_O8 = 8,  ///< 256 цветов
  ksColorBPP_16 = 16,  ///< 16 разрядов
  ksColorBPP_24 = 24,  ///< 24 разряда
  ksColorBPP_32 = 32   ///< 32 разряда
};


/// Тип цвета.
enum ksObjectColorTypeEnum : int
{
  ksColorBw            = 0,  ///< Черный
  ksColorView          = 1,  ///< Установленный для вида
  ksColorLayer         = 2,  ///< Установленный для слоя
  ksColorObject        = 3,  ///< Установленный для объекта
  ksCurrentColorScheme = 4   ///< Установленный для объекта в текущей цветовой схеме
};


/// Вариант создания шероховатости.
enum ksRoughModificationEnum : int
{
  ksRoughModification1973 = 0,  ///< Старая версия ГОСТ 2.309-73.
  ksRoughModification2003 = 1   ///< Шероховатость в соответствии с изменением №3 от 2003 г. в ГОСТ 2.309-73.
};


/// Разделитель десятичной части размеров.
enum ksDecimalDelimiterTypeEnum : int
{
  ksDecimalComma = 0,  ///< Десятичная запятая.
  ksDecimalPoint = 1   ///< Десятичная точка.
};


/// Признак типа угла.
enum ksAngleTypeEnum : int
{
  ksError   = -2,  ///< Ошибка.
  ksConcave = -1,  ///< Угол вогнутый.
  ksNeutral =  0,  ///< Плоский угол.
  ksConvex  =  1   ///< Угол выпуклый.
};


/// Тип системных каталогов.
enum ksSystemPathTypeEnum : int
{
  ksSystemFiles = 0,  ///< Путь к каталогу системных файлов.
  ksApplications = 1,  ///< Путь к каталогу файлов приложений.
  ksTemporaryFiles = 2,  ///< Путь к каталогу сохранения временных файлов.
  ksConfigurations = 3,  ///< Путь к каталогу сохранения конфигурации системы.
  ksIniFile = 4,  ///< Полное имя INI-файла системы.
  ksBinaryFiles = 5,  ///< Путь к каталогу исполняемых файлов системы.
  ksProjectFiles = 6,  ///< Путь к каталогу сохранения kompas.prj.
  ksDesktopFiles = 7,  ///< Путь к каталогу сохранения kompas.dsk.
  ksTemplates = 8,  ///< Путь к каталогу шаблонов Компас-документов.
  ksProfiles = 9,  ///< Путь к каталогу сохранения профилей пользователя.
  ksWorkFiles = 10,  ///< Путь к каталогу Мои документы.
  ksSheetmetalTables = 11,  ///< Путь к каталогу таблиц сгибов.
  ksPartLib = 12,  ///< Путь к каталогу PartLib.
  ksMultilineTemplates = 13,  ///< Путь к каталогу шаблонов мультилинии.
  ksPrintDeviceConfigurations = 14,  ///< Путь к каталогу конфигураций плоттеров/принтеров.
  ksCurrentWorkFiles = 15,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения рабочих файлов.
  ksCurrentApplications = 16,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения приложения.
  ksCurrentSystemFiles = 17,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения системных файлов.
  ksCurrentProfiles = 18,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения профиля пользователя.
  ksCurrentSheetmetalTables = 19,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения таюлиц сгибов.
  ksApplicationDirectories = 20,  ///< Список каталогов приложений.
  ksDocumentLibraries = 21,  ///< Путь к каталогу библиотек документов.
  ksDocumentLibrariesDirectories = 22,  ///< Список каталогов библиотек документов.
  ksCurrentDocumentLibraries = 23,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения библиотек документов.
  ksUnils = 24,  ///< Путь к каталогу утилит.
  ksUnilsDirectories = 25,  ///< Список каталогов утилит.
  ksCurrentUnils = 26,  ///< Последний выбранный путь в диалоге Open|Save для открытия/сохранения утилиты.
  ksProgramData = 27   ///< Путь к каталогу данных приложения.
};


/// Тип математической 2D кривой.
enum ksMathCurve2DTypeEnum : int
{
  ksUndefinetCurveType    = 0,  ///< Неизвестно.
  ksLine                  = 202,  ///< Прямая.
  ksLineSegment           = 203,  ///< Отрезок.
  ksArc                   = 204,  ///< Окружность или дуга.
  ksCosinusoid            = 205,  ///< Кривая-косинусоида. Волнистая линия.
  ksPolyCurve             = 206,  ///< Сплайновая кривая.
  ksPolyLine              = 207,  ///< Полилиния.
  ksBezier                = 208,  ///< Безье-сплайн.
  ksHermit                = 209,  ///< Составной кубический сплайн Эрмита.
  ksNurbs                 = 210,  ///< NURBS кривая.
  ksCubicSpline           = 211,  ///< Кубический сплайн.
  ksTrimmedCurve          = 212,  ///< Усеченная кривая.
  ksOffsetCurve           = 213,  ///< Эквидистантная продленная кривая.
  ksReparamCurve          = 214,  ///< Репараметризованная кривая.
  ksPointCurve            = 215,  ///< Кривая - точка.
  ksCharacterCurve        = 216,  ///< Кривая, координатные функции которой заданы в символьном виде.
  ksProjCurve             = 217,  ///< Проекционная кривая.
  ksSweptImageCurve       = 218,  ///< Образ трехмерной кривой на поверхности при движении по направляющей.
  ksTransformedCurve      = 219,  ///< Трансформированная кривая.
  ksConeBendedCurve = 220,  ///< Кривая в параметрической области конуса, соответствующая кривой в параметрической области плоскости при коническом сгибе.
  ksConeUnbendedCurve = 221,  ///< Кривая в параметрической области плоскости, соответствующая кривой в параметрической области конуса при коническом сгибе.
  ksContour           = 301,  ///< Контур.
  ksContourWithBreaks = 302   ///< Контур c разрывами.
};


/// Тип переменной.
enum ksVariableTypeEnum : int
{
  ksVariableUnknown  = 0,  ///< По касательной.
  ksVariableBool     = 1,  ///< Логический.
  ksVariableInt      = 2,  ///< Целый.
  ksVariableDouble   = 3,  ///< Вещественный.
  ksVariableAngle    = 4,  ///< Угловой.
  ksVariableInterval = 5,  ///< Интервал.
  ksVariableFunction = 6   ///< Функция.
};


/// Тип пересечения.
enum ksCurvesIntectFormEnum : int
{
  ksCurvesIntectSimple  = 0,  ///< Нормальное пересечение.
  ksCurvesIntectTangent =  1   ///< Угол Касание.
};


/// Способ форматирования имени файла при первом сохранении.
enum ksFileNameMakeModeEnum : int
{
  ksFileNameMakeByType = 0,  ///< Тип документа.
  ksFileNameMakeByDessignation = 1,  ///< Обозначение.
  ksFileNameMakeByName = 2,  ///< Наименование.
  ksFileNameMakeByDessignationAndName = 3,  ///< Обозначение + Наименование.
  ksFileNameMakeByNameAndDessignation = 4   ///< Обозначение.
};


/// Признак выпуклой поверхности.
enum ksSurfaceSalientTypeEnum : int
{
  ksSurfaceSalientNo = -1,  ///< Вогнутая поверхность.
  ksSurfaceSalientUnknown = 0,  ///< Плоская или неоднородная или неизвестно.
  ksSurfaceSalientYes = 1   ///< Выпуклая поверхность.
};


/// Тип изменения порядка объектов.
enum ksChangeOrderType : int
{
  ksChangeOrderTop = 1,  ///< Выше всех.
  ksChangeOrderBottom = 2,  ///< Ниже всех.
  ksChangeOrderBeforeObject = 3,  ///< Перед объектом.
  ksChangeOrderAfterObject = 4,  ///< За объектом.
  ksChangeOrderUpLevel = 5,  ///< На уровень вперед.
  ksChangeOrderDownLevel = 6,  ///< На уровень назад.
  ksChangeOrderBeforeObjectByGroupOrder = 7,  ///< Перед объектом (расположить объекты группы в порядке их добавления в группу).
  ksChangeOrderAfterObjectByGroupOrder = 8   ///< За объектом (расположить объекты группы в порядке их добавления в группу).
};


/// Параметрическое состояние объекта.
enum ksObjectConstraintsStateEnum : int
{
  ksObjectStateUnknown     = 0,  ///< Обычный не параметризованный объект.
  ksObjectStateFullDefined = 1,  ///< Полностью определенный объект.
  ksObjectStateOverDefined = 2,  ///< Переопределённый объект(размер).
  ksObjectStateInformative = 3,  ///< Информационный объект(размер).
  ksObjectWrongProjection  = 4   ///< Потерянная проекционная связь.
};


/// Параметрическое состояние системы.
enum ksConstraintsStateEnum : int
{
  ksStateUnknown = 0,  ///< О состоянии ничего не известно.
  ksStateWellConstrained = 1,  ///< Полностью определенная система - все степени свободы нулевые.
  ksStateUnderConstrained = 2,  ///< Недоопределенная система - имеются ненулевые степени свободы.
  ksStateUnresolvedRedundancy = 3   ///< Имеются не удовлетворенные избыточные ограничения.
};


/// Состояние общего наименования.
enum ksCreateCommonNameState : int
{
  ksCommonNameCreationAvailable = 0,  ///< Доступно создание общего наименования.
  ksCommonNameDocIsReadOnly = 1,  ///< Недоступно: документ открыт только для чтения.
  ksCommonNameRequiredConvert = 2,  ///< Недоступно: необходимо преобразовать спецификацию.
  ksCommonNameHideObjects = 3,  ///< Недоступно: в режиме показа скрытых объектов.
  ksCommonNameAllObjects = 4,  ///< Недоступно: в режиме показа всех объектов.
  ksCommonNameExcludedObjects = 5,  ///< Недоступно: в режиме показа исключенных объектов.
  ksCommonNameEnableSortSpcObj = 6,  ///< Недоступно: объект спецификации должен быть базовым.
  ksCommonNameInvalidSection = 7,  ///< Недоступно: неподходящий раздел.
  ksCommonNameExistCommonName = 8,  ///< Недоступно: объект уже в составе общего наименования.
  ksCommonNameRequireNameColumnStandardInfo = 9,  ///< Недоступно: в наименовании объекта отсутствует информация о стандарте.
  ksCommonNameRequiredSPDoc = 10,  ///< Недоступно: создание объекта доступно в документе спецификации и в спецификации на листе.
};
