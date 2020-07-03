
// text30View.cpp : Ctext30View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text30.h"
#endif

#include "text30Doc.h"
#include "text30View.h"
#include "Mydlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext30View

IMPLEMENT_DYNCREATE(Ctext30View, CView)

BEGIN_MESSAGE_MAP(Ctext30View, CView)
	ON_COMMAND(ID_View_It, &Ctext30View::OnViewIt)
END_MESSAGE_MAP()

// Ctext30View 构造/析构

Ctext30View::Ctext30View()
{
	// TODO: 在此处添加构造代码

}

Ctext30View::~Ctext30View()
{
}

BOOL Ctext30View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext30View 绘制

void Ctext30View::OnDraw(CDC* /*pDC*/)
{
	Ctext30Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext30View 诊断

#ifdef _DEBUG
void Ctext30View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext30View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext30Doc* Ctext30View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext30Doc)));
	return (Ctext30Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext30View 消息处理程序


void Ctext30View::OnViewIt()
{
	// TODO: 在此添加命令处理程序代码
	Mydlg1 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		
		
		CString s1, s2, s3;
		s1 = dlg.s1;
		s2 = dlg.s2;
		//s3 = s1;
		//s1 = s2;
		//s2 = s3;
		//CClientDC dc(this);
		//dc.TextOutW(20, 20, s1);
		//dc.TextOutW(80,20, s2);
		// TODO: 在此添加命令处理程序代码
	}

}
