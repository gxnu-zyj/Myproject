
// text8View.h : Ctext8View ��Ľӿ�
//

#pragma once


class Ctext8View : public CView
{
protected: // �������л�����
	Ctext8View();
	DECLARE_DYNCREATE(Ctext8View)

// ����
public:
	Ctext8Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text8View.cpp �еĵ��԰汾
inline Ctext8Doc* Ctext8View::GetDocument() const
   { return reinterpret_cast<Ctext8Doc*>(m_pDocument); }
#endif

