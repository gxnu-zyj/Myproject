
// text35View.h : Ctext35View ��Ľӿ�
//

#pragma once


class Ctext35View : public CView
{
protected: // �������л�����
	Ctext35View();
	DECLARE_DYNCREATE(Ctext35View)

// ����
public:
	Ctext35Doc* GetDocument() const;

// ����
public:
	CString str;
	bool flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext35View();
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
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text35View.cpp �еĵ��԰汾
inline Ctext35Doc* Ctext35View::GetDocument() const
   { return reinterpret_cast<Ctext35Doc*>(m_pDocument); }
#endif

