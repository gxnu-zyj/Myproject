
// text30View.cpp : Ctext30View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text30.h"
#endif

#include "text30Doc.h"
#include "text30View.h"
#include "Mydlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext30View

IMPLEMENT_DYNCREATE(Ctext30View, CView)

BEGIN_MESSAGE_MAP(Ctext30View, CView)
	ON_COMMAND(ID_View_It, &Ctext30View::OnViewIt)
END_MESSAGE_MAP()

// Ctext30View ����/����

Ctext30View::Ctext30View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext30View::~Ctext30View()
{
}

BOOL Ctext30View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext30View ����

void Ctext30View::OnDraw(CDC* /*pDC*/)
{
	Ctext30Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext30View ���

#ifdef _DEBUG
void Ctext30View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext30View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext30Doc* Ctext30View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext30Doc)));
	return (Ctext30Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext30View ��Ϣ�������


void Ctext30View::OnViewIt()
{
	// TODO: �ڴ���������������
	Mydlg1 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		
		
		CString s1, s2, s3;
		s1 = dlg.s1;
		s2 = dlg.s2;
		//s3 = s1;
		//s1 = s2;
		//s2 = s3;
		//CClientDC dc(this);
		//dc.TextOutW(20, 20, s1);
		//dc.TextOutW(80,20, s2);
		// TODO: �ڴ���������������
	}

}
