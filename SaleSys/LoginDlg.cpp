// LoginDlg.cpp: 实现文件
//

#include "pch.h"
#include "SaleSys.h"
#include "LoginDlg.h"
#include "SaleSysDlg.h"
#include "afxdialogex.h"


// CLoginDlg 对话框

IMPLEMENT_DYNAMIC(CLoginDlg, CDialog)

CLoginDlg::CLoginDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_LOGIN_DIALOG, pParent)
{

}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	ON_BN_CLICKED(IDLOGIN, &CLoginDlg::OnBnClickedLogin)
END_MESSAGE_MAP()


// CLoginDlg 消息处理程序


void CLoginDlg::OnBnClickedLogin()
{
	// TODO: 在此添加控件通知处理程序代码
	if (true)
	{
		//AfxMessageBox("OK");
		//CSaleSysDlg dlg;
		//dlg.DoModal();
		CSaleSysDlg* pSaleSysDlg = new CSaleSysDlg;
		pSaleSysDlg->Create(IDD_SALESYS_DIALOG,this);
		pSaleSysDlg->ShowWindow(SW_SHOW);
		pSaleSysDlg->SetActiveWindow();

		//this->DestroyWindow();
	}
	else
	{
		AfxMessageBox("Fail");
	}
}
