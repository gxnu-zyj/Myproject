
// text31View.h : Ctext31View 类的接口
//

#pragma once


class Ctext31View : public CView
{
protected: // 仅从序列化创建
	Ctext31View();
	DECLARE_DYNCREATE(Ctext31View)

// 特性
public:
	Ctext31Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CPoint p1, p2;
	bool flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text31View.cpp 中的调试版本
inline Ctext31Doc* Ctext31View::GetDocument() const
   { return reinterpret_cast<Ctext31Doc*>(m_pDocument); }
#endif

