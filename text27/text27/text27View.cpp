
// text27View.cpp : Ctext27View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text27.h"
#endif

#include "text27Doc.h"
#include "text27View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext27View

IMPLEMENT_DYNCREATE(Ctext27View, CView)

BEGIN_MESSAGE_MAP(Ctext27View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctext27View ����/����

Ctext27View::Ctext27View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext27View::~Ctext27View()
{
}

BOOL Ctext27View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext27View ����

void Ctext27View::OnDraw(CDC* /*pDC*/)
{
	Ctext27Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext27View ���

#ifdef _DEBUG
void Ctext27View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext27View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext27Doc* Ctext27View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext27Doc)));
	return (Ctext27Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext27View ��Ϣ�������


void Ctext27View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext27Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->p1 = point;
	CView::OnLButtonDown(nFlags, point);
}



void Ctext27View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext27Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->p2 = point;
	CClientDC dc(this);
	dc.Rectangle(pDoc->p1.x, pDoc->p1.y, point.x, point.y);
	CView::OnLButtonUp(nFlags, point);
}


void Ctext27View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext27Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	CString s;
	s += (wchar_t)nChar;
	if (pDoc->f)
	{
		dc.TextOutW(pDoc->p1.x+pDoc->a, pDoc->p1.y + 10, s);
		int n = pDoc->p1.y + 10;
	}
	else {
		dc.TextOutW(pDoc->p3.x, pDoc->p3.y, s);
	}
	pDoc->a = pDoc->a + 30;
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Ctext27View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext27Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->f = false;
	pDoc->p3 = point;
	CView::OnLButtonDblClk(nFlags, point);
}
