
// text14View.h : Ctext14View ��Ľӿ�
//

#pragma once


class Ctext14View : public CView
{
protected: // �������л�����
	Ctext14View();
	DECLARE_DYNCREATE(Ctext14View)

// ����
public:
	Ctext14Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext14View();
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
};

#ifndef _DEBUG  // text14View.cpp �еĵ��԰汾
inline Ctext14Doc* Ctext14View::GetDocument() const
   { return reinterpret_cast<Ctext14Doc*>(m_pDocument); }
#endif

