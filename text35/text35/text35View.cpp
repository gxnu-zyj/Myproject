
// text35View.cpp : Ctext35View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text35.h"
#endif

#include "text35Doc.h"
#include "text35View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext35View

IMPLEMENT_DYNCREATE(Ctext35View, CView)

BEGIN_MESSAGE_MAP(Ctext35View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctext35View::OnFileOpen)
//	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctext35View ����/����

Ctext35View::Ctext35View()
{
	// TODO: �ڴ˴���ӹ������
	flag = false;
}

Ctext35View::~Ctext35View()
{
}

BOOL Ctext35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext35View ����

void Ctext35View::OnDraw(CDC* /*pDC*/)
{
	Ctext35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext35View ���

#ifdef _DEBUG
void Ctext35View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext35Doc* Ctext35View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext35Doc)));
	return (Ctext35Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext35View ��Ϣ�������


void Ctext35View::OnFileOpen()
{
	// TODO: �ڴ���������������
	
       CFileDialog cfd(true);
	   int k = cfd.DoModal();
	   CClientDC dc(this);
	   if (k == IDOK)
	    {
	    	str = cfd.GetPathName();
		    dc.TextOutW(20, 20, str);
	    }
	
}


//void Ctext35View::OnLButtonDblClk(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	flag = true;
//	CView::OnLButtonDblClk(nFlags, point);
//}
