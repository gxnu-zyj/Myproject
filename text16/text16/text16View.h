
// text16View.h : Ctext16View ��Ľӿ�
//

#pragma once


class Ctext16View : public CView
{
protected: // �������л�����
	Ctext16View();
	DECLARE_DYNCREATE(Ctext16View)

// ����
public:
	Ctext16Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext16View();
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

#ifndef _DEBUG  // text16View.cpp �еĵ��԰汾
inline Ctext16Doc* Ctext16View::GetDocument() const
   { return reinterpret_cast<Ctext16Doc*>(m_pDocument); }
#endif

