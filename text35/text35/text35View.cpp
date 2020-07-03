
// text35View.cpp : Ctext35View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text35.h"
#endif

#include "text35Doc.h"
#include "text35View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext35View

IMPLEMENT_DYNCREATE(Ctext35View, CView)

BEGIN_MESSAGE_MAP(Ctext35View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctext35View::OnFileOpen)
//	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctext35View 构造/析构

Ctext35View::Ctext35View()
{
	// TODO: 在此处添加构造代码
	flag = false;
}

Ctext35View::~Ctext35View()
{
}

BOOL Ctext35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext35View 绘制

void Ctext35View::OnDraw(CDC* /*pDC*/)
{
	Ctext35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext35View 诊断

#ifdef _DEBUG
void Ctext35View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext35Doc* Ctext35View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext35Doc)));
	return (Ctext35Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext35View 消息处理程序


void Ctext35View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	
       CFileDialog cfd(true);
	   int k = cfd.DoModal();
	   CClientDC dc(this);
	   if (k == IDOK)
	    {
	    	str = cfd.GetPathName();
		    dc.TextOutW(20, 20, str);
	    }
	
}


//void Ctext35View::OnLButtonDblClk(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	flag = true;
//	CView::OnLButtonDblClk(nFlags, point);
//}
