

#pragma once

#ifndef __AFXWIN_H__
#error "Include 'pch.h' before including this file to generate PCH"
#endif

#include "resource.h"

class CAIDA64KeyGenApp : public CWinApp
{
public:
	CAIDA64KeyGenApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CAIDA64KeyGenApp theApp;
