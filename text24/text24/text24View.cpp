
// text24View.cpp : Ctext24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text24.h"
#endif

#include "text24Doc.h"
#include "text24View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext24View

IMPLEMENT_DYNCREATE(Ctext24View, CView)

BEGIN_MESSAGE_MAP(Ctext24View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctext24View::OnFileOpen)
END_MESSAGE_MAP()

// Ctext24View 构造/析构

Ctext24View::Ctext24View()
{
	// TODO: 在此处添加构造代码
	set = false;
}

Ctext24View::~Ctext24View()
{
}

BOOL Ctext24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext24View 绘制

void Ctext24View::OnDraw(CDC* pDC)
{
	Ctext24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set) {
    int sx, sy;
	CClientDC dc(this);
    GetClientRect(&cr);
	CImage img;
	img.Load(pDoc->path);
	sx = (cr.Width() - img.GetWidth()) / 2;
	sy = (cr.Height() - img.GetHeight()) / 2;
	img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	
	
	
}


// Ctext24View 诊断

#ifdef _DEBUG
void Ctext24View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext24Doc* Ctext24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext24Doc)));
	return (Ctext24Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext24View 消息处理程序


void Ctext24View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	Ctext24Doc* pDoc = GetDocument();
	CFileDialog cf(true);
	int r = cf.DoModal();
	set = true;
	if (r == IDOK)
	{

		CString s = cf.GetPathName();
		pDoc->path = s;
		int sx, sy;
		CClientDC dc(this);
		GetClientRect(&cr);
		CImage img;
		img.Load(s);
		sx = (cr.Width() - img.GetWidth()) / 2;
		sy = (cr.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	//Invalidate();
}
