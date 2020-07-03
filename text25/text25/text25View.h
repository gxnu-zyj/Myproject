
// text25View.h : Ctext25View 类的接口
//

#pragma once


class Ctext25View : public CView
{
protected: // 仅从序列化创建
	Ctext25View();
	DECLARE_DYNCREATE(Ctext25View)

// 特性
public:
	Ctext25Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext25View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text25View.cpp 中的调试版本
inline Ctext25Doc* Ctext25View::GetDocument() const
   { return reinterpret_cast<Ctext25Doc*>(m_pDocument); }
#endif

