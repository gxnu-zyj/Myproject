
// text22View.cpp : Ctext22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text22.h"
#endif

#include "text22Doc.h"
#include "text22View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext22View

IMPLEMENT_DYNCREATE(Ctext22View, CView)

BEGIN_MESSAGE_MAP(Ctext22View, CView)
END_MESSAGE_MAP()

// Ctext22View ����/����

Ctext22View::Ctext22View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

Ctext22View::~Ctext22View()
{
}

BOOL Ctext22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext22View ����

void Ctext22View::OnDraw(CDC* pDC )
{
	Ctext22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight,&MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext22View ���

#ifdef _DEBUG
void Ctext22View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext22Doc* Ctext22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext22Doc)));
	return (Ctext22Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext22View ��Ϣ�������
