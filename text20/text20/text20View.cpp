
// text20View.cpp : Ctext20View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text20.h"
#endif

#include "text20Doc.h"
#include "text20View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext20View

IMPLEMENT_DYNCREATE(Ctext20View, CView)

BEGIN_MESSAGE_MAP(Ctext20View, CView)
	ON_COMMAND(ID_Show, &Ctext20View::OnShow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctext20View ����/����

Ctext20View::Ctext20View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext20View::~Ctext20View()
{
}

BOOL Ctext20View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext20View ����

void Ctext20View::OnDraw(CDC* pDC)
{
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	SetTimer(pDoc->r, 1000, NULL);
	if (pDoc->flag)
	{
		CBrush brush;
	    int color;
		color = RGB(pDoc->red, pDoc->g, pDoc->b);
		brush.CreateSolidBrush(color);
		CBrush* oldBrush = pDC->SelectObject(&brush);
		pDC -> Ellipse(rect);
		pDC->SelectObject(oldBrush);
	}
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext20View ���

#ifdef _DEBUG
void Ctext20View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext20View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext20Doc* Ctext20View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext20Doc)));
	return (Ctext20Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext20View ��Ϣ�������


void Ctext20View::OnShow()
{
	// TODO: �ڴ���������������
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = 1;
	GetClientRect(&cr);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	CClientDC dc(this);
	CBrush brush;
	int color;
	color = RGB(pDoc->red, pDoc->g, pDoc->b);
	brush.CreateSysColorBrush(color);
	CBrush* oldBrush = dc.SelectObject(&brush);
	dc.Ellipse(rect);
	dc.SelectObject(oldBrush);
}



void Ctext20View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r = pDoc->r + 2;
	pDoc->red = pDoc->red + 32;
	pDoc->g = pDoc->g + 16;
	pDoc->b = pDoc->b + 8;
	if (rect.Width() < cr.Width() && rect.Height() < cr.Height())
		Invalidate();
	CView::OnTimer(nIDEvent);
}
