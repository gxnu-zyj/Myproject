
// project7View.cpp : Cproject7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project7.h"
#endif

#include "project7Doc.h"
#include "project7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject7View

IMPLEMENT_DYNCREATE(Cproject7View, CView)

BEGIN_MESSAGE_MAP(Cproject7View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cproject7View 构造/析构

Cproject7View::Cproject7View()
{
	// TODO: 在此处添加构造代码

}

Cproject7View::~Cproject7View()
{
}

BOOL Cproject7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject7View 绘制

void Cproject7View::OnDraw(CDC* pDC)
{
	Cproject7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&pDoc -> m_cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject7View 诊断

#ifdef _DEBUG
void Cproject7View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject7Doc* Cproject7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject7Doc)));
	return (Cproject7Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject7View 消息处理程序


void Cproject7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cproject7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (nFlags&MK_SHIFT)
	{
		pDoc->m_cr.left = 20;
		pDoc->m_cr.top = 20;
		pDoc->m_cr.right = 220;
		pDoc->m_cr.bottom = 220;

	}
	else
	{
		pDoc->m_cr.left = point.x;
		pDoc->m_cr.top=point.y;
		pDoc->m_cr.right = point.x+320;
		pDoc->m_cr.bottom=point.y+270;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
