
// DrawStar.h : DrawStar Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDrawStarApp:
// �йش����ʵ�֣������ DrawStar.cpp
//

class CDrawStarApp : public CWinApp
{
public:
	CDrawStarApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawStarApp theApp;
