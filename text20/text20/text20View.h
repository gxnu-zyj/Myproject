
// text20View.h : Ctext20View ��Ľӿ�
//

#pragma once


class Ctext20View : public CView
{
protected: // �������л�����
	Ctext20View();
	DECLARE_DYNCREATE(Ctext20View)

// ����
public:
	Ctext20Doc* GetDocument() const;

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
	virtual ~Ctext20View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // text20View.cpp �еĵ��԰汾
inline Ctext20Doc* Ctext20View::GetDocument() const
   { return reinterpret_cast<Ctext20Doc*>(m_pDocument); }
#endif

