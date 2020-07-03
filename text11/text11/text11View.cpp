
// text11View.cpp : Ctext11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text11.h"
#endif

#include "text11Doc.h"
#include "text11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext11View

IMPLEMENT_DYNCREATE(Ctext11View, CView)

BEGIN_MESSAGE_MAP(Ctext11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext11View ����/����

Ctext11View::Ctext11View()
{
	// TODO: �ڴ˴���ӹ������
	//el.SetSize(256);
}

Ctext11View::~Ctext11View()
{
}

BOOL Ctext11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext11View ����

void Ctext11View::OnDraw(CDC* pDC)
{
	Ctext11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0;i < pDoc->el.GetSize();i++)
	{
		pDC->Ellipse(pDoc -> el.GetAt(i));
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext11View ���

#ifdef _DEBUG
void Ctext11View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext11Doc* Ctext11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext11Doc)));
	return (Ctext11Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext11View ��Ϣ�������


void Ctext11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	CRect cr(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	Ctext11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc -> el.Add(cr);
	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
	this->Invalidate();
}
