
// text32View.cpp : Ctext32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text32.h"
#endif

#include "text32Doc.h"
#include "text32View.h"
#include "Sum.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext32View

IMPLEMENT_DYNCREATE(Ctext32View, CView)

BEGIN_MESSAGE_MAP(Ctext32View, CView)
	ON_COMMAND(ID_Sum, &Ctext32View::OnSum)
END_MESSAGE_MAP()

// Ctext32View ����/����

Ctext32View::Ctext32View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext32View::~Ctext32View()
{
}

BOOL Ctext32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext32View ����

void Ctext32View::OnDraw(CDC* /*pDC*/)
{
	Ctext32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext32View ���

#ifdef _DEBUG
void Ctext32View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext32Doc* Ctext32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext32Doc)));
	return (Ctext32Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext32View ��Ϣ�������


void Ctext32View::OnSum()
{
	Sum dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a,b,sum;
		a = dlg.a;
		b = dlg.b;
		sum = dlg.sum;
	}
	// TODO: �ڴ���������������
}
