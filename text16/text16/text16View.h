
// text16View.h : Ctext16View 类的接口
//

#pragma once


class Ctext16View : public CView
{
protected: // 仅从序列化创建
	Ctext16View();
	DECLARE_DYNCREATE(Ctext16View)

// 特性
public:
	Ctext16Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext16View();
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

#ifndef _DEBUG  // text16View.cpp 中的调试版本
inline Ctext16Doc* Ctext16View::GetDocument() const
   { return reinterpret_cast<Ctext16Doc*>(m_pDocument); }
#endif

