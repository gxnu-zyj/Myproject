
// text19View.h : Ctext19View 类的接口
//

#pragma once


class Ctext19View : public CView
{
protected: // 仅从序列化创建
	Ctext19View();
	DECLARE_DYNCREATE(Ctext19View)

// 特性
public:
	Ctext19Doc* GetDocument() const;

// 操作
public:
	CRect cr, rect;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext19View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnshow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // text19View.cpp 中的调试版本
inline Ctext19Doc* Ctext19View::GetDocument() const
   { return reinterpret_cast<Ctext19Doc*>(m_pDocument); }
#endif

