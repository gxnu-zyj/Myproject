
// text14View.cpp : Ctext14View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text14.h"
#endif

#include "text14Doc.h"
#include "text14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext14View

IMPLEMENT_DYNCREATE(Ctext14View, CView)

BEGIN_MESSAGE_MAP(Ctext14View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext14View 构造/析构

Ctext14View::Ctext14View()
{
	// TODO: 在此处添加构造代码

}

Ctext14View::~Ctext14View()
{
}

BOOL Ctext14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext14View 绘制

void Ctext14View::OnDraw(CDC* pDC)
{
	Ctext14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext14View 诊断

#ifdef _DEBUG
void Ctext14View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext14Doc* Ctext14View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext14Doc)));
	return (Ctext14Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext14View 消息处理程序


void Ctext14View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1, s2, s3,s;
	s = _T("wuxiao");
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s3.Format(_T("%d"), pDoc->c);
	CClientDC dc(this);
	if (pDoc->A.PtInRect(point))
		dc.TextOutW(250, 50, s1);
	else if (pDoc->B.PtInRect(point))
		dc.TextOutW(210, 220, s2);
	else if (pDoc->C.PtInRect(point))
		dc.TextOutW(110, 125, s3);
	else
		dc.TextOutW(250, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
