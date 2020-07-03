
// project6View.cpp : Cproject6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project6.h"
#endif

#include "project6Doc.h"
#include "project6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject6View

IMPLEMENT_DYNCREATE(Cproject6View, CView)

BEGIN_MESSAGE_MAP(Cproject6View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cproject6View 构造/析构

Cproject6View::Cproject6View()
{
	// TODO: 在此处添加构造代码

}

Cproject6View::~Cproject6View()
{
}

BOOL Cproject6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject6View 绘制

void Cproject6View::OnDraw(CDC* pDC)
{
	Cproject6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject6View 诊断

#ifdef _DEBUG
void Cproject6View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject6Doc* Cproject6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject6Doc)));
	return (Cproject6Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject6View 消息处理程序


void Cproject6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2,0);
	dc.LineTo(rc.right, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
