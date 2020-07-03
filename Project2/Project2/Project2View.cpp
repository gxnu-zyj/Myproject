
// Project2View.cpp : CProject2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Project2.h"
#endif

#include "Project2Doc.h"
#include "Project2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2View

IMPLEMENT_DYNCREATE(CProject2View, CView)

BEGIN_MESSAGE_MAP(CProject2View, CView)
END_MESSAGE_MAP()

// CProject2View 构造/析构

CProject2View::CProject2View()
{
	// TODO: 在此处添加构造代码

}

CProject2View::~CProject2View()
{
}

BOOL CProject2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CProject2View 绘制

void CProject2View::OnDraw(CDC *pDC)
{
	CProject2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(520, 520, pDoc -> s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CProject2View 诊断

#ifdef _DEBUG
void CProject2View::AssertValid() const
{
	CView::AssertValid();
}

void CProject2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2Doc* CProject2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2Doc)));
	return (CProject2Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject2View 消息处理程序
