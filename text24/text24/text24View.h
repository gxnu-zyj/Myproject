
// text24View.h : Ctext24View 类的接口
//

#pragma once


class Ctext24View : public CView
{
protected: // 仅从序列化创建
	Ctext24View();
	DECLARE_DYNCREATE(Ctext24View)

// 特性
public:
	Ctext24Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	bool set;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // text24View.cpp 中的调试版本
inline Ctext24Doc* Ctext24View::GetDocument() const
   { return reinterpret_cast<Ctext24Doc*>(m_pDocument); }
#endif

