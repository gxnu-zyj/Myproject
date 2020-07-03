
// text20View.cpp : Ctext20View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text20.h"
#endif

#include "text20Doc.h"
#include "text20View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext20View

IMPLEMENT_DYNCREATE(Ctext20View, CView)

BEGIN_MESSAGE_MAP(Ctext20View, CView)
	ON_COMMAND(ID_Show, &Ctext20View::OnShow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctext20View 构造/析构

Ctext20View::Ctext20View()
{
	// TODO: 在此处添加构造代码

}

Ctext20View::~Ctext20View()
{
}

BOOL Ctext20View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext20View 绘制

void Ctext20View::OnDraw(CDC* pDC)
{
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	SetTimer(pDoc->r, 1000, NULL);
	if (pDoc->flag)
	{
		CBrush brush;
	    int color;
		color = RGB(pDoc->red, pDoc->g, pDoc->b);
		brush.CreateSolidBrush(color);
		CBrush* oldBrush = pDC->SelectObject(&brush);
		pDC -> Ellipse(rect);
		pDC->SelectObject(oldBrush);
	}
	
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext20View 诊断

#ifdef _DEBUG
void Ctext20View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext20View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext20Doc* Ctext20View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext20Doc)));
	return (Ctext20Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext20View 消息处理程序


void Ctext20View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = 1;
	GetClientRect(&cr);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	CClientDC dc(this);
	CBrush brush;
	int color;
	color = RGB(pDoc->red, pDoc->g, pDoc->b);
	brush.CreateSysColorBrush(color);
	CBrush* oldBrush = dc.SelectObject(&brush);
	dc.Ellipse(rect);
	dc.SelectObject(oldBrush);
}



void Ctext20View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext20Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r = pDoc->r + 2;
	pDoc->red = pDoc->red + 32;
	pDoc->g = pDoc->g + 16;
	pDoc->b = pDoc->b + 8;
	if (rect.Width() < cr.Width() && rect.Height() < cr.Height())
		Invalidate();
	CView::OnTimer(nIDEvent);
}
