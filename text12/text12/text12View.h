
// text12View.h : Ctext12View ��Ľӿ�
//

#pragma once


class Ctext12View : public CView
{
protected: // �������л�����
	Ctext12View();
	DECLARE_DYNCREATE(Ctext12View)

// ����
public:
	Ctext12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext12View();
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
};

#ifndef _DEBUG  // text12View.cpp �еĵ��԰汾
inline Ctext12Doc* Ctext12View::GetDocument() const
   { return reinterpret_cast<Ctext12Doc*>(m_pDocument); }
#endif

