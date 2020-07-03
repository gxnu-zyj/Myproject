
// project3View.cpp : Cproject3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project3.h"
#endif

#include "project3Doc.h"
#include "project3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject3View

IMPLEMENT_DYNCREATE(Cproject3View, CView)

BEGIN_MESSAGE_MAP(Cproject3View, CView)
END_MESSAGE_MAP()

// Cproject3View 构造/析构

Cproject3View::Cproject3View()
{
	// TODO: 在此处添加构造代码

}

Cproject3View::~Cproject3View()
{
}

BOOL Cproject3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject3View 绘制

void Cproject3View::OnDraw(CDC* pDC )
{
	Cproject3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int shownum = pDoc->num;
	CString s;
	s.Format(_T("%d"), shownum);
	pDC->TextOutW(20, 20, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject3View 诊断

#ifdef _DEBUG
void Cproject3View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject3Doc* Cproject3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject3Doc)));
	return (Cproject3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject3View 消息处理程序
