
// Team4-Sound-MachineDlg.h: Headerdatei
//

#pragma once


// CTeam4SoundMachineDlg-Dialogfeld
class CTeam4SoundMachineDlg : public CDialogEx
{
// Konstruktion
public:
	CTeam4SoundMachineDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEAM4SOUNDMACHINE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
