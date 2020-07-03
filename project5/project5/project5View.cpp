
// project5View.cpp : Cproject5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project5.h"
#endif

#include "project5Doc.h"
#include "project5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject5View

IMPLEMENT_DYNCREATE(Cproject5View, CView)

BEGIN_MESSAGE_MAP(Cproject5View, CView)
END_MESSAGE_MAP()

// Cproject5View 构造/析构

Cproject5View::Cproject5View()
{
	// TODO: 在此处添加构造代码

}

Cproject5View::~Cproject5View()
{
}

BOOL Cproject5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject5View 绘制

void Cproject5View::OnDraw(CDC* pDC )
{
	Cproject5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect(20, 20, 520, 520);
	pDC->Rectangle(&rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject5View 诊断

#ifdef _DEBUG
void Cproject5View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject5Doc* Cproject5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject5Doc)));
	return (Cproject5Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject5View 消息处理程序
