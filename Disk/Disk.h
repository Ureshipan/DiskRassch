
// Disk.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CDiskApp:
// Сведения о реализации этого класса: Disk.cpp
//

class CDiskApp : public CWinApp
{
public:
	CDiskApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CDiskApp theApp;
