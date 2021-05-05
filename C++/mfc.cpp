#include <afxwin.h>

class CEverything : public CFrameWnd
{
public:
    CEverything()
    {
        Create(NULL,_T("Hello World!"),WS_OVERLAPPEDWINDOW,rectDefault);
    }
};

class CEverythingApp : public CWinApp
{
public:
    virtual BOOL InitInstance();
};

BOOL CEverythingApp::InitInstance()
{
    m_pMainWnd = new CEverything();
    m_pMainWnd->ShowWindow(m_nCmdShow);
    m_pMainWnd->UpdateWindow();
    return TRUE;
}

CEverythingApp theApp;
