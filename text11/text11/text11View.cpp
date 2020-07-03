
// text11View.cpp : Ctext11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text11.h"
#endif

#include "text11Doc.h"
#include "text11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext11View

IMPLEMENT_DYNCREATE(Ctext11View, CView)

BEGIN_MESSAGE_MAP(Ctext11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext11View 构造/析构

Ctext11View::Ctext11View()
{
	// TODO: 在此处添加构造代码
	//el.SetSize(256);
}

Ctext11View::~Ctext11View()
{
}

BOOL Ctext11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext11View 绘制

void Ctext11View::OnDraw(CDC* pDC)
{
	Ctext11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0;i < pDoc->el.GetSize();i++)
	{
		pDC->Ellipse(pDoc -> el.GetAt(i));
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext11View 诊断

#ifdef _DEBUG
void Ctext11View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext11Doc* Ctext11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext11Doc)));
	return (Ctext11Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext11View 消息处理程序


void Ctext11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	CRect cr(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	Ctext11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc -> el.Add(cr);
	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
	this->Invalidate();
}
