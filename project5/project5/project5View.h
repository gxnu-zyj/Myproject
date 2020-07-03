
// project5View.h : Cproject5View 类的接口
//

#pragma once


class Cproject5View : public CView
{
protected: // 仅从序列化创建
	Cproject5View();
	DECLARE_DYNCREATE(Cproject5View)

// 特性
public:
	Cproject5Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cproject5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project5View.cpp 中的调试版本
inline Cproject5Doc* Cproject5View::GetDocument() const
   { return reinterpret_cast<Cproject5Doc*>(m_pDocument); }
#endif

