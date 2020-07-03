
// text28View.cpp : Ctext28View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text28.h"
#endif

#include "text28Doc.h"
#include "text28View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext28View

IMPLEMENT_DYNCREATE(Ctext28View, CView)

BEGIN_MESSAGE_MAP(Ctext28View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctext28View ����/����

Ctext28View::Ctext28View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 100;
	cr.right = 1000;
	cr.bottom = 520;
	point.x = cr.left + 5;
	point.y = cr.top + 25;
}

Ctext28View::~Ctext28View()
{
}

BOOL Ctext28View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext28View ����

void Ctext28View::OnDraw(CDC* pDC)
{
	Ctext28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext28View ���

#ifdef _DEBUG
void Ctext28View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext28View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext28Doc* Ctext28View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext28Doc)));
	return (Ctext28Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext28View ��Ϣ�������


void Ctext28View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (point.x >= cr.right - 5)
	{
		point.x = cr.left + 5;
		point.y = point.y + 25;
	}
	else if (point.y + 25 >= cr.bottom - 5) {
		dc.TextOutW(520, 520, _T("������Χ��������������"));
	}
	else {
		dc.TextOutW(point.x, point.y, (LPCTSTR)&nChar);
		CSize size;
		size = dc.GetTextExtent((LPCTSTR)&nChar);
		point.x = point.x + size.cx;
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
