
// text25View.cpp : Ctext25View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text25.h"
#endif

#include "text25Doc.h"
#include "text25View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext25View

IMPLEMENT_DYNCREATE(Ctext25View, CView)

BEGIN_MESSAGE_MAP(Ctext25View, CView)
END_MESSAGE_MAP()

// Ctext25View 构造/析构

Ctext25View::Ctext25View()
{
	// TODO: 在此处添加构造代码

}

Ctext25View::~Ctext25View()
{
}

BOOL Ctext25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext25View 绘制

void Ctext25View::OnDraw(CDC* /*pDC*/)
{
	Ctext25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext25View 诊断

#ifdef _DEBUG
void Ctext25View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext25Doc* Ctext25View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext25Doc)));
	return (Ctext25Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext25View 消息处理程序
