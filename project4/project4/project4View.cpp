
// project4View.cpp : Cproject4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project4.h"
#endif

#include "project4Doc.h"
#include "project4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject4View

IMPLEMENT_DYNCREATE(Cproject4View, CView)

BEGIN_MESSAGE_MAP(Cproject4View, CView)
END_MESSAGE_MAP()

// Cproject4View ����/����

Cproject4View::Cproject4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject4View::~Cproject4View()
{
}

BOOL Cproject4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject4View ����

void Cproject4View::OnDraw(CDC* pDC) 
{
	Cproject4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int red = 0 , blue = 0 , green = 0 ;
	int width = 2;
	int row = 20;
	for (int i = 0;i < 8; i++)
	{
		int color = RGB( red, green , blue );
		CPen newPen (PS_SOLID, width, color);
		CPen *oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20, row);
		pDC->LineTo(300, row);
		red += 5;
		green += 20;
		blue += 21;
		width += 1;
		row += 20;
	}

}


// Cproject4View ���

#ifdef _DEBUG
void Cproject4View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject4Doc* Cproject4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject4Doc)));
	return (Cproject4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject4View ��Ϣ�������
