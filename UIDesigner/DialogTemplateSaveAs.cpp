// DialogTemplateSaveAs.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "UIDesigner.h"
#include "DialogTemplateSaveAs.h"


// CDialogTemplateSaveAs �Ի���

IMPLEMENT_DYNAMIC(CDialogTemplateSaveAs, CDialog)

CDialogTemplateSaveAs::CDialogTemplateSaveAs(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogTemplateSaveAs::IDD, pParent)
	, m_strName(_T("δ����1"))
{

}

CDialogTemplateSaveAs::~CDialogTemplateSaveAs()
{
}

void CDialogTemplateSaveAs::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEMPLATE_NAME, m_strName);
}


BEGIN_MESSAGE_MAP(CDialogTemplateSaveAs, CDialog)
END_MESSAGE_MAP()


// CDialogTemplateSaveAs ��Ϣ�������
