
// text9View.cpp : Ctext9View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text9.h"
#endif

#include "text9Doc.h"
#include "text9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext9View

IMPLEMENT_DYNCREATE(Ctext9View, CView)

BEGIN_MESSAGE_MAP(Ctext9View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext9View ����/����

Ctext9View::Ctext9View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext9View::~Ctext9View()
{
}

BOOL Ctext9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext9View ����

void Ctext9View::OnDraw(CDC* pDC )
{
	Ctext9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext9View ���

#ifdef _DEBUG
void Ctext9View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext9Doc* Ctext9View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext9Doc)));
	return (Ctext9Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext9View ��Ϣ�������


void Ctext9View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->count = pDoc->count + 1;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext9View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Ctext9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(0, 0, s);
	CView::OnRButtonDown(nFlags, point);
}
