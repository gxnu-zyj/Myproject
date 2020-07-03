
// text26View.cpp : Ctext26View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text26.h"
#endif

#include "text26Doc.h"
#include "text26View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext26View

IMPLEMENT_DYNCREATE(Ctext26View, CView)

BEGIN_MESSAGE_MAP(Ctext26View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctext26View ����/����

Ctext26View::Ctext26View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 100;
	cr.right = 1000;
	cr.bottom = 520;
	point.x = cr.left + 5;
	point.y = cr.top + 25;
}

Ctext26View::~Ctext26View()
{
}

BOOL Ctext26View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext26View ����

void Ctext26View::OnDraw(CDC* pDC )
{
	Ctext26Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext26View ���

#ifdef _DEBUG
void Ctext26View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext26View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext26Doc* Ctext26View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext26Doc)));
	return (Ctext26Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext26View ��Ϣ�������


void Ctext26View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (point.x >= cr.right - 5)
	{
		point.x = cr.left + 5;
		point.y = point.y + 25;
	}
	else if(point.y+25>=cr.bottom-5){
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
