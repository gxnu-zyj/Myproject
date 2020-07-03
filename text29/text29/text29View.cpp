
// text29View.cpp : Ctext29View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text29.h"
#endif

#include "text29Doc.h"
#include "text29View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext29View

IMPLEMENT_DYNCREATE(Ctext29View, CView)

BEGIN_MESSAGE_MAP(Ctext29View, CView)
	ON_COMMAND(ID_PutOut, &Ctext29View::OnPutout)
END_MESSAGE_MAP()

// Ctext29View 构造/析构

Ctext29View::Ctext29View()
{
	// TODO: 在此处添加构造代码

}

Ctext29View::~Ctext29View()
{
}

BOOL Ctext29View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext29View 绘制

void Ctext29View::OnDraw(CDC* /*pDC*/)
{
	Ctext29Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext29View 诊断

#ifdef _DEBUG
void Ctext29View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext29View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext29Doc* Ctext29View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext29Doc)));
	return (Ctext29Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext29View 消息处理程序


void Ctext29View::OnPutout()
{
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s;
		s = _T("你已经退出对话框！");
		CClientDC dc(this);
		dc.TextOutW(20, 20, s);
		/*
		CString s1, s2, s3;
		s1 = dlg.s1;
		s2 = dlg.s2;
		s3 = s1;
		s1 = s2;
		s2 = s3;
		CClientDC dc(this);
		dc.TextOutW(20, 20, s1);
		dc.TextOutW(80,20, s2);
	}*/
	// TODO: 在此添加命令处理程序代码
	}
}
