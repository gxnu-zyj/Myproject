
// text29View.cpp : Ctext29View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text29.h"
#endif

#include "text29Doc.h"
#include "text29View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext29View

IMPLEMENT_DYNCREATE(Ctext29View, CView)

BEGIN_MESSAGE_MAP(Ctext29View, CView)
	ON_COMMAND(ID_PutOut, &Ctext29View::OnPutout)
END_MESSAGE_MAP()

// Ctext29View ����/����

Ctext29View::Ctext29View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext29View::~Ctext29View()
{
}

BOOL Ctext29View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext29View ����

void Ctext29View::OnDraw(CDC* /*pDC*/)
{
	Ctext29Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext29View ���

#ifdef _DEBUG
void Ctext29View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext29View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext29Doc* Ctext29View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext29Doc)));
	return (Ctext29Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext29View ��Ϣ�������


void Ctext29View::OnPutout()
{
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s;
		s = _T("���Ѿ��˳��Ի���");
		CClientDC dc(this);
		dc.TextOutW(20, 20, s);
		/*
		CString s1, s2, s3;
		s1 = dlg.s1;
		s2 = dlg.s2;
		s3 = s1;
		s1 = s2;
		s2 = s3;
		CClientDC dc(this);
		dc.TextOutW(20, 20, s1);
		dc.TextOutW(80,20, s2);
	}*/
	// TODO: �ڴ���������������
	}
}
