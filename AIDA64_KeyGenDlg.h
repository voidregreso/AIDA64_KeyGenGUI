

#pragma once

class CAIDA64KeyGenDlg : public CDialogEx
{

public:
	CAIDA64KeyGenDlg(CWnd *pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum
	{
		IDD = IDD_AIDA64_KEYGEN_DIALOG
	};
#endif

protected:
	virtual void DoDataExchange(CDataExchange *pDX);

protected:
	HICON m_hIcon;

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
