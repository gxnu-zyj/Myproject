
// text30View.h : Ctext30View ��Ľӿ�
//

#pragma once


class Ctext30View : public CView
{
protected: // �������л�����
	Ctext30View();
	DECLARE_DYNCREATE(Ctext30View)

// ����
public:
	Ctext30Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext30View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewIt();
};

#ifndef _DEBUG  // text30View.cpp �еĵ��԰汾
inline Ctext30Doc* Ctext30View::GetDocument() const
   { return reinterpret_cast<Ctext30Doc*>(m_pDocument); }
#endif

