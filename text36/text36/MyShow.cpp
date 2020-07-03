// MyShow.cpp : 实现文件
//

#include "stdafx.h"
#include "text36.h"
#include "MyShow.h"
#include "afxdialogex.h"
#include"text36Doc.h"
#include"text36View.h"

// MyShow 对话框

IMPLEMENT_DYNAMIC(MyShow, CDialogEx)

MyShow::MyShow(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

MyShow::~MyShow()
{
}

void MyShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
}


BEGIN_MESSAGE_MAP(MyShow, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyShow::OnEnChangeEdit1)
END_MESSAGE_MAP()


// MyShow 消息处理程序


void MyShow::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	
}


BOOL MyShow::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	Ctext36Doc* pDoc =((Ctext36View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();
	this->UpdateData(true);
	s = pDoc->str;
	this->UpdateData(false);
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
