
// text16View.cpp : Ctext16View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text16.h"
#endif

#include "text16Doc.h"
#include "text16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext16View

IMPLEMENT_DYNCREATE(Ctext16View, CView)

BEGIN_MESSAGE_MAP(Ctext16View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext16View ����/����

Ctext16View::Ctext16View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext16View::~Ctext16View()
{
}

BOOL Ctext16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext16View ����

void Ctext16View::OnDraw(CDC* /*pDC*/)
{
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext16View ���

#ifdef _DEBUG
void Ctext16View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext16Doc* Ctext16View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext16Doc)));
	return (Ctext16Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext16View ��Ϣ�������


void Ctext16View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->count = 1;
	pDoc->x = point.x;
	pDoc->y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext16View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1,s2;
	CClientDC dc(this);
	pDoc->count = 0;
	pDoc->sum = 0;
	pDoc->sum = point.x - pDoc->x;
	s1.Format(_T("ˮƽ�ƶ��������ǣ�%d"), pDoc -> sum);
	s2.Format(_T("��ʼλ�ú�ĩλ�õĺ�����ֱ��ǣ�x=%d , x1=%d"), pDoc->x, point.x);
	dc.TextOutW(20, 20, s1);
	dc.TextOutW(40, 40, s2);
	CView::OnLButtonUp(nFlags, point);
}


void Ctext16View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s,str;
	if (pDoc->count)
		pDoc->count=pDoc->count+1;
	//int avg;
	//avg = pDoc->sum / pDoc->count;
	s.Format(_T("�ƶ������ǣ� %d"), pDoc->count);
	//str.Format(_T("ƽ��ˮƽ�ƶ�����Ϊ��%d"), avg);
	CClientDC dc(this);
	dc.TextOutW(60, 60, s);
	//dc.TextOutW(80, 80, str);
	CView::OnMouseMove(nFlags, point);
}
