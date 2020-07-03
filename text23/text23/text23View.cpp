
// text23View.cpp : Ctext23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text23.h"
#endif

#include "text23Doc.h"
#include "text23View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext23View

IMPLEMENT_DYNCREATE(Ctext23View, CView)

BEGIN_MESSAGE_MAP(Ctext23View, CView)
	ON_COMMAND(ID_DrawLine, &Ctext23View::OnDrawline)
	ON_COMMAND(ID_DrawRect, &Ctext23View::OnDrawrect)
	ON_COMMAND(ID_DrawYuan, &Ctext23View::OnDrawyuan)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
//	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext23View ����/����

Ctext23View::Ctext23View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext23View::~Ctext23View()
{
}

BOOL Ctext23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext23View ����

void Ctext23View::OnDraw(CDC* pDC )
{
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CRect cr;
	/*if (pDoc->f)
	{
		pDC->MoveTo(pDoc->x, pDoc->y);
		pDC->LineTo(pDoc->xx, pDoc->yy);
		//pDoc->f = 0;
	}
	else if (pDoc->l)
	{
		pDC->Rectangle(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	else if (pDoc->g)
	{
		pDC->Ellipse(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}*/
}


// Ctext23View ���

#ifdef _DEBUG
void Ctext23View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext23Doc* Ctext23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext23Doc)));
	return (Ctext23Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext23View ��Ϣ�������


void Ctext23View::OnDrawline()
{
	// TODO: �ڴ���������������
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 1;
}


void Ctext23View::OnDrawrect()
{
	// TODO: �ڴ���������������
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 2;
	
}


void Ctext23View::OnDrawyuan()
{
	// TODO: �ڴ���������������
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 3;
	
}


void Ctext23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x = point.x;
	pDoc->y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->xx = point.x; 
	pDoc->yy = point.y;
	CClientDC dc(this);
	switch (pDoc->f)
	{
	case 1:
	{
        dc.MoveTo(pDoc->x, pDoc->y);
	    dc.LineTo(pDoc->xx, pDoc->yy);
	}
	break;
	case 2:
	{
		dc.Rectangle(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}
	break;
	case 3:
		dc.Ellipse(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
		break;
	}
	
	CView::OnLButtonUp(nFlags, point);
}
