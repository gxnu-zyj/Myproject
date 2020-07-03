
// text15View.cpp : Ctext15View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text15.h"
#endif

#include "text15Doc.h"
#include "text15View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext15View

IMPLEMENT_DYNCREATE(Ctext15View, CView)

BEGIN_MESSAGE_MAP(Ctext15View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext15View 构造/析构

Ctext15View::Ctext15View()
{
	// TODO: 在此处添加构造代码

}

Ctext15View::~Ctext15View()
{
}

BOOL Ctext15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext15View 绘制

void Ctext15View::OnDraw(CDC* pDC)
{
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext15View 诊断

#ifdef _DEBUG
void Ctext15View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext15Doc* Ctext15View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext15Doc)));
	return (Ctext15Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext15View 消息处理程序


void Ctext15View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetCapture();
	pDoc->a = point.x;
	pDoc->b = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext15View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	ReleaseCapture();
	pDoc->c = point.x;
	pDoc->d = point.y;
	CClientDC pen(this);
	CRect cr(pDoc->a, pDoc->b, pDoc->c, pDoc->d);
	pen.Rectangle(&cr);
	CView::OnLButtonUp(nFlags, point);
}



void Ctext15View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s, k;
	s.Format(_T("X=%d"), point.x);
	k.Format(_T("Y=%d"), point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, s);
	dc.TextOutW(80, 30, k);
	CView::OnMouseMove(nFlags, point);
}
