
// MFC0View.cpp : CMFC0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0.h"
#endif

#include "MFC0Doc.h"
#include "MFC0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0View

IMPLEMENT_DYNCREATE(CMFC0View, CView)

BEGIN_MESSAGE_MAP(CMFC0View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC0View ����/����

CMFC0View::CMFC0View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	n = 5;
	for (int i = 0;i < n;i++)
	{
		int t;
		t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
	
}

CMFC0View::~CMFC0View()
{
}

BOOL CMFC0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0View ����

void CMFC0View::OnDraw(CDC* pDC )
{
	CMFC0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0;i < n;i++)
		{
			SetTimer(i, rand() % 500 + 21, NULL);
			set = false;
		}
	}
	for (int i = 0;i < n;i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0View ���

#ifdef _DEBUG
void CMFC0View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0Doc* CMFC0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0Doc)));
	return (CMFC0Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0View ��Ϣ�������


void CMFC0View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	CRect crect;
	GetClientRect(&crect);
	if (crect.bottom > cr[i].bottom)
	{
        cr[i].bottom += 10;
	    cr[i].top += 10;
	}
	else
	{
		cr[i].bottom -= 15;
		cr[i].top -= 15;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
