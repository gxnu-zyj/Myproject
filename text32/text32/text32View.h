
// text32View.h : Ctext32View ��Ľӿ�
//

#pragma once


class Ctext32View : public CView
{
protected: // �������л�����
	Ctext32View();
	DECLARE_DYNCREATE(Ctext32View)

// ����
public:
	Ctext32Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSum();
};

#ifndef _DEBUG  // text32View.cpp �еĵ��԰汾
inline Ctext32Doc* Ctext32View::GetDocument() const
   { return reinterpret_cast<Ctext32Doc*>(m_pDocument); }
#endif

