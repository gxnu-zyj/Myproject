
// text32View.cpp : Ctext32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text32.h"
#endif

#include "text32Doc.h"
#include "text32View.h"
#include "Sum.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext32View

IMPLEMENT_DYNCREATE(Ctext32View, CView)

BEGIN_MESSAGE_MAP(Ctext32View, CView)
	ON_COMMAND(ID_Sum, &Ctext32View::OnSum)
END_MESSAGE_MAP()

// Ctext32View 构造/析构

Ctext32View::Ctext32View()
{
	// TODO: 在此处添加构造代码

}

Ctext32View::~Ctext32View()
{
}

BOOL Ctext32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext32View 绘制

void Ctext32View::OnDraw(CDC* /*pDC*/)
{
	Ctext32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext32View 诊断

#ifdef _DEBUG
void Ctext32View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext32Doc* Ctext32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext32Doc)));
	return (Ctext32Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext32View 消息处理程序


void Ctext32View::OnSum()
{
	Sum dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a,b,sum;
		a = dlg.a;
		b = dlg.b;
		sum = dlg.sum;
	}
	// TODO: 在此添加命令处理程序代码
}
