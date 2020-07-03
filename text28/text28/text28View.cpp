
// text28View.cpp : Ctext28View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text28.h"
#endif

#include "text28Doc.h"
#include "text28View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext28View

IMPLEMENT_DYNCREATE(Ctext28View, CView)

BEGIN_MESSAGE_MAP(Ctext28View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Ctext28View 构造/析构

Ctext28View::Ctext28View()
{
	// TODO: 在此处添加构造代码
	cr.left = 100;
	cr.top = 100;
	cr.right = 1000;
	cr.bottom = 520;
	point.x = cr.left + 5;
	point.y = cr.top + 25;
}

Ctext28View::~Ctext28View()
{
}

BOOL Ctext28View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext28View 绘制

void Ctext28View::OnDraw(CDC* pDC)
{
	Ctext28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext28View 诊断

#ifdef _DEBUG
void Ctext28View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext28View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext28Doc* Ctext28View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext28Doc)));
	return (Ctext28Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext28View 消息处理程序


void Ctext28View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (point.x >= cr.right - 5)
	{
		point.x = cr.left + 5;
		point.y = point.y + 25;
	}
	else if (point.y + 25 >= cr.bottom - 5) {
		dc.TextOutW(520, 520, _T("超出范围，请重新启动！"));
	}
	else {
		dc.TextOutW(point.x, point.y, (LPCTSTR)&nChar);
		CSize size;
		size = dc.GetTextExtent((LPCTSTR)&nChar);
		point.x = point.x + size.cx;
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
