
// text29View.h : Ctext29View ��Ľӿ�
//

#pragma once


class Ctext29View : public CView
{
protected: // �������л�����
	Ctext29View();
	DECLARE_DYNCREATE(Ctext29View)

// ����
public:
	Ctext29Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext29View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPutout();
};

#ifndef _DEBUG  // text29View.cpp �еĵ��԰汾
inline Ctext29Doc* Ctext29View::GetDocument() const
   { return reinterpret_cast<Ctext29Doc*>(m_pDocument); }
#endif

