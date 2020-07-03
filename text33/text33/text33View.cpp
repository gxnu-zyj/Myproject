
// text33View.cpp : Ctext33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctext33View 构造/析构

Ctext33View::Ctext33View()
{
	// TODO: 在此处添加构造代码
	set = true;
	flag = 0;
}

Ctext33View::~Ctext33View()
{
}

BOOL Ctext33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext33View 绘制

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
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext33View 诊断

#ifdef _DEBUG
void Ctext33View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext33Doc* Ctext33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext33Doc)));
	return (Ctext33Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext33View 消息处理程序


void Ctext33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//n=0;
	set = true;
	flag = 1;
	n = 0;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext33View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//n = 1;
	set = false;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctext33View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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
