
// UIDesignerView.cpp : CUIDesignerView ���ʵ��
//

#include "stdafx.h"
#include "UIDesigner.h"

#include "UIDesignerDoc.h"
#include "UIDesignerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUIDesignerView

IMPLEMENT_DYNCREATE(CUIDesignerView, CView)

BEGIN_MESSAGE_MAP(CUIDesignerView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CUIDesignerView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CUIDesignerView ����/����

CUIDesignerView::CUIDesignerView()
{
	// TODO: �ڴ˴���ӹ������

}

CUIDesignerView::~CUIDesignerView()
{
}

BOOL CUIDesignerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUIDesignerView ����

void CUIDesignerView::OnDraw(CDC* /*pDC*/)
{
	CUIDesignerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUIDesignerView ��ӡ


void CUIDesignerView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CUIDesignerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CUIDesignerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CUIDesignerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CUIDesignerView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CUIDesignerView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CUIDesignerView ���

#ifdef _DEBUG
void CUIDesignerView::AssertValid() const
{
	CView::AssertValid();
}

void CUIDesignerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUIDesignerDoc* CUIDesignerView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUIDesignerDoc)));
	return (CUIDesignerDoc*)m_pDocument;
}
#endif //_DEBUG


// CUIDesignerView ��Ϣ�������
