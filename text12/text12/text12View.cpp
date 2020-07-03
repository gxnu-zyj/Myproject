
// text12View.cpp : Ctext12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text12.h"
#endif

#include "text12Doc.h"
#include "text12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext12View

IMPLEMENT_DYNCREATE(Ctext12View, CView)

BEGIN_MESSAGE_MAP(Ctext12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ctext12View 构造/析构

Ctext12View::Ctext12View()
{
	// TODO: 在此处添加构造代码

}

Ctext12View::~Ctext12View()
{
}

BOOL Ctext12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext12View 绘制

void Ctext12View::OnDraw(CDC* /*pDC*/)
{
	Ctext12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext12View 诊断

#ifdef _DEBUG
void Ctext12View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext12Doc* Ctext12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext12Doc)));
	return (Ctext12Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext12View 消息处理程序


void Ctext12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s1;
	s1 = "此时鼠标左键被按下";
	CClientDC dc(this);
	dc.TextOutW(20, 20, s1);
	CView::OnLButtonDown(nFlags, point);
}


void Ctext12View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s2;
	s2 = "此时鼠标左键被抬起";
	CClientDC dc(this);
	dc.TextOutW(20, 20, s2);
	CView::OnLButtonUp(nFlags, point);
}
