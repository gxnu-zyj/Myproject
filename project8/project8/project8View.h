
// project8View.h : Cproject8View ��Ľӿ�
//

#pragma once


class Cproject8View : public CView
{
protected: // �������л�����
	Cproject8View();
	DECLARE_DYNCREATE(Cproject8View)

// ����
public:
	Cproject8Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // project8View.cpp �еĵ��԰汾
inline Cproject8Doc* Cproject8View::GetDocument() const
   { return reinterpret_cast<Cproject8Doc*>(m_pDocument); }
#endif

