
// project330-2View.cpp : Cproject3302View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "project330-2.h"
#endif

#include "project330-2Doc.h"
#include "project330-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cproject3302View

IMPLEMENT_DYNCREATE(Cproject3302View, CView)

BEGIN_MESSAGE_MAP(Cproject3302View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cproject3302View::OnFileOpen)
END_MESSAGE_MAP()

// Cproject3302View ����/����

Cproject3302View::Cproject3302View()
{
	// TODO: �ڴ˴���ӹ������
	
}

Cproject3302View::~Cproject3302View()
{
}

BOOL Cproject3302View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cproject3302View ����

void Cproject3302View::OnDraw(CDC* /*pDC*/)
{
	Cproject3302Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cproject3302View ���

#ifdef _DEBUG
void Cproject3302View::AssertValid() const
{
	CView::AssertValid();
}

void Cproject3302View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cproject3302Doc* Cproject3302View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cproject3302Doc)));
	return (Cproject3302Doc*)m_pDocument;
}
#endif //_DEBUG


// Cproject3302View ��Ϣ�������


void Cproject3302View::OnFileOpen()
{
	// TODO: �ڴ���������������
	
	CFileDialog cf(true);
	int r = cf.DoModal();
	if (r == IDOK)
	{
		CString s = cf.GetPathName();
		CClientDC dc(this);
		int w, h, sx, sy;
		CImage img;
		img.Load(s);
		{
			
			float cr_ratio, img_ratio;
			CRect cr;
			GetClientRect(&cr);
			cr_ratio = 1.0*cr.Width() / cr.Height();
			img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (cr_ratio > img_ratio)
			{
				h = cr.Height();
				w = img_ratio*h;
				sx = (cr.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = cr.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (cr.Height() - h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
	//Invalidate();
}
