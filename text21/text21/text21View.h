
// text21View.h : Ctext21View 类的接口
//

#pragma once


class Ctext21View : public CView
{
protected: // 仅从序列化创建
	Ctext21View();
	DECLARE_DYNCREATE(Ctext21View)

// 特性
public:
	Ctext21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // text21View.cpp 中的调试版本
inline Ctext21Doc* Ctext21View::GetDocument() const
   { return reinterpret_cast<Ctext21Doc*>(m_pDocument); }
#endif

