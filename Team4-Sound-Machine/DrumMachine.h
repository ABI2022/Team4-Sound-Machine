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
	afx_msg void OnBnClickedKick();
	afx_msg void OnBnClickedHihat();
	afx_msg void OnBnClickedSnare();
	afx_msg void OnBnClickedChords();
	afx_msg void OnBnClickedKick1stop();
	afx_msg void OnBnClickedDrums1stop();
	afx_msg void OnBnClickedMetronom();
	afx_msg void OnBnClickedMetronomstop();
};
