
// text7View.h : Ctext7View ��Ľӿ�
//

#pragma once


class Ctext7View : public CView
{
protected: // �������л�����
	Ctext7View();
	DECLARE_DYNCREATE(Ctext7View)

// ����
public:
	Ctext7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text7View.cpp �еĵ��԰汾
inline Ctext7Doc* Ctext7View::GetDocument() const
   { return reinterpret_cast<Ctext7Doc*>(m_pDocument); }
#endif

