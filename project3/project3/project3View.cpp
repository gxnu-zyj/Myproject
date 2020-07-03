
// project3View.cpp : Cproject3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project3.h"
#endif

#include "project3Doc.h"
#include "project3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject3View

IMPLEMENT_DYNCREATE(Cproject3View, CView)

BEGIN_MESSAGE_MAP(Cproject3View, CView)
END_MESSAGE_MAP()

// Cproject3View ����/����

Cproject3View::Cproject3View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject3View::~Cproject3View()
{
}

BOOL Cproject3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject3View ����

void Cproject3View::OnDraw(CDC* pDC )
{
	Cproject3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int shownum = pDoc->num;
	CString s;
	s.Format(_T("%d"), shownum);
	pDC->TextOutW(20, 20, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject3View ���

#ifdef _DEBUG
void Cproject3View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject3Doc* Cproject3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject3Doc)));
	return (Cproject3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject3View ��Ϣ�������
