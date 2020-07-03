
// text6View.cpp : Ctext6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text6.h"
#endif

#include "text6Doc.h"
#include "text6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#define COLOR_RED 30

// Ctext6View

IMPLEMENT_DYNCREATE(Ctext6View, CView)

BEGIN_MESSAGE_MAP(Ctext6View, CView)
END_MESSAGE_MAP()

// Ctext6View ����/����

Ctext6View::Ctext6View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext6View::~Ctext6View()
{
}

BOOL Ctext6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext6View ����

void Ctext6View::OnDraw(CDC* pDC )
{
	Ctext6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	CBrush brush;
	brush.CreateSysColorBrush(COLOR_RED);
		CBrush* oldBrush = pDC->SelectObject(&brush);
		pDC -> Ellipse(cr);
		pDC->SelectObject(oldBrush);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext6View ���

#ifdef _DEBUG
void Ctext6View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext6Doc* Ctext6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext6Doc)));
	return (Ctext6Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext6View ��Ϣ�������
