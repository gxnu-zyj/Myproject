
// text11View.h : Ctext11View ��Ľӿ�
//

#pragma once


class Ctext11View : public CView
{
protected: // �������л�����
	Ctext11View();
	DECLARE_DYNCREATE(Ctext11View)

// ����
public:
	Ctext11Doc* GetDocument() const;

// ����
public:
	//CArray<CRect , CRect& > el;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text11View.cpp �еĵ��԰汾
inline Ctext11Doc* Ctext11View::GetDocument() const
   { return reinterpret_cast<Ctext11Doc*>(m_pDocument); }
#endif

