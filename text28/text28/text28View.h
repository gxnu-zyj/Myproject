
// text28View.h : Ctext28View ��Ľӿ�
//

#pragma once


class Ctext28View : public CView
{
protected: // �������л�����
	Ctext28View();
	DECLARE_DYNCREATE(Ctext28View)

// ����
public:
	Ctext28Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CPoint point;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext28View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // text28View.cpp �еĵ��԰汾
inline Ctext28Doc* Ctext28View::GetDocument() const
   { return reinterpret_cast<Ctext28Doc*>(m_pDocument); }
#endif

