
// text25View.h : Ctext25View ��Ľӿ�
//

#pragma once


class Ctext25View : public CView
{
protected: // �������л�����
	Ctext25View();
	DECLARE_DYNCREATE(Ctext25View)

// ����
public:
	Ctext25Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext25View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text25View.cpp �еĵ��԰汾
inline Ctext25Doc* Ctext25View::GetDocument() const
   { return reinterpret_cast<Ctext25Doc*>(m_pDocument); }
#endif

