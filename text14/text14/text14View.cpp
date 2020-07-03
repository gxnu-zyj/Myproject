
// text14View.cpp : Ctext14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text14.h"
#endif

#include "text14Doc.h"
#include "text14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext14View

IMPLEMENT_DYNCREATE(Ctext14View, CView)

BEGIN_MESSAGE_MAP(Ctext14View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext14View ����/����

Ctext14View::Ctext14View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext14View::~Ctext14View()
{
}

BOOL Ctext14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext14View ����

void Ctext14View::OnDraw(CDC* pDC)
{
	Ctext14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext14View ���

#ifdef _DEBUG
void Ctext14View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext14Doc* Ctext14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext14Doc)));
	return (Ctext14Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext14View ��Ϣ�������


void Ctext14View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1, s2, s3,s;
	s = _T("wuxiao");
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s3.Format(_T("%d"), pDoc->c);
	CClientDC dc(this);
	if (pDoc->A.PtInRect(point))
		dc.TextOutW(250, 50, s1);
	else if (pDoc->B.PtInRect(point))
		dc.TextOutW(210, 220, s2);
	else if (pDoc->C.PtInRect(point))
		dc.TextOutW(110, 125, s3);
	else
		dc.TextOutW(250, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
