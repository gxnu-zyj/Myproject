
// text23View.cpp : Ctext23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text23.h"
#endif

#include "text23Doc.h"
#include "text23View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext23View

IMPLEMENT_DYNCREATE(Ctext23View, CView)

BEGIN_MESSAGE_MAP(Ctext23View, CView)
	ON_COMMAND(ID_DrawLine, &Ctext23View::OnDrawline)
	ON_COMMAND(ID_DrawRect, &Ctext23View::OnDrawrect)
	ON_COMMAND(ID_DrawYuan, &Ctext23View::OnDrawyuan)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
//	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext23View 构造/析构

Ctext23View::Ctext23View()
{
	// TODO: 在此处添加构造代码

}

Ctext23View::~Ctext23View()
{
}

BOOL Ctext23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext23View 绘制

void Ctext23View::OnDraw(CDC* pDC )
{
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CRect cr;
	/*if (pDoc->f)
	{
		pDC->MoveTo(pDoc->x, pDoc->y);
		pDC->LineTo(pDoc->xx, pDoc->yy);
		//pDoc->f = 0;
	}
	else if (pDoc->l)
	{
		pDC->Rectangle(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}
	// TODO: 在此处为本机数据添加绘制代码
	else if (pDoc->g)
	{
		pDC->Ellipse(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}*/
}


// Ctext23View 诊断

#ifdef _DEBUG
void Ctext23View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext23Doc* Ctext23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext23Doc)));
	return (Ctext23Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext23View 消息处理程序


void Ctext23View::OnDrawline()
{
	// TODO: 在此添加命令处理程序代码
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 1;
}


void Ctext23View::OnDrawrect()
{
	// TODO: 在此添加命令处理程序代码
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 2;
	
}


void Ctext23View::OnDrawyuan()
{
	// TODO: 在此添加命令处理程序代码
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->f = 3;
	
}


void Ctext23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->x = point.x;
	pDoc->y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->xx = point.x; 
	pDoc->yy = point.y;
	CClientDC dc(this);
	switch (pDoc->f)
	{
	case 1:
	{
        dc.MoveTo(pDoc->x, pDoc->y);
	    dc.LineTo(pDoc->xx, pDoc->yy);
	}
	break;
	case 2:
	{
		dc.Rectangle(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
	}
	break;
	case 3:
		dc.Ellipse(pDoc->x, pDoc->y, pDoc->xx, pDoc->yy);
		break;
	}
	
	CView::OnLButtonUp(nFlags, point);
}
