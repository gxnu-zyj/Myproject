
// text21View.cpp : Ctext21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text21.h"
#endif

#include "text21Doc.h"
#include "text21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext21View

IMPLEMENT_DYNCREATE(Ctext21View, CView)

BEGIN_MESSAGE_MAP(Ctext21View, CView)
	ON_COMMAND(ID_ShowName, &Ctext21View::OnShowname)
END_MESSAGE_MAP()

// Ctext21View 构造/析构

Ctext21View::Ctext21View()
{
	// TODO: 在此处添加构造代码

}

Ctext21View::~Ctext21View()
{
}

BOOL Ctext21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext21View 绘制

void Ctext21View::OnDraw(CDC* /*pDC*/)
{
	Ctext21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext21View 诊断

#ifdef _DEBUG
void Ctext21View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext21Doc* Ctext21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext21Doc)));
	return (Ctext21Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext21View 消息处理程序


void Ctext21View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	CClientDC dc(this);
	s = _T("哈维,裘克");
	dc.TextOutW(200, 200, s);
}
