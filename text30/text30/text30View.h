
// text30View.h : Ctext30View 类的接口
//

#pragma once


class Ctext30View : public CView
{
protected: // 仅从序列化创建
	Ctext30View();
	DECLARE_DYNCREATE(Ctext30View)

// 特性
public:
	Ctext30Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext30View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewIt();
};

#ifndef _DEBUG  // text30View.cpp 中的调试版本
inline Ctext30Doc* Ctext30View::GetDocument() const
   { return reinterpret_cast<Ctext30Doc*>(m_pDocument); }
#endif

