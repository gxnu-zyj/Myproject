
// project7View.cpp : Cproject7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project7.h"
#endif

#include "project7Doc.h"
#include "project7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject7View

IMPLEMENT_DYNCREATE(Cproject7View, CView)

BEGIN_MESSAGE_MAP(Cproject7View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cproject7View ����/����

Cproject7View::Cproject7View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject7View::~Cproject7View()
{
}

BOOL Cproject7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject7View ����

void Cproject7View::OnDraw(CDC* pDC)
{
	Cproject7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&pDoc -> m_cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject7View ���

#ifdef _DEBUG
void Cproject7View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject7Doc* Cproject7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject7Doc)));
	return (Cproject7Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject7View ��Ϣ�������


void Cproject7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cproject7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (nFlags&MK_SHIFT)
	{
		pDoc->m_cr.left = 20;
		pDoc->m_cr.top = 20;
		pDoc->m_cr.right = 220;
		pDoc->m_cr.bottom = 220;

	}
	else
	{
		pDoc->m_cr.left = point.x;
		pDoc->m_cr.top=point.y;
		pDoc->m_cr.right = point.x+320;
		pDoc->m_cr.bottom=point.y+270;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
