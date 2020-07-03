
// text22View.h : Ctext22View 类的接口
//

#pragma once


class Ctext22View : public CView
{
protected: // 仅从序列化创建
	Ctext22View();
	DECLARE_DYNCREATE(Ctext22View)

// 特性
public:
	Ctext22Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text22View.cpp 中的调试版本
inline Ctext22Doc* Ctext22View::GetDocument() const
   { return reinterpret_cast<Ctext22Doc*>(m_pDocument); }
#endif

