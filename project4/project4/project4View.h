
// project4View.h : Cproject4View ��Ľӿ�
//

#pragma once


class Cproject4View : public CView
{
protected: // �������л�����
	Cproject4View();
	DECLARE_DYNCREATE(Cproject4View)

// ����
public:
	Cproject4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project4View.cpp �еĵ��԰汾
inline Cproject4Doc* Cproject4View::GetDocument() const
   { return reinterpret_cast<Cproject4Doc*>(m_pDocument); }
#endif

