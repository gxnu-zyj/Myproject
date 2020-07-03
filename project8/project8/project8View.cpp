
// project8View.cpp : Cproject8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project8.h"
#endif

#include "project8Doc.h"
#include "project8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject8View

IMPLEMENT_DYNCREATE(Cproject8View, CView)

BEGIN_MESSAGE_MAP(Cproject8View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cproject8View ����/����

Cproject8View::Cproject8View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject8View::~Cproject8View()
{
}

BOOL Cproject8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject8View ����

void Cproject8View::OnDraw(CDC* pDC)
{
	Cproject8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->MoveTo(30, 30);
	pDC->LineTo(pDoc->m_point);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject8View ���

#ifdef _DEBUG
void Cproject8View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject8Doc* Cproject8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject8Doc)));
	return (Cproject8Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject8View ��Ϣ�������


void Cproject8View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cproject8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_point = point;
	InvalidateRect(NULL, FALSE );
	CView::OnMouseMove(nFlags, point);
}
