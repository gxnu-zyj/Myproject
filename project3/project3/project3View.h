
// project3View.h : Cproject3View ��Ľӿ�
//

#pragma once


class Cproject3View : public CView
{
protected: // �������л�����
	Cproject3View();
	DECLARE_DYNCREATE(Cproject3View)

// ����
public:
	Cproject3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project3View.cpp �еĵ��԰汾
inline Cproject3Doc* Cproject3View::GetDocument() const
   { return reinterpret_cast<Cproject3Doc*>(m_pDocument); }
#endif

