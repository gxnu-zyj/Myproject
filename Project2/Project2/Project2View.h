
// Project2View.h : CProject2View 类的接口
//

#pragma once


class CProject2View : public CView
{
protected: // 仅从序列化创建
	CProject2View();
	DECLARE_DYNCREATE(CProject2View)

// 特性
public:
	CProject2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CProject2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Project2View.cpp 中的调试版本
inline CProject2Doc* CProject2View::GetDocument() const
   { return reinterpret_cast<CProject2Doc*>(m_pDocument); }
#endif

