
// project9View.cpp : Cproject9View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project9.h"
#endif

#include "project9Doc.h"
#include "project9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject9View

IMPLEMENT_DYNCREATE(Cproject9View, CView)

BEGIN_MESSAGE_MAP(Cproject9View, CView)
END_MESSAGE_MAP()

// Cproject9View 构造/析构

Cproject9View::Cproject9View()
{
	// TODO: 在此处添加构造代码

}

Cproject9View::~Cproject9View()
{
}

BOOL Cproject9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject9View 绘制

void Cproject9View::OnDraw(CDC* /*pDC*/)
{
	Cproject9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject9View 诊断

#ifdef _DEBUG
void Cproject9View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject9Doc* Cproject9View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject9Doc)));
	return (Cproject9Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject9View 消息处理程序
