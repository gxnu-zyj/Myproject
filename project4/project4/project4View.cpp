
// project4View.cpp : Cproject4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project4.h"
#endif

#include "project4Doc.h"
#include "project4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject4View

IMPLEMENT_DYNCREATE(Cproject4View, CView)

BEGIN_MESSAGE_MAP(Cproject4View, CView)
END_MESSAGE_MAP()

// Cproject4View 构造/析构

Cproject4View::Cproject4View()
{
	// TODO: 在此处添加构造代码

}

Cproject4View::~Cproject4View()
{
}

BOOL Cproject4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject4View 绘制

void Cproject4View::OnDraw(CDC* pDC) 
{
	Cproject4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int red = 0 , blue = 0 , green = 0 ;
	int width = 2;
	int row = 20;
	for (int i = 0;i < 8; i++)
	{
		int color = RGB( red, green , blue );
		CPen newPen (PS_SOLID, width, color);
		CPen *oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20, row);
		pDC->LineTo(300, row);
		red += 5;
		green += 20;
		blue += 21;
		width += 1;
		row += 20;
	}

}


// Cproject4View 诊断

#ifdef _DEBUG
void Cproject4View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject4Doc* Cproject4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject4Doc)));
	return (Cproject4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject4View 消息处理程序
