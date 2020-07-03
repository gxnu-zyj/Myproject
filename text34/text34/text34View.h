
// text34View.h : Ctext34View 类的接口
//

#pragma once


class Ctext34View : public CView
{
protected: // 仅从序列化创建
	Ctext34View();
	DECLARE_DYNCREATE(Ctext34View)

// 特性
public:
	Ctext34Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext34View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTransform();
};

#ifndef _DEBUG  // text34View.cpp 中的调试版本
inline Ctext34Doc* Ctext34View::GetDocument() const
   { return reinterpret_cast<Ctext34Doc*>(m_pDocument); }
#endif

