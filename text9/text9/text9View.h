
// text9View.h : Ctext9View ��Ľӿ�
//

#pragma once


class Ctext9View : public CView
{
protected: // �������л�����
	Ctext9View();
	DECLARE_DYNCREATE(Ctext9View)

// ����
public:
	Ctext9Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext9View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text9View.cpp �еĵ��԰汾
inline Ctext9Doc* Ctext9View::GetDocument() const
   { return reinterpret_cast<Ctext9Doc*>(m_pDocument); }
#endif

