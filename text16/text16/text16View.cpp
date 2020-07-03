
// text16View.cpp : Ctext16View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "text16.h"
#endif

#include "text16Doc.h"
#include "text16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext16View

IMPLEMENT_DYNCREATE(Ctext16View, CView)

BEGIN_MESSAGE_MAP(Ctext16View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctext16View 构造/析构

Ctext16View::Ctext16View()
{
	// TODO: 在此处添加构造代码

}

Ctext16View::~Ctext16View()
{
}

BOOL Ctext16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext16View 绘制

void Ctext16View::OnDraw(CDC* /*pDC*/)
{
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext16View 诊断

#ifdef _DEBUG
void Ctext16View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext16Doc* Ctext16View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext16Doc)));
	return (Ctext16Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext16View 消息处理程序


void Ctext16View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->count = 1;
	pDoc->x = point.x;
	pDoc->y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctext16View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1,s2;
	CClientDC dc(this);
	pDoc->count = 0;
	pDoc->sum = 0;
	pDoc->sum = point.x - pDoc->x;
	s1.Format(_T("水平移动的像素是：%d"), pDoc -> sum);
	s2.Format(_T("初始位置和末位置的横坐标分别是：x=%d , x1=%d"), pDoc->x, point.x);
	dc.TextOutW(20, 20, s1);
	dc.TextOutW(40, 40, s2);
	CView::OnLButtonUp(nFlags, point);
}


void Ctext16View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Ctext16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s,str;
	if (pDoc->count)
		pDoc->count=pDoc->count+1;
	//int avg;
	//avg = pDoc->sum / pDoc->count;
	s.Format(_T("移动次数是： %d"), pDoc->count);
	//str.Format(_T("平均水平移动像素为：%d"), avg);
	CClientDC dc(this);
	dc.TextOutW(60, 60, s);
	//dc.TextOutW(80, 80, str);
	CView::OnMouseMove(nFlags, point);
}
