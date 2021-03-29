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
END_MESSAGE_MAP()


// CUserinfoDlg 消息处理程序
