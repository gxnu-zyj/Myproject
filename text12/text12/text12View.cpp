
// text12View.cpp : Ctext12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text12.h"
#endif

#include "text12Doc.h"
#include "text12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext12View

IMPLEMENT_DYNCREATE(Ctext12View, CView)

BEGIN_MESSAGE_MAP(Ctext12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctext12View ����/����

Ctext12View::Ctext12View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext12View::~Ctext12View()
{
}

BOOL Ctext12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext12View ����

void Ctext12View::OnDraw(CDC* /*pDC*/)
{
	Ctext12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext12View ���

#ifdef _DEBUG
void Ctext12View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext12Doc* Ctext12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext12Doc)));
	return (Ctext12Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext12View ��Ϣ�������


void Ctext12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s1;
	s1 = "��ʱ������������";
	CClientDC dc(this);
	dc.TextOutW(20, 20, s1);
	CView::OnLButtonDown(nFlags, point);
}


void Ctext12View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s2;
	s2 = "��ʱ��������̧��";
	CClientDC dc(this);
	dc.TextOutW(20, 20, s2);
	CView::OnLButtonUp(nFlags, point);
}
