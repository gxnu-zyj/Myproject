
// text13View.h : Ctext13View ��Ľӿ�
//

#pragma once


class Ctext13View : public CView
{
protected: // �������л�����
	Ctext13View();
	DECLARE_DYNCREATE(Ctext13View)

// ����
public:
	Ctext13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext13View();
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

#ifndef _DEBUG  // text13View.cpp �еĵ��԰汾
inline Ctext13Doc* Ctext13View::GetDocument() const
   { return reinterpret_cast<Ctext13Doc*>(m_pDocument); }
#endif

