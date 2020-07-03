
// text15View.cpp : Ctext15View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text15.h"
#endif

#include "text15Doc.h"
#include "text15View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext15View

IMPLEMENT_DYNCREATE(Ctext15View, CView)

BEGIN_MESSAGE_MAP(Ctext15View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext15View ����/����

Ctext15View::Ctext15View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext15View::~Ctext15View()
{
}

BOOL Ctext15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext15View ����

void Ctext15View::OnDraw(CDC* pDC)
{
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext15View ���

#ifdef _DEBUG
void Ctext15View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext15Doc* Ctext15View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext15Doc)));
	return (Ctext15Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext15View ��Ϣ�������


void Ctext15View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetCapture();
	pDoc->a = point.x;
	pDoc->b = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext15View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	ReleaseCapture();
	pDoc->c = point.x;
	pDoc->d = point.y;
	CClientDC pen(this);
	CRect cr(pDoc->a, pDoc->b, pDoc->c, pDoc->d);
	pen.Rectangle(&cr);
	CView::OnLButtonUp(nFlags, point);
}



void Ctext15View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s, k;
	s.Format(_T("X=%d"), point.x);
	k.Format(_T("Y=%d"), point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, s);
	dc.TextOutW(80, 30, k);
	CView::OnMouseMove(nFlags, point);
}
