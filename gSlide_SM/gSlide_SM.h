
// gSlide_SM.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CgSlide_SMApp:
// �� Ŭ������ ������ ���ؼ��� gSlide_SM.cpp�� �����Ͻʽÿ�.
//

class CgSlide_SMApp : public CWinApp
{
public:
	CgSlide_SMApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CgSlide_SMApp theApp;