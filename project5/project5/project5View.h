
// project5View.h : Cproject5View ��Ľӿ�
//

#pragma once


class Cproject5View : public CView
{
protected: // �������л�����
	Cproject5View();
	DECLARE_DYNCREATE(Cproject5View)

// ����
public:
	Cproject5Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cproject5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // project5View.cpp �еĵ��԰汾
inline Cproject5Doc* Cproject5View::GetDocument() const
   { return reinterpret_cast<Cproject5Doc*>(m_pDocument); }
#endif

