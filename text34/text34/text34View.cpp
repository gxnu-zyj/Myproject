
// text34View.cpp : Ctext34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text34.h"
#endif

#include "text34Doc.h"
#include "text34View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext34View

IMPLEMENT_DYNCREATE(Ctext34View, CView)

BEGIN_MESSAGE_MAP(Ctext34View, CView)
	ON_COMMAND(ID_Transform, &Ctext34View::OnTransform)
END_MESSAGE_MAP()

// Ctext34View ����/����

Ctext34View::Ctext34View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext34View::~Ctext34View()
{
}

BOOL Ctext34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext34View ����

void Ctext34View::OnDraw(CDC* /*pDC*/)
{
	Ctext34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext34View ���

#ifdef _DEBUG
void Ctext34View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext34Doc* Ctext34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext34Doc)));
	return (Ctext34Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext34View ��Ϣ�������


void Ctext34View::OnTransform()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1, s3;
		int a;
		s1 = dlg.s1;
		s3=dlg.s3;
		a = dlg.a;
	}
}
