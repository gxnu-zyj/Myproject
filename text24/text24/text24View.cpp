
// text24View.cpp : Ctext24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text24.h"
#endif

#include "text24Doc.h"
#include "text24View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext24View

IMPLEMENT_DYNCREATE(Ctext24View, CView)

BEGIN_MESSAGE_MAP(Ctext24View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctext24View::OnFileOpen)
END_MESSAGE_MAP()

// Ctext24View ����/����

Ctext24View::Ctext24View()
{
	// TODO: �ڴ˴���ӹ������
	set = false;
}

Ctext24View::~Ctext24View()
{
}

BOOL Ctext24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext24View ����

void Ctext24View::OnDraw(CDC* pDC)
{
	Ctext24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set) {
    int sx, sy;
	CClientDC dc(this);
    GetClientRect(&cr);
	CImage img;
	img.Load(pDoc->path);
	sx = (cr.Width() - img.GetWidth()) / 2;
	sy = (cr.Height() - img.GetHeight()) / 2;
	img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	
	
	
}


// Ctext24View ���

#ifdef _DEBUG
void Ctext24View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext24Doc* Ctext24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext24Doc)));
	return (Ctext24Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext24View ��Ϣ�������


void Ctext24View::OnFileOpen()
{
	// TODO: �ڴ���������������
	Ctext24Doc* pDoc = GetDocument();
	CFileDialog cf(true);
	int r = cf.DoModal();
	set = true;
	if (r == IDOK)
	{

		CString s = cf.GetPathName();
		pDoc->path = s;
		int sx, sy;
		CClientDC dc(this);
		GetClientRect(&cr);
		CImage img;
		img.Load(s);
		sx = (cr.Width() - img.GetWidth()) / 2;
		sy = (cr.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	//Invalidate();
}
