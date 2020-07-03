
// text33View.h : Ctext33View 类的接口
//

#pragma once


class Ctext33View : public CView
{
protected: // 仅从序列化创建
	Ctext33View();
	DECLARE_DYNCREATE(Ctext33View)

// 特性
public:
	Ctext33Doc* GetDocument() const;

// 操作
public:
	CRect cr,rect;
	int flag,n;
	bool set;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext33View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent); 
};

#ifndef _DEBUG  // text33View.cpp 中的调试版本
inline Ctext33Doc* Ctext33View::GetDocument() const
   { return reinterpret_cast<Ctext33Doc*>(m_pDocument); }
#endif

