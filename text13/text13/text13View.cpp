
// text13View.cpp : Ctext13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text13.h"
#endif

#include "text13Doc.h"
#include "text13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext13View

IMPLEMENT_DYNCREATE(Ctext13View, CView)

BEGIN_MESSAGE_MAP(Ctext13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext13View ����/����

Ctext13View::Ctext13View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext13View::~Ctext13View()
{
}

BOOL Ctext13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext13View ����

void Ctext13View::OnDraw(CDC* /*pDC*/)
{
	Ctext13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext13View ���

#ifdef _DEBUG
void Ctext13View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext13Doc* Ctext13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext13Doc)));
	return (Ctext13Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext13View ��Ϣ�������


void Ctext13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	int C;
	Ctext13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	C = pDoc->A + pDoc->B;
	s.Format(_T("A+B=%d"), C);
	CClientDC dc(this);
	dc.TextOutW(20, 20, s);
	CView::OnLButtonDown(nFlags, point);
}
