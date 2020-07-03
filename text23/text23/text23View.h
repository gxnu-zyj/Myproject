
// text23View.h : Ctext23View 类的接口
//

#pragma once


class Ctext23View : public CView
{
protected: // 仅从序列化创建
	Ctext23View();
	DECLARE_DYNCREATE(Ctext23View)

// 特性
public:
	Ctext23Doc* GetDocument() const;

// 操作
public:
	int x1, y1, x2, y2;
	CRect cr;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrect();
	afx_msg void OnDrawyuan();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text23View.cpp 中的调试版本
inline Ctext23Doc* Ctext23View::GetDocument() const
   { return reinterpret_cast<Ctext23Doc*>(m_pDocument); }
#endif

