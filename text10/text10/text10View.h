
// text10View.h : Ctext10View ��Ľӿ�
//

#pragma once


class Ctext10View : public CView
{
protected: // �������л�����
	Ctext10View();
	DECLARE_DYNCREATE(Ctext10View)

// ����
public:
	Ctext10Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext10View();
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

#ifndef _DEBUG  // text10View.cpp �еĵ��԰汾
inline Ctext10Doc* Ctext10View::GetDocument() const
   { return reinterpret_cast<Ctext10Doc*>(m_pDocument); }
#endif

