// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "text29.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, s2(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
	DDV_MaxChars(pDX, s1, 20);
	DDX_Text(pDX, IDC_EDIT2, s2);
	DDV_MaxChars(pDX, s2, 20);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
