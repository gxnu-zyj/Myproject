
// text27View.h : Ctext27View ��Ľӿ�
//

#pragma once


class Ctext27View : public CView
{
protected: // �������л�����
	Ctext27View();
	DECLARE_DYNCREATE(Ctext27View)

// ����
public:
	Ctext27Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext27View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text27View.cpp �еĵ��԰汾
inline Ctext27Doc* Ctext27View::GetDocument() const
   { return reinterpret_cast<Ctext27Doc*>(m_pDocument); }
#endif

