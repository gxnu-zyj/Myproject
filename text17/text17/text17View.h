
// text17View.h : Ctext17View ��Ľӿ�
//

#pragma once


class Ctext17View : public CView
{
protected: // �������л�����
	Ctext17View();
	DECLARE_DYNCREATE(Ctext17View)

// ����
public:
	Ctext17Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext17View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text17View.cpp �еĵ��԰汾
inline Ctext17Doc* Ctext17View::GetDocument() const
   { return reinterpret_cast<Ctext17Doc*>(m_pDocument); }
#endif

