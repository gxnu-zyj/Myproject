
// text26View.h : Ctext26View 类的接口
//

#pragma once


class Ctext26View : public CView
{
protected: // 仅从序列化创建
	Ctext26View();
	DECLARE_DYNCREATE(Ctext26View)

// 特性
public:
	Ctext26Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CPoint point;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext26View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // text26View.cpp 中的调试版本
inline Ctext26Doc* Ctext26View::GetDocument() const
   { return reinterpret_cast<Ctext26Doc*>(m_pDocument); }
#endif

