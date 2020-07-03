
// text36View.h : Ctext36View 类的接口
//

#pragma once


class Ctext36View : public CView
{
protected: // 仅从序列化创建
	Ctext36View();
	DECLARE_DYNCREATE(Ctext36View)

// 特性
public:
	Ctext36Doc* GetDocument() const;

// 操作
public:
	//CString str;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext36View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // text36View.cpp 中的调试版本
inline Ctext36Doc* Ctext36View::GetDocument() const
   { return reinterpret_cast<Ctext36Doc*>(m_pDocument); }
#endif

