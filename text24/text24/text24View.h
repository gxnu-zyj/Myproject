
// text24View.h : Ctext24View ��Ľӿ�
//

#pragma once


class Ctext24View : public CView
{
protected: // �������л�����
	Ctext24View();
	DECLARE_DYNCREATE(Ctext24View)

// ����
public:
	Ctext24Doc* GetDocument() const;

// ����
public:
	CRect cr;
	bool set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // text24View.cpp �еĵ��԰汾
inline Ctext24Doc* Ctext24View::GetDocument() const
   { return reinterpret_cast<Ctext24Doc*>(m_pDocument); }
#endif

