
// project8View.cpp : Cproject8View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project8.h"
#endif

#include "project8Doc.h"
#include "project8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject8View

IMPLEMENT_DYNCREATE(Cproject8View, CView)

BEGIN_MESSAGE_MAP(Cproject8View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cproject8View 构造/析构

Cproject8View::Cproject8View()
{
	// TODO: 在此处添加构造代码

}

Cproject8View::~Cproject8View()
{
}

BOOL Cproject8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject8View 绘制

void Cproject8View::OnDraw(CDC* pDC)
{
	Cproject8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->MoveTo(30, 30);
	pDC->LineTo(pDoc->m_point);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject8View 诊断

#ifdef _DEBUG
void Cproject8View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject8Doc* Cproject8View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject8Doc)));
	return (Cproject8Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject8View 消息处理程序


void Cproject8View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cproject8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_point = point;
	InvalidateRect(NULL, FALSE );
	CView::OnMouseMove(nFlags, point);
}
