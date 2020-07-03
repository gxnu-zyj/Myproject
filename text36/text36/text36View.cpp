
// text36View.cpp : Ctext36View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text36.h"
#endif

#include "text36Doc.h"
#include "text36View.h"
#include "MyShow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext36View

IMPLEMENT_DYNCREATE(Ctext36View, CView)

BEGIN_MESSAGE_MAP(Ctext36View, CView)
	ON_COMMAND(ID_Show, &Ctext36View::OnShow)
	ON_COMMAND(ID_FILE_OPEN, &Ctext36View::OnFileOpen)
END_MESSAGE_MAP()

// Ctext36View 构造/析构

Ctext36View::Ctext36View()
{
	// TODO: 在此处添加构造代码

}

Ctext36View::~Ctext36View()
{
}

BOOL Ctext36View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext36View 绘制

void Ctext36View::OnDraw(CDC* /*pDC*/)
{
	Ctext36Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext36View 诊断

#ifdef _DEBUG
void Ctext36View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext36Doc* Ctext36View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext36Doc)));
	return (Ctext36Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext36View 消息处理程序


void Ctext36View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	MyShow dlg;
	Ctext36Doc* pDoc = GetDocument();
	int k = dlg.DoModal();
		if (k == IDOK)
		{
			
		}
}


void Ctext36View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	Ctext36Doc* pDoc = GetDocument();
	CClientDC dc(this);

	int r = cfd.DoModal();
	if (r == IDOK)
	{
		pDoc->str = cfd.GetPathName();
		dc.TextOutW(20, 20, pDoc->str);
	}
}
