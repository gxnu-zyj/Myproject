
// text17View.cpp : Ctext17View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text17.h"
#endif

#include "text17Doc.h"
#include "text17View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext17View

IMPLEMENT_DYNCREATE(Ctext17View, CView)

BEGIN_MESSAGE_MAP(Ctext17View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext17View 构造/析构

Ctext17View::Ctext17View()
{
	// TODO: 在此处添加构造代码

}

Ctext17View::~Ctext17View()
{
}

BOOL Ctext17View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext17View 绘制

void Ctext17View::OnDraw(CDC* pDC)
{
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&pDoc->m_cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext17View 诊断

#ifdef _DEBUG
void Ctext17View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext17View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext17Doc* Ctext17View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext17Doc)));
	return (Ctext17Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext17View 消息处理程序


void Ctext17View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_cr.left > 0)
		{
			pDoc->m_cr.left = pDoc->m_cr.left - 5;
			pDoc->m_cr.right = pDoc->m_cr.right - 5;
		}
		break;
	case VK_RIGHT:
		if(pDoc->m_cr.right<=(cr.right-cr.left))
	{
			pDoc->m_cr.left = pDoc->m_cr.left + 5;
			pDoc->m_cr.right = pDoc->m_cr.right + 5;
	}
		break;
	case VK_UP:
		if (pDoc->m_cr.top > 0)
		{
			pDoc->m_cr.top = pDoc->m_cr.top - 5;
			pDoc->m_cr.bottom = pDoc->m_cr.bottom - 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_cr.bottom <= (cr.bottom - cr.top))
		{
			pDoc->m_cr.top = pDoc->m_cr.top + 5;
			pDoc->m_cr.bottom = pDoc->m_cr.bottom + 5;
		}
	case VK_HOME:
		if (pDoc->m_cr.left > 0 & pDoc->m_cr.top > 0)
		{
			pDoc->m_cr.top = pDoc->m_cr.top - 5;
			pDoc->m_cr.left = pDoc->m_cr.left - 5;
		}
	case VK_END:
		if (pDoc->m_cr.bottom <= (cr.bottom - cr.top)&pDoc->m_cr.right <= (cr.right - cr.left))
		{
			pDoc->m_cr.top = pDoc->m_cr.top + 5;
			pDoc->m_cr.left = pDoc->m_cr.left + 5;
		}
	//default:
		break;
		
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ctext17View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext17Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->m_cr.left = 30;
	pDoc->m_cr.top = 30;
	pDoc->m_cr.right = 180;
	pDoc->m_cr.bottom = 180;
	CView::OnLButtonDown(nFlags, point);
	InvalidateRect(NULL, TRUE);
}
