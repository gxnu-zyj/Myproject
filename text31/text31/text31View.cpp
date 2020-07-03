
// text31View.cpp : Ctext31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text31.h"
#endif

#include "text31Doc.h"
#include "text31View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext31View

IMPLEMENT_DYNCREATE(Ctext31View, CView)

BEGIN_MESSAGE_MAP(Ctext31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext31View 构造/析构

Ctext31View::Ctext31View()
{
	// TODO: 在此处添加构造代码
	cr.left = 180;
	cr.top = 180;
	cr.right = 260;
	cr.bottom = 260;
	flag = false;
}

Ctext31View::~Ctext31View()
{
}

BOOL Ctext31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext31View 绘制

void Ctext31View::OnDraw(CDC* pDC)
{
	Ctext31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
         cr.left = p1.x - 40;
	     cr.top = p1.y - 40;
	     cr.right = p1.x + 40;
	     cr.bottom = p1.y + 40;

	if (flag)


		pDC->Rectangle(cr.left, cr.top,cr.right, cr.bottom);

	else
		pDC->Rectangle(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext31View 诊断

#ifdef _DEBUG
void Ctext31View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext31Doc* Ctext31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext31Doc)));
	return (Ctext31Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext31View 消息处理程序


void Ctext31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = true;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = false;
    
	CView::OnLButtonUp(nFlags, point);
}


void Ctext31View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == true)
	{
		if (cr.PtInRect(point))
		{
			p1 = point;
			Invalidate();
		}
	}
	CView::OnMouseMove(nFlags, point);
}
