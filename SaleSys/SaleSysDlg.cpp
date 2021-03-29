
// SaleSysDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "SaleSys.h"
#include "SaleSysDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSaleSysDlg 对话框



CSaleSysDlg::CSaleSysDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_SALESYS_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSaleSysDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SALESYS_TAB, m_salesys_tab);
}

BEGIN_MESSAGE_MAP(CSaleSysDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CSaleSysDlg 消息处理程序

BOOL CSaleSysDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_salesys_tab.InsertItem(0, _T("UserInfo"));

	m_uerinfo_dlg.Create(IDD_USERINFO_DIALOG, &m_salesys_tab);

	CRect rc;
	m_salesys_tab.GetClientRect(rc);
	rc.top += 20;
	rc.bottom -= 2;
	rc.left += 2;
	rc.right -= 20;
	m_uerinfo_dlg.MoveWindow(&rc);


	//把对话框对象指针保存起来
	//p_list_dlg = &m_uerinfo_dlg;

	//显示初始页面
	m_uerinfo_dlg.ShowWindow(SW_SHOW);


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CSaleSysDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CSaleSysDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

