
// project7View.h : Cproject7View ��Ľӿ�
//

#pragma once


class Cproject7View : public CView
{
protected: // �������л�����
	Cproject7View();
	DECLARE_DYNCREATE(Cproject7View)

// ����
public:
	Cproject7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject7View();
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

#ifndef _DEBUG  // project7View.cpp �еĵ��԰汾
inline Cproject7Doc* Cproject7View::GetDocument() const
   { return reinterpret_cast<Cproject7Doc*>(m_pDocument); }
#endif

