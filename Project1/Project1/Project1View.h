
// Project1View.h : CProject1View 类的接口
//

#pragma once


class CProject1View : public CView
{
protected: // 仅从序列化创建
	CProject1View();
	DECLARE_DYNCREATE(CProject1View)

// 特性
public:
	CProject1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CProject1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Project1View.cpp 中的调试版本
inline CProject1Doc* CProject1View::GetDocument() const
   { return reinterpret_cast<CProject1Doc*>(m_pDocument); }
#endif

