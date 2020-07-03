
// text17View.cpp : Ctext17View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text17.h"
#endif

#include "text17Doc.h"
#include "text17View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext17View

IMPLEMENT_DYNCREATE(Ctext17View, CView)

BEGIN_MESSAGE_MAP(Ctext17View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext17View ����/����

Ctext17View::Ctext17View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext17View::~Ctext17View()
{
}

BOOL Ctext17View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext17View ����

void Ctext17View::OnDraw(CDC* pDC)
{
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&pDoc->m_cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext17View ���

#ifdef _DEBUG
void Ctext17View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext17View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext17Doc* Ctext17View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext17Doc)));
	return (Ctext17Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext17View ��Ϣ�������


void Ctext17View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_cr.left > 0)
		{
			pDoc->m_cr.left = pDoc->m_cr.left - 5;
			pDoc->m_cr.right = pDoc->m_cr.right - 5;
		}
		break;
	case VK_RIGHT:
		if(pDoc->m_cr.right<=(cr.right-cr.left))
	{
			pDoc->m_cr.left = pDoc->m_cr.left + 5;
			pDoc->m_cr.right = pDoc->m_cr.right + 5;
	}
		break;
	case VK_UP:
		if (pDoc->m_cr.top > 0)
		{
			pDoc->m_cr.top = pDoc->m_cr.top - 5;
			pDoc->m_cr.bottom = pDoc->m_cr.bottom - 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_cr.bottom <= (cr.bottom - cr.top))
		{
			pDoc->m_cr.top = pDoc->m_cr.top + 5;
			pDoc->m_cr.bottom = pDoc->m_cr.bottom + 5;
		}
	case VK_HOME:
		if (pDoc->m_cr.left > 0 & pDoc->m_cr.top > 0)
		{
			pDoc->m_cr.top = pDoc->m_cr.top - 5;
			pDoc->m_cr.left = pDoc->m_cr.left - 5;
		}
	case VK_END:
		if (pDoc->m_cr.bottom <= (cr.bottom - cr.top)&pDoc->m_cr.right <= (cr.right - cr.left))
		{
			pDoc->m_cr.top = pDoc->m_cr.top + 5;
			pDoc->m_cr.left = pDoc->m_cr.left + 5;
		}
	//default:
		break;
		
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ctext17View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_cr.left = 30;
	pDoc->m_cr.top = 30;
	pDoc->m_cr.right = 180;
	pDoc->m_cr.bottom = 180;
	CView::OnLButtonDown(nFlags, point);
	InvalidateRect(NULL, TRUE);
}
