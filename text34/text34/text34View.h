
// text34View.h : Ctext34View ��Ľӿ�
//

#pragma once


class Ctext34View : public CView
{
protected: // �������л�����
	Ctext34View();
	DECLARE_DYNCREATE(Ctext34View)

// ����
public:
	Ctext34Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext34View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTransform();
};

#ifndef _DEBUG  // text34View.cpp �еĵ��԰汾
inline Ctext34Doc* Ctext34View::GetDocument() const
   { return reinterpret_cast<Ctext34Doc*>(m_pDocument); }
#endif

