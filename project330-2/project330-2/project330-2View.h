
// project330-2View.h : Cproject3302View 类的接口
//

#pragma once


class Cproject3302View : public CView
{
protected: // 仅从序列化创建
	Cproject3302View();
	DECLARE_DYNCREATE(Cproject3302View)

// 特性
public:
	Cproject3302Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cproject3302View();
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

#ifndef _DEBUG  // project330-2View.cpp 中的调试版本
inline Cproject3302Doc* Cproject3302View::GetDocument() const
   { return reinterpret_cast<Cproject3302Doc*>(m_pDocument); }
#endif

