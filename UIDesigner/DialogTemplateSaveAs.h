#pragma once


// CDialogTemplateSaveAs �Ի���

class CDialogTemplateSaveAs : public CDialog
{
	DECLARE_DYNAMIC(CDialogTemplateSaveAs)

public:
	CDialogTemplateSaveAs(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogTemplateSaveAs();

// �Ի�������
	enum { IDD = IDD_DIALOG_TEMPLATE_SAVE_AS };

public:
	CString GetTemplateName() const { return m_strName; }

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CString m_strName;
};
