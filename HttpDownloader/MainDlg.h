#pragma once
#include "_Nv_Http_Download.h"

#define  WM_USER_EDIT		WM_USER+100
#define  WM_USER_PROG		WM_USER+101
#define  WM_USER_PRINT		WM_USER+102

class CMainDlg
	: public WindowImplBase
{
public:
	CMainDlg(void);
	~CMainDlg(void);

private:
	virtual void InitWindow();
	virtual CDuiString GetSkinFolder();
	virtual CDuiString GetSkinFile();
	virtual LPCTSTR GetWindowClassName( void ) const;
	virtual void Notify( TNotifyUI& msg );
	virtual LRESULT HandleCustomMessage( UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );
	virtual void OnFinalMessage( HWND hWnd );

	//////////////////////////////////////////////////////////////////////////
	//�Զ�����Ϣ
	LRESULT OnUserEdit(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnUserProg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnUserPrint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

	//////////////////////////////////////////////////////////////////////////
	//���� �ƶ� �ؼ�
	void	set_WidthPos	(IN CRichEditUI *pdlg, IN int nWidth);
	void	set_WidthPos	(IN CButtonUI *pdlg, IN int nWidth);
	void	set_WidthPos	(IN CTextUI *pdlg, IN int nWidth);
	void	set_Width		(IN CRichEditUI *pdlg, IN int nWidth);
	void	set_Width		(IN CHorizontalLayoutUI *pdlg, IN int nWidth);

public:

	//�󶨿ؼ�
	void init_BindControls(void);
	//��ʼ������
	void init_ControlsData(void);
	void OpenDlgFile(char *strPathName);

public:	//��������

	//�˳���ť
	CButtonUI		*m_pBtnClose;
	CButtonUI		*m_pBtnOpenFile;
	CButtonUI		*m_pBtnStop;
	CButtonUI		*m_pBtnRun;
	CButtonUI		*m_pBtnTieTu;
	CRichEditUI		*m_pEditInput;
	CRichEditUI		*m_pEditFilePath;

	CProgressUI		*m_pProgPrint;

	CTextUI			*m_pTextPrint;
	CTextUI			*m_pTextUrl;
	CTextUI			*m_pTextOutFile;

	char			m_strFilePath[1024];

	//////////////////////////////////////////////////////////////////////////
	_Nv_Download	*Nv_Download_Task_;
};
