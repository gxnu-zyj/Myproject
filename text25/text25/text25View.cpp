
// text25View.cpp : Ctext25View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text25.h"
#endif

#include "text25Doc.h"
#include "text25View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext25View

IMPLEMENT_DYNCREATE(Ctext25View, CView)

BEGIN_MESSAGE_MAP(Ctext25View, CView)
END_MESSAGE_MAP()

// Ctext25View ����/����

Ctext25View::Ctext25View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext25View::~Ctext25View()
{
}

BOOL Ctext25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext25View ����

void Ctext25View::OnDraw(CDC* /*pDC*/)
{
	Ctext25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext25View ���

#ifdef _DEBUG
void Ctext25View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext25Doc* Ctext25View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext25Doc)));
	return (Ctext25Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext25View ��Ϣ�������
