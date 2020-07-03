
// text34View.cpp : Ctext34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text34.h"
#endif

#include "text34Doc.h"
#include "text34View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext34View

IMPLEMENT_DYNCREATE(Ctext34View, CView)

BEGIN_MESSAGE_MAP(Ctext34View, CView)
	ON_COMMAND(ID_Transform, &Ctext34View::OnTransform)
END_MESSAGE_MAP()

// Ctext34View 构造/析构

Ctext34View::Ctext34View()
{
	// TODO: 在此处添加构造代码

}

Ctext34View::~Ctext34View()
{
}

BOOL Ctext34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext34View 绘制

void Ctext34View::OnDraw(CDC* /*pDC*/)
{
	Ctext34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext34View 诊断

#ifdef _DEBUG
void Ctext34View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext34Doc* Ctext34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext34Doc)));
	return (Ctext34Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext34View 消息处理程序


void Ctext34View::OnTransform()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1, s3;
		int a;
		s1 = dlg.s1;
		s3=dlg.s3;
		a = dlg.a;
	}
}
