// Sum.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "text32.h"
#include "Sum.h"
#include "afxdialogex.h"


// Sum �Ի���

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


// Sum ��Ϣ�������


void Sum::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void Sum::OnBnClickedButton1()
{
	this->UpdateData(true);
	sum = a + b;
	this->UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
