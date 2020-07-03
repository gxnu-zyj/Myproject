
// Project1View.cpp : CProject1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Project1.h"
#endif

#include "Project1Doc.h"
#include "Project1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject1View

IMPLEMENT_DYNCREATE(CProject1View, CView)

BEGIN_MESSAGE_MAP(CProject1View, CView)
END_MESSAGE_MAP()

// CProject1View 构造/析构

CProject1View::CProject1View()
{
	// TODO: 在此处添加构造代码

}

CProject1View::~CProject1View()
{
}

BOOL CProject1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CProject1View 绘制

void CProject1View::OnDraw(CDC* /*pDC*/)
{
	CProject1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s = "Hello world!";
	CClientDC dl(this);
	dl.TextOutW(220, 300, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CProject1View 诊断

#ifdef _DEBUG
void CProject1View::AssertValid() const
{
	CView::AssertValid();
}

void CProject1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject1Doc* CProject1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject1Doc)));
	return (CProject1Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject1View 消息处理程序
