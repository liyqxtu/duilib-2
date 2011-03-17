// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ

#include <afxdisp.h>        // MFC �Զ�����

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��

#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


//////////////////////////////////////////////////////////////////////////
//Link

#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "..\\bin\\UIlib_ud.lib")
#   else
#       pragma comment(lib, "..\\bin\\UIlib_d.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "..\\bin\\UIlib_u.lib")
#   else
#       pragma comment(lib, "..\\bin\\UIlib.lib")
#   endif
#endif

#pragma comment(lib,"Dbghelp.lib")

//////////////////////////////////////////////////////////////////////////
//Defines

#define FORM_INIT_WIDTH  400
#define FORM_INIT_HEIGHT 400

#define FORM_OFFSET_X 20
#define FORM_OFFSET_Y 20

#define UI_DEFAULT_WIDTH  60
#define UI_DEFAULT_HEIGHT 30

#define TRACKER_HANDLE_SIZE 7
#define MICO_MOVE_SPACE 1

//UI type
enum UIType
{
	typeControl=1,
	typeContainer,
	typeForm,
};

//UI class
enum UIClass
{
	classPointer=100,
	classForm,
	classControl,
	classButton,
	classEdit,
	classLabel,
	classText,
	classOption,
	classCombo,
	classList,
	classSlider,
	classProgress,
	classActiveX,
	classContainer,
	classVerticalLayout,
	classHorizontalLayout,
	classDialogLayout,
	classTabLayout,
	classTileLayout,
	classListHeader,
	classListHeaderItem,
	classListTextElement,
	classListLabelElement,
	classListExpandElement,
	classListContainerElement,
};

typedef struct tagExtendedAttributes
{
	HTREEITEM hItem;
	int nClass;
}ExtendedAttributes;

//////////////////////////////////////////////////////////////////////////
//Global variables

#include "..\UIlib\UIlib.h"
#include "MainFrm.h"
#include "ToolBoxWnd.h"
#include "PropertiesWnd.h"
#include "ClassView.h"
#include "ResourceView.h"
#include "HookAPI.h"

extern CMainFrame* g_pMainFrame;
extern CToolBoxWnd* g_pToolBoxWnd;
extern CPropertiesWnd* g_pPropertiesWnd;
extern CClassView* g_pClassView;
extern CResourceViewBar* g_pResourceView;
extern CHookAPI g_HookAPI;

//////////////////////////////////////////////////////////////////////////
//Global functions

extern int g_GetUIClass(CControlUI* pControl);