
// project9View.h : Cproject9View ��Ľӿ�
//

#pragma once


class Cproject9View : public CView
{
protected: // �������л�����
	Cproject9View();
	DECLARE_DYNCREATE(Cproject9View)

// ����
public:
	Cproject9Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject9View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project9View.cpp �еĵ��԰汾
inline Cproject9Doc* Cproject9View::GetDocument() const
   { return reinterpret_cast<Cproject9Doc*>(m_pDocument); }
#endif

