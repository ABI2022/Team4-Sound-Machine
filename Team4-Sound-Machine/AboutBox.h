#pragma once


// AboutBox-Dialog

class AboutBox : public CDialogEx
{
	DECLARE_DYNAMIC(AboutBox)

public:
	AboutBox(CWnd* pParent = nullptr);   // Standardkonstruktor
	virtual ~AboutBox();

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

	DECLARE_MESSAGE_MAP()
};
