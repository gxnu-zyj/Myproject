
// text10View.cpp : Ctext10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text10.h"
#endif

#include "text10Doc.h"
#include "text10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext10View

IMPLEMENT_DYNCREATE(Ctext10View, CView)

BEGIN_MESSAGE_MAP(Ctext10View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext10View 构造/析构

Ctext10View::Ctext10View()
{
	// TODO: 在此处添加构造代码

}

Ctext10View::~Ctext10View()
{
}

BOOL Ctext10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext10View 绘制

void Ctext10View::OnDraw(CDC* pDC)
{
	Ctext10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	//Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext10View 诊断

#ifdef _DEBUG
void Ctext10View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext10Doc* Ctext10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext10Doc)));
	return (Ctext10Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext10View 消息处理程序


void Ctext10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	CView::OnLButtonDown(nFlags, point);
	//this->Invalidate();
}
