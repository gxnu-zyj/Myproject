
// text31View.h : Ctext31View ��Ľӿ�
//

#pragma once


class Ctext31View : public CView
{
protected: // �������л�����
	Ctext31View();
	DECLARE_DYNCREATE(Ctext31View)

// ����
public:
	Ctext31Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CPoint p1, p2;
	bool flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext31View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text31View.cpp �еĵ��԰汾
inline Ctext31Doc* Ctext31View::GetDocument() const
   { return reinterpret_cast<Ctext31Doc*>(m_pDocument); }
#endif

