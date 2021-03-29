#pragma once


// CUserinfoDlg 对话框

class CUserinfoDlg : public CDialog
{
	DECLARE_DYNAMIC(CUserinfoDlg)

public:
	CUserinfoDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CUserinfoDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_USERINFO_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
