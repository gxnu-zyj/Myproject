
// text6View.h : Ctext6View ��Ľӿ�
//

#pragma once


class Ctext6View : public CView
{
protected: // �������л�����
	Ctext6View();
	DECLARE_DYNCREATE(Ctext6View)

// ����
public:
	Ctext6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text6View.cpp �еĵ��԰汾
inline Ctext6Doc* Ctext6View::GetDocument() const
   { return reinterpret_cast<Ctext6Doc*>(m_pDocument); }
#endif

