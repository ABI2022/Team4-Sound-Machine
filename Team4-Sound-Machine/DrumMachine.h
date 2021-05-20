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
	afx_msg void OnBnClickedDrums();
	afx_msg void OnBnClickedKick1stop();
	afx_msg void OnBnClickedDrums1stop();
	afx_msg void OnBnClickedMetronom();
	afx_msg void OnBnClickedMetronomstop();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedPerc();
	afx_msg void OnBnClickedPerc1stopp();
	afx_msg void OnBnClickedBass();
	afx_msg void OnBnClickedBass1stopp();
	afx_msg void OnBnClickedStoppall();
	afx_msg void OnBnClickedPreset1();
	afx_msg void OnBnClickedPreset1stopp();
	afx_msg void OnBnClickedCrash();
	afx_msg void OnBnClickedGlass();
	afx_msg void OnBnClickedscratch();
	afx_msg void OnBnClickedDancevoc();
};
