
// TryTetris.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTryTetrisApp:
// �йش����ʵ�֣������ TryTetris.cpp
//

class CTryTetrisApp : public CWinApp
{
public:
	CTryTetrisApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTryTetrisApp theApp;