
// text18View.h : Ctext18View ��Ľӿ�
//

#pragma once


class Ctext18View : public CView
{
protected: // �������л�����
	Ctext18View();
	DECLARE_DYNCREATE(Ctext18View)

// ����
public:
	Ctext18Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext18View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text18View.cpp �еĵ��԰汾
inline Ctext18Doc* Ctext18View::GetDocument() const
   { return reinterpret_cast<Ctext18Doc*>(m_pDocument); }
#endif

