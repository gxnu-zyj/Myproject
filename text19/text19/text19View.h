
// text19View.h : Ctext19View ��Ľӿ�
//

#pragma once


class Ctext19View : public CView
{
protected: // �������л�����
	Ctext19View();
	DECLARE_DYNCREATE(Ctext19View)

// ����
public:
	Ctext19Doc* GetDocument() const;

// ����
public:
	CRect cr, rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext19View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnshow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // text19View.cpp �еĵ��԰汾
inline Ctext19Doc* Ctext19View::GetDocument() const
   { return reinterpret_cast<Ctext19Doc*>(m_pDocument); }
#endif

