
// text33View.h : Ctext33View ��Ľӿ�
//

#pragma once


class Ctext33View : public CView
{
protected: // �������л�����
	Ctext33View();
	DECLARE_DYNCREATE(Ctext33View)

// ����
public:
	Ctext33Doc* GetDocument() const;

// ����
public:
	CRect cr,rect;
	int flag,n;
	bool set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext33View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent); 
};

#ifndef _DEBUG  // text33View.cpp �еĵ��԰汾
inline Ctext33Doc* Ctext33View::GetDocument() const
   { return reinterpret_cast<Ctext33Doc*>(m_pDocument); }
#endif

