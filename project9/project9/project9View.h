
// project9View.h : Cproject9View 类的接口
//

#pragma once


class Cproject9View : public CView
{
protected: // 仅从序列化创建
	Cproject9View();
	DECLARE_DYNCREATE(Cproject9View)

// 特性
public:
	Cproject9Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cproject9View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project9View.cpp 中的调试版本
inline Cproject9Doc* Cproject9View::GetDocument() const
   { return reinterpret_cast<Cproject9Doc*>(m_pDocument); }
#endif

