
// project330View.h : Cproject330View ��Ľӿ�
//

#pragma once


class Cproject330View : public CView
{
protected: // �������л�����
	Cproject330View();
	DECLARE_DYNCREATE(Cproject330View)

// ����
public:
	Cproject330Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject330View();
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

#ifndef _DEBUG  // project330View.cpp �еĵ��԰汾
inline Cproject330Doc* Cproject330View::GetDocument() const
   { return reinterpret_cast<Cproject330Doc*>(m_pDocument); }
#endif

