
// project330View.cpp : Cproject330View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "project330.h"
#endif

#include "project330Doc.h"
#include "project330View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject330View

IMPLEMENT_DYNCREATE(Cproject330View, CView)

BEGIN_MESSAGE_MAP(Cproject330View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cproject330View::OnFileOpen)
END_MESSAGE_MAP()

// Cproject330View 构造/析构

Cproject330View::Cproject330View()
{
	// TODO: 在此处添加构造代码

}

Cproject330View::~Cproject330View()
{
}

BOOL Cproject330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cproject330View 绘制

void Cproject330View::OnDraw(CDC* /*pDC*/)
{
	Cproject330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cproject330View 诊断

#ifdef _DEBUG
void Cproject330View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject330Doc* Cproject330View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject330Doc)));
	return (Cproject330Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject330View 消息处理程序


void Cproject330View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cf(true);
	CClientDC dc(this);
	int x = cf.DoModal();
	if (x == IDOK)
	{
		CString s;
		s = cf.GetPathName();
		CImage img;
		img.Load(s);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
