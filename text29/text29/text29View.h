
// text29View.h : Ctext29View 类的接口
//

#pragma once


class Ctext29View : public CView
{
protected: // 仅从序列化创建
	Ctext29View();
	DECLARE_DYNCREATE(Ctext29View)

// 特性
public:
	Ctext29Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext29View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPutout();
};

#ifndef _DEBUG  // text29View.cpp 中的调试版本
inline Ctext29Doc* Ctext29View::GetDocument() const
   { return reinterpret_cast<Ctext29Doc*>(m_pDocument); }
#endif

