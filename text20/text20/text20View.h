
// text20View.h : Ctext20View 类的接口
//

#pragma once


class Ctext20View : public CView
{
protected: // 仅从序列化创建
	Ctext20View();
	DECLARE_DYNCREATE(Ctext20View)

// 特性
public:
	Ctext20Doc* GetDocument() const;

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
	virtual ~Ctext20View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // text20View.cpp 中的调试版本
inline Ctext20Doc* Ctext20View::GetDocument() const
   { return reinterpret_cast<Ctext20Doc*>(m_pDocument); }
#endif

