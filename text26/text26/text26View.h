
// text26View.h : Ctext26View ��Ľӿ�
//

#pragma once


class Ctext26View : public CView
{
protected: // �������л�����
	Ctext26View();
	DECLARE_DYNCREATE(Ctext26View)

// ����
public:
	Ctext26Doc* GetDocument() const;

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
	virtual ~Ctext26View();
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

#ifndef _DEBUG  // text26View.cpp �еĵ��԰汾
inline Ctext26Doc* Ctext26View::GetDocument() const
   { return reinterpret_cast<Ctext26Doc*>(m_pDocument); }
#endif

