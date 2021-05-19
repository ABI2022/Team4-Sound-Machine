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
public:
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedKick();
	afx_msg void OnBnClickedHihat();
	afx_msg void OnBnClickedSnare();
	afx_msg void OnBnClickedChords();
};
