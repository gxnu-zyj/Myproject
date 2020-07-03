
// text19View.cpp : Ctext19View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text19.h"
#endif

#include "text19Doc.h"
#include "text19View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext19View

IMPLEMENT_DYNCREATE(Ctext19View, CView)

BEGIN_MESSAGE_MAP(Ctext19View, CView)
	ON_COMMAND(ID_OnShow, &Ctext19View::OnOnshow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctext19View ����/����

Ctext19View::Ctext19View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext19View::~Ctext19View()
{
}

BOOL Ctext19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext19View ����

void Ctext19View::OnDraw(CDC* pDC)
{
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr);
	CClientDC dc(this);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	if (pDoc->flag)
	{
		SetTimer(pDoc->r, 1000, NULL);
		dc.Ellipse(rect);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext19View ���

#ifdef _DEBUG
void Ctext19View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext19Doc* Ctext19View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext19Doc)));
	return (Ctext19Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext19View ��Ϣ�������


void Ctext19View::OnOnshow()
{
	// TODO: �ڴ���������������
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = 1;
	Invalidate();
}


void Ctext19View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r = pDoc->r + 1;
	if (rect.Width() < cr.Width() && rect.Height() < cr.Height())
		Invalidate();
	CView::OnTimer(nIDEvent);
}
