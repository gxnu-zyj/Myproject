
// project8View.h : Cproject8View 类的接口
//

#pragma once


class Cproject8View : public CView
{
protected: // 仅从序列化创建
	Cproject8View();
	DECLARE_DYNCREATE(Cproject8View)

// 特性
public:
	Cproject8Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cproject8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // project8View.cpp 中的调试版本
inline Cproject8Doc* Cproject8View::GetDocument() const
   { return reinterpret_cast<Cproject8Doc*>(m_pDocument); }
#endif

