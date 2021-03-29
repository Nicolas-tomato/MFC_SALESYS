// UserinfoDlg.cpp: 实现文件
//

#include "pch.h"
#include "SaleSys.h"
#include "UserinfoDlg.h"
#include "afxdialogex.h"


// CUserinfoDlg 对话框

IMPLEMENT_DYNAMIC(CUserinfoDlg, CDialog)

CUserinfoDlg::CUserinfoDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_USERINFO_DIALOG, pParent)
{

}

CUserinfoDlg::~CUserinfoDlg()
{
}

void CUserinfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUserinfoDlg, CDialog)
	ON_BN_CLICKED(IDLOGOUT, &CUserinfoDlg::OnBnClickedLogout)
END_MESSAGE_MAP()


// CUserinfoDlg 消息处理程序


void CUserinfoDlg::OnBnClickedLogout()
{
	// TODO: 在此添加控件通知处理程序代码
	::SendMessage(GetParent()->GetParent()->m_hWnd, WM_CLOSE, 0, 0);
	CDialog::OnCancel();
}
