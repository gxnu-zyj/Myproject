
// project5View.cpp : Cproject5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project5.h"
#endif

#include "project5Doc.h"
#include "project5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject5View

IMPLEMENT_DYNCREATE(Cproject5View, CView)

BEGIN_MESSAGE_MAP(Cproject5View, CView)
END_MESSAGE_MAP()

// Cproject5View ����/����

Cproject5View::Cproject5View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject5View::~Cproject5View()
{
}

BOOL Cproject5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject5View ����

void Cproject5View::OnDraw(CDC* pDC )
{
	Cproject5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect(20, 20, 520, 520);
	pDC->Rectangle(&rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject5View ���

#ifdef _DEBUG
void Cproject5View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject5Doc* Cproject5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject5Doc)));
	return (Cproject5Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject5View ��Ϣ�������
