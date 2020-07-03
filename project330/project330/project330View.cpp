
// project330View.cpp : Cproject330View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project330.h"
#endif

#include "project330Doc.h"
#include "project330View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject330View

IMPLEMENT_DYNCREATE(Cproject330View, CView)

BEGIN_MESSAGE_MAP(Cproject330View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cproject330View::OnFileOpen)
END_MESSAGE_MAP()

// Cproject330View ����/����

Cproject330View::Cproject330View()
{
	// TODO: �ڴ˴���ӹ������

}

Cproject330View::~Cproject330View()
{
}

BOOL Cproject330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject330View ����

void Cproject330View::OnDraw(CDC* /*pDC*/)
{
	Cproject330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject330View ���

#ifdef _DEBUG
void Cproject330View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject330Doc* Cproject330View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject330Doc)));
	return (Cproject330Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject330View ��Ϣ�������


void Cproject330View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cf(true);
	CClientDC dc(this);
	int x = cf.DoModal();
	if (x == IDOK)
	{
		CString s;
		s = cf.GetPathName();
		CImage img;
		img.Load(s);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
