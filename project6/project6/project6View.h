
// project6View.h : Cproject6View ��Ľӿ�
//

#pragma once


class Cproject6View : public CView
{
protected: // �������л�����
	Cproject6View();
	DECLARE_DYNCREATE(Cproject6View)

// ����
public:
	Cproject6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject6View();
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

#ifndef _DEBUG  // project6View.cpp �еĵ��԰汾
inline Cproject6Doc* Cproject6View::GetDocument() const
   { return reinterpret_cast<Cproject6Doc*>(m_pDocument); }
#endif

