// Mydlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "text30.h"
#include "Mydlg1.h"
#include "afxdialogex.h"


// Mydlg1 �Ի���

IMPLEMENT_DYNAMIC(Mydlg1, CDialogEx)

Mydlg1::Mydlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, s2(_T(""))
{

}

Mydlg1::~Mydlg1()
{
}

void Mydlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, s1);
	DDV_MaxChars(pDX, s1, 20);
	DDX_Text(pDX, IDC_EDIT1, s2);
	DDV_MaxChars(pDX, s2, 20);
}


BEGIN_MESSAGE_MAP(Mydlg1, CDialogEx)
	ON_BN_CLICKED(IDOK, &Mydlg1::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg1 ��Ϣ�������


void Mydlg1::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void Mydlg1::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString s3;
	s3 = s1;
	s1 = s2;
	s2 = s3;
	this->UpdateData(false);
}
