
// text33View.cpp : Ctext33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text33.h"
#endif

#include "text33Doc.h"
#include "text33View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext33View

IMPLEMENT_DYNCREATE(Ctext33View, CView)

BEGIN_MESSAGE_MAP(Ctext33View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctext33View ����/����

Ctext33View::Ctext33View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	flag = 0;
}

Ctext33View::~Ctext33View()
{
}

BOOL Ctext33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext33View ����

void Ctext33View::OnDraw(CDC* pDC)
{
	Ctext33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 0)
	{
		GetClientRect(&cr);
	rect.left = cr.left;
	rect.top = (cr.bottom - cr.top) / 2 - 20;
	rect.right = cr.left + 40;
	rect.bottom = (cr.bottom - cr.top) / 2 + 20;
	}
	
	if (set)
	{
		SetTimer(1, 500, NULL);
		//set = false;
	}
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext33View ���

#ifdef _DEBUG
void Ctext33View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext33Doc* Ctext33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext33Doc)));
	return (Ctext33Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext33View ��Ϣ�������


void Ctext33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//n=0;
	set = true;
	flag = 1;
	n = 0;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext33View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//n = 1;
	set = false;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctext33View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//i = nIDEvent;
	CClientDC dc(this);

	GetClientRect(&cr);
	if (set)
	{
		if (rect.right < cr.right&&n == 0)
		{
         rect.left += 50;
		 rect.right += 50;
	}
		else if(cr.left<=rect.left)
		
		{
			rect.left -= 50;
		    rect.right -= 50;
			n = 1;
			//set = false;
		}	
		else
		{
			n = 0;
		}
	}
	else 
	{
		rect.left += 0;
		rect.right += 0;
		rect.left -= 0;
		rect.right -= 0;
		
	}
Invalidate();
	
	CView::OnTimer(nIDEvent);
}
