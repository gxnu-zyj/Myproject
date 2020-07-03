
// text31View.cpp : Ctext31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text31.h"
#endif

#include "text31Doc.h"
#include "text31View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext31View

IMPLEMENT_DYNCREATE(Ctext31View, CView)

BEGIN_MESSAGE_MAP(Ctext31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext31View ����/����

Ctext31View::Ctext31View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 180;
	cr.top = 180;
	cr.right = 260;
	cr.bottom = 260;
	flag = false;
}

Ctext31View::~Ctext31View()
{
}

BOOL Ctext31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext31View ����

void Ctext31View::OnDraw(CDC* pDC)
{
	Ctext31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
         cr.left = p1.x - 40;
	     cr.top = p1.y - 40;
	     cr.right = p1.x + 40;
	     cr.bottom = p1.y + 40;

	if (flag)


		pDC->Rectangle(cr.left, cr.top,cr.right, cr.bottom);

	else
		pDC->Rectangle(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext31View ���

#ifdef _DEBUG
void Ctext31View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext31Doc* Ctext31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext31Doc)));
	return (Ctext31Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext31View ��Ϣ�������


void Ctext31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = true;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = false;
    
	CView::OnLButtonUp(nFlags, point);
}


void Ctext31View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == true)
	{
		if (cr.PtInRect(point))
		{
			p1 = point;
			Invalidate();
		}
	}
	CView::OnMouseMove(nFlags, point);
}
