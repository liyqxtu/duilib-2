
// UIDesignerDoc.cpp : CUIDesignerDoc ���ʵ��
//

#include "stdafx.h"
#include "UIDesigner.h"

#include "UIDesignerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUIDesignerDoc

IMPLEMENT_DYNCREATE(CUIDesignerDoc, CDocument)

BEGIN_MESSAGE_MAP(CUIDesignerDoc, CDocument)
END_MESSAGE_MAP()


// CUIDesignerDoc ����/����

CUIDesignerDoc::CUIDesignerDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CUIDesignerDoc::~CUIDesignerDoc()
{
}

BOOL CUIDesignerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CUIDesignerDoc ���л�

void CUIDesignerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CUIDesignerDoc ���

#ifdef _DEBUG
void CUIDesignerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CUIDesignerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CUIDesignerDoc ����
