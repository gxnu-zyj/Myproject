
// text18View.cpp : Ctext18View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text18.h"
#endif

#include "text18Doc.h"
#include "text18View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext18View

IMPLEMENT_DYNCREATE(Ctext18View, CView)

BEGIN_MESSAGE_MAP(Ctext18View, CView)
END_MESSAGE_MAP()

// Ctext18View ����/����

Ctext18View::Ctext18View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext18View::~Ctext18View()
{
}

BOOL Ctext18View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext18View ����

void Ctext18View::OnDraw(CDC* /*pDC*/)
{
	Ctext18Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext18View ���

#ifdef _DEBUG
void Ctext18View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext18View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext18Doc* Ctext18View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext18Doc)));
	return (Ctext18Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext18View ��Ϣ�������
