
// text10View.cpp : Ctext10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text10.h"
#endif

#include "text10Doc.h"
#include "text10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext10View

IMPLEMENT_DYNCREATE(Ctext10View, CView)

BEGIN_MESSAGE_MAP(Ctext10View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext10View ����/����

Ctext10View::Ctext10View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext10View::~Ctext10View()
{
}

BOOL Ctext10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext10View ����

void Ctext10View::OnDraw(CDC* pDC)
{
	Ctext10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	//Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext10View ���

#ifdef _DEBUG
void Ctext10View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext10Doc* Ctext10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext10Doc)));
	return (Ctext10Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext10View ��Ϣ�������


void Ctext10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CView::OnLButtonDown(nFlags, point);
	//this->Invalidate();
}
