
// text19View.cpp : Ctext19View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text19.h"
#endif

#include "text19Doc.h"
#include "text19View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext19View

IMPLEMENT_DYNCREATE(Ctext19View, CView)

BEGIN_MESSAGE_MAP(Ctext19View, CView)
	ON_COMMAND(ID_OnShow, &Ctext19View::OnOnshow)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Ctext19View 构造/析构

Ctext19View::Ctext19View()
{
	// TODO: 在此处添加构造代码

}

Ctext19View::~Ctext19View()
{
}

BOOL Ctext19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext19View 绘制

void Ctext19View::OnDraw(CDC* pDC)
{
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr);
	CClientDC dc(this);
	rect.left = cr.Width() / 2 - pDoc->r;     rect.top = cr.Height() / 2 - pDoc->r;
	rect.right = cr.Width() / 2 + pDoc->r;    rect.bottom = cr.Height() / 2 + pDoc->r;
	if (pDoc->flag)
	{
		SetTimer(pDoc->r, 1000, NULL);
		dc.Ellipse(rect);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext19View 诊断

#ifdef _DEBUG
void Ctext19View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext19Doc* Ctext19View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext19Doc)));
	return (Ctext19Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext19View 消息处理程序


void Ctext19View::OnOnshow()
{
	// TODO: 在此添加命令处理程序代码
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->flag = 1;
	Invalidate();
}


void Ctext19View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->r = pDoc->r + 1;
	if (rect.Width() < cr.Width() && rect.Height() < cr.Height())
		Invalidate();
	CView::OnTimer(nIDEvent);
}
