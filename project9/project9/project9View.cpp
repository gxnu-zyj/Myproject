
// project9View.cpp : Cproject9View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project9.h"
#endif

#include "project9Doc.h"
#include "project9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject9View

IMPLEMENT_DYNCREATE(Cproject9View, CView)

BEGIN_MESSAGE_MAP(Cproject9View, CView)
END_MESSAGE_MAP()

// Cproject9View ����/����

Cproject9View::Cproject9View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject9View::~Cproject9View()
{
}

BOOL Cproject9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject9View ����

void Cproject9View::OnDraw(CDC* /*pDC*/)
{
	Cproject9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject9View ���

#ifdef _DEBUG
void Cproject9View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject9Doc* Cproject9View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject9Doc)));
	return (Cproject9Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject9View ��Ϣ�������
