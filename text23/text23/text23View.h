
// text23View.h : Ctext23View ��Ľӿ�
//

#pragma once


class Ctext23View : public CView
{
protected: // �������л�����
	Ctext23View();
	DECLARE_DYNCREATE(Ctext23View)

// ����
public:
	Ctext23Doc* GetDocument() const;

// ����
public:
	int x1, y1, x2, y2;
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrect();
	afx_msg void OnDrawyuan();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text23View.cpp �еĵ��԰汾
inline Ctext23Doc* Ctext23View::GetDocument() const
   { return reinterpret_cast<Ctext23Doc*>(m_pDocument); }
#endif

