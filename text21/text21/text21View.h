
// text21View.h : Ctext21View ��Ľӿ�
//

#pragma once


class Ctext21View : public CView
{
protected: // �������л�����
	Ctext21View();
	DECLARE_DYNCREATE(Ctext21View)

// ����
public:
	Ctext21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // text21View.cpp �еĵ��԰汾
inline Ctext21Doc* Ctext21View::GetDocument() const
   { return reinterpret_cast<Ctext21Doc*>(m_pDocument); }
#endif

