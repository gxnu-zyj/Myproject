
// text8View.cpp : Ctext8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text8.h"
#endif

#include "text8Doc.h"
#include "text8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext8View

IMPLEMENT_DYNCREATE(Ctext8View, CView)

BEGIN_MESSAGE_MAP(Ctext8View, CView)
END_MESSAGE_MAP()

// Ctext8View ����/����

Ctext8View::Ctext8View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext8View::~Ctext8View()
{
}

BOOL Ctext8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext8View ����

void Ctext8View::OnDraw(CDC* pDC )
{
	Ctext8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("%d"), pDoc->x);
	pDC ->TextOutW(200,200,pDoc->str);
	pDC->TextOutW(200, 220, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext8View ���

#ifdef _DEBUG
void Ctext8View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext8Doc* Ctext8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext8Doc)));
	return (Ctext8Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext8View ��Ϣ�������
