
// text21View.cpp : Ctext21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text21.h"
#endif

#include "text21Doc.h"
#include "text21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext21View

IMPLEMENT_DYNCREATE(Ctext21View, CView)

BEGIN_MESSAGE_MAP(Ctext21View, CView)
	ON_COMMAND(ID_ShowName, &Ctext21View::OnShowname)
END_MESSAGE_MAP()

// Ctext21View ����/����

Ctext21View::Ctext21View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext21View::~Ctext21View()
{
}

BOOL Ctext21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext21View ����

void Ctext21View::OnDraw(CDC* /*pDC*/)
{
	Ctext21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext21View ���

#ifdef _DEBUG
void Ctext21View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext21Doc* Ctext21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext21Doc)));
	return (Ctext21Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext21View ��Ϣ�������


void Ctext21View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	s = _T("��ά,�ÿ�");
	dc.TextOutW(200, 200, s);
}
