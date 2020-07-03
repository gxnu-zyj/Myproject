
// text27View.h : Ctext27View 类的接口
//

#pragma once


class Ctext27View : public CView
{
protected: // 仅从序列化创建
	Ctext27View();
	DECLARE_DYNCREATE(Ctext27View)

// 特性
public:
	Ctext27Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext27View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text27View.cpp 中的调试版本
inline Ctext27Doc* Ctext27View::GetDocument() const
   { return reinterpret_cast<Ctext27Doc*>(m_pDocument); }
#endif

