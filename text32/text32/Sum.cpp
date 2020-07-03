// Sum.cpp : 实现文件
//

#include "stdafx.h"
#include "text32.h"
#include "Sum.h"
#include "afxdialogex.h"


// Sum 对话框

IMPLEMENT_DYNAMIC(Sum, CDialogEx)

Sum::Sum(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, sum(0)
{

}

Sum::~Sum()
{
}

void Sum::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(Sum, CDialogEx)
	ON_BN_CLICKED(IDOK, &Sum::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &Sum::OnBnClickedButton1)
END_MESSAGE_MAP()


// Sum 消息处理程序


void Sum::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void Sum::OnBnClickedButton1()
{
	this->UpdateData(true);
	sum = a + b;
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
