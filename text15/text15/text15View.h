
// text15View.h : Ctext15View ��Ľӿ�
//

#pragma once


class Ctext15View : public CView
{
protected: // �������л�����
	Ctext15View();
	DECLARE_DYNCREATE(Ctext15View)

// ����
public:
	Ctext15Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext15View();
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

#ifndef _DEBUG  // text15View.cpp �еĵ��԰汾
inline Ctext15Doc* Ctext15View::GetDocument() const
   { return reinterpret_cast<Ctext15Doc*>(m_pDocument); }
#endif

