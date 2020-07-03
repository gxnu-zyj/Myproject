
// text35View.h : Ctext35View 类的接口
//

#pragma once


class Ctext35View : public CView
{
protected: // 仅从序列化创建
	Ctext35View();
	DECLARE_DYNCREATE(Ctext35View)

// 特性
public:
	Ctext35Doc* GetDocument() const;

// 操作
public:
	CString str;
	bool flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext35View();
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
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text35View.cpp 中的调试版本
inline Ctext35Doc* Ctext35View::GetDocument() const
   { return reinterpret_cast<Ctext35Doc*>(m_pDocument); }
#endif

