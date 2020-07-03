
// text32View.h : Ctext32View 类的接口
//

#pragma once


class Ctext32View : public CView
{
protected: // 仅从序列化创建
	Ctext32View();
	DECLARE_DYNCREATE(Ctext32View)

// 特性
public:
	Ctext32Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSum();
};

#ifndef _DEBUG  // text32View.cpp 中的调试版本
inline Ctext32Doc* Ctext32View::GetDocument() const
   { return reinterpret_cast<Ctext32Doc*>(m_pDocument); }
#endif

