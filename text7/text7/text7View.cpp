
// text7View.cpp : Ctext7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text7.h"
#endif

#include "text7Doc.h"
#include "text7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext7View

IMPLEMENT_DYNCREATE(Ctext7View, CView)

BEGIN_MESSAGE_MAP(Ctext7View, CView)
END_MESSAGE_MAP()

// Ctext7View ����/����

Ctext7View::Ctext7View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext7View::~Ctext7View()
{
}

BOOL Ctext7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext7View ����

void Ctext7View::OnDraw(CDC* pDC)
{
	Ctext7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString str;
	str = "����һ��ѧ��";
	int num = 99;
	CString s1;
	s1.Format(_T("%d"), num);
	pDC->TextOutW(20,20,str);
	pDC->TextOutW(20, 50, s1);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext7View ���

#ifdef _DEBUG
void Ctext7View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext7Doc* Ctext7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext7Doc)));
	return (Ctext7Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext7View ��Ϣ�������
