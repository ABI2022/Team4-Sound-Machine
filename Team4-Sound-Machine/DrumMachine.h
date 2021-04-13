#pragma once


// DrumMachine-Dialog

class DrumMachine : public CDialogEx
{
	DECLARE_DYNAMIC(DrumMachine)

public:
	DrumMachine(CWnd* pParent = nullptr);   // Standardkonstruktor
	virtual ~DrumMachine();

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DRUMMACHINE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

	DECLARE_MESSAGE_MAP()
};
