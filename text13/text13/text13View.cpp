
// text13View.cpp : Ctext13View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text13.h"
#endif

#include "text13Doc.h"
#include "text13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext13View

IMPLEMENT_DYNCREATE(Ctext13View, CView)

BEGIN_MESSAGE_MAP(Ctext13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext13View 构造/析构

Ctext13View::Ctext13View()
{
	// TODO: 在此处添加构造代码

}

Ctext13View::~Ctext13View()
{
}

BOOL Ctext13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext13View 绘制

void Ctext13View::OnDraw(CDC* /*pDC*/)
{
	Ctext13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext13View 诊断

#ifdef _DEBUG
void Ctext13View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext13Doc* Ctext13View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext13Doc)));
	return (Ctext13Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext13View 消息处理程序


void Ctext13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	int C;
	Ctext13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	C = pDoc->A + pDoc->B;
	s.Format(_T("A+B=%d"), C);
	CClientDC dc(this);
	dc.TextOutW(20, 20, s);
	CView::OnLButtonDown(nFlags, point);
}
