
// project330-2View.h : Cproject3302View ��Ľӿ�
//

#pragma once


class Cproject3302View : public CView
{
protected: // �������л�����
	Cproject3302View();
	DECLARE_DYNCREATE(Cproject3302View)

// ����
public:
	Cproject3302Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject3302View();
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

#ifndef _DEBUG  // project330-2View.cpp �еĵ��԰汾
inline Cproject3302Doc* Cproject3302View::GetDocument() const
   { return reinterpret_cast<Cproject3302Doc*>(m_pDocument); }
#endif

