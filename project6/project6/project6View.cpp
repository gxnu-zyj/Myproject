
// project6View.cpp : Cproject6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project6.h"
#endif

#include "project6Doc.h"
#include "project6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject6View

IMPLEMENT_DYNCREATE(Cproject6View, CView)

BEGIN_MESSAGE_MAP(Cproject6View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cproject6View ����/����

Cproject6View::Cproject6View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject6View::~Cproject6View()
{
}

BOOL Cproject6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject6View ����

void Cproject6View::OnDraw(CDC* pDC)
{
	Cproject6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject6View ���

#ifdef _DEBUG
void Cproject6View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject6Doc* Cproject6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject6Doc)));
	return (Cproject6Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject6View ��Ϣ�������


void Cproject6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2,0);
	dc.LineTo(rc.right, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
