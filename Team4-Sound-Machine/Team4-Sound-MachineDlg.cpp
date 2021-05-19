
// Team4-Sound-MachineDlg.cpp: Implementierungsdatei
//

#include "pch.h"
#include "framework.h"
#include "Team4-Sound-Machine.h"
#include "Team4-Sound-MachineDlg.h"
#include "DrumMachine.h"
#include "AboutBox.h"
#include "afxdialogex.h"
#include <Mmsystem.h>
#include <mciapi.h>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg-Dialogfeld für Anwendungsbefehl "Info"

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

// Implementierung
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTeam4SoundMachineDlg-Dialogfeld



CTeam4SoundMachineDlg::CTeam4SoundMachineDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEAM4SOUNDMACHINE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTeam4SoundMachineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTeam4SoundMachineDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_DRUMMACHINE, &CTeam4SoundMachineDlg::OnBnClickedDrummachine)
	ON_BN_CLICKED(ID_APP_ABOUT, &CTeam4SoundMachineDlg::OnBnClickedAppAbout)
	ON_BN_CLICKED(IDC_BUTTONTEST, &CTeam4SoundMachineDlg::OnBnClickedButtontest)
	ON_BN_CLICKED(IDC_BUTTON2, &CTeam4SoundMachineDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTeam4SoundMachineDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CTeam4SoundMachineDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CTeam4SoundMachineDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CTeam4SoundMachineDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON8, &CTeam4SoundMachineDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON7, &CTeam4SoundMachineDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CTeam4SoundMachineDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CTeam4SoundMachineDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CTeam4SoundMachineDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CTeam4SoundMachineDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CTeam4SoundMachineDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CTeam4SoundMachineDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CTeam4SoundMachineDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CTeam4SoundMachineDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CTeam4SoundMachineDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CTeam4SoundMachineDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CTeam4SoundMachineDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CTeam4SoundMachineDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CTeam4SoundMachineDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON29, &CTeam4SoundMachineDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CTeam4SoundMachineDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CTeam4SoundMachineDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CTeam4SoundMachineDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CTeam4SoundMachineDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CTeam4SoundMachineDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CTeam4SoundMachineDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CTeam4SoundMachineDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CTeam4SoundMachineDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CTeam4SoundMachineDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CTeam4SoundMachineDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CTeam4SoundMachineDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CTeam4SoundMachineDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CTeam4SoundMachineDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CTeam4SoundMachineDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CTeam4SoundMachineDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &CTeam4SoundMachineDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CTeam4SoundMachineDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CTeam4SoundMachineDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CTeam4SoundMachineDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CTeam4SoundMachineDlg::OnBnClickedButton49)
END_MESSAGE_MAP()


// CTeam4SoundMachineDlg-Meldungshandler

BOOL CTeam4SoundMachineDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Hinzufügen des Menübefehls "Info..." zum Systemmenü.

	// IDM_ABOUTBOX muss sich im Bereich der Systembefehle befinden.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Symbol für dieses Dialogfeld festlegen.  Wird automatisch erledigt
	//  wenn das Hauptfenster der Anwendung kein Dialogfeld ist
	SetIcon(m_hIcon, TRUE);			// Großes Symbol verwenden
	SetIcon(m_hIcon, FALSE);		// Kleines Symbol verwenden

	// TODO: Hier zusätzliche Initialisierung einfügen

	return TRUE;  // TRUE zurückgeben, wenn der Fokus nicht auf ein Steuerelement gesetzt wird
}

void CTeam4SoundMachineDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// Wenn Sie dem Dialogfeld eine Schaltfläche "Minimieren" hinzufügen, benötigen Sie
//  den nachstehenden Code, um das Symbol zu zeichnen.  Für MFC-Anwendungen, die das 
//  Dokument/Ansicht-Modell verwenden, wird dies automatisch ausgeführt.

void CTeam4SoundMachineDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Gerätekontext zum Zeichnen

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Symbol in Clientrechteck zentrieren
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Symbol zeichnen
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Die System ruft diese Funktion auf, um den Cursor abzufragen, der angezeigt wird, während der Benutzer
//  das minimierte Fenster mit der Maus zieht.
HCURSOR CTeam4SoundMachineDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CTeam4SoundMachineDlg::OnBnClickedDrummachine()
{
	DrumMachine* drummachine = new DrumMachine();
	drummachine->DoModal();

	delete drummachine;
}


void CTeam4SoundMachineDlg::OnBnClickedAppAbout()
{
	AboutBox* credits = new AboutBox();
	credits->DoModal();

	delete credits;
}


void CTeam4SoundMachineDlg::OnBnClickedButtontest() // Erklärung vom Sound-Abspielen
{
	// const wchar_t indiv[] = (_T("test")); / Für umbenennen --> Name wird in "indiv" gespeichert und kann somit in SetWindwText eingesetzt werden
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\schick.mp3"), NULL, 0, NULL); // öffnet mp3
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\schick.mp3 from 0"), NULL, 0, NULL); //spielt mp3 bei jedem klick von vorne
	GetDlgItem(IDC_BUTTONTEST)->SetWindowText(_T("X")); // Feedback vom angewählten Button
	Sleep (1000);
	GetDlgItem(IDC_BUTTONTEST)->SetWindowText(_T("Uhh Schick!")); // Einsetzen vom Individuellen Text oder Vorherigem
}

void CTeam4SoundMachineDlg::OnBnClickedButton2()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\hehe_boi.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\hehe_boi.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("Hehe Boi"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton3()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\monke.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\monke.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("Monke"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton4()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\reingeorgelt.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\reingeorgelt.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("Reingeorgelt"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton5()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\nachmittag_bier.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\nachmittag_bier.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("Bier"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton6()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\hinauslaufen.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\hinauslaufen.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("Hinauslaufen"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton8()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Jagi.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Jagi.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("Jägermeister"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton7()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Fabio.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Fabio.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("Fabio"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton9()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\orangensaft.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\orangensaft.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("Orangensaft"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton10()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\blaues_licht.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\blaues_licht.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("Blaulicht"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton11()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Bitconnect.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Bitconnect.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("Bitconnect"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton12()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\landvogt.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\landvogt.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("Landvogt"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton13()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\fuenf_sek.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\fuenf_sek.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("5 Sekunden"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton14()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Boss.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Boss.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("Boss"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton15()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\PH.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\PH.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("\x28 \x20 \x361 \xb0 \x20 \x35c \x296 \x20 \x361 \xb0 \x29")); //ist nen feature
}



void CTeam4SoundMachineDlg::OnBnClickedButton16()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton17()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton18()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton19()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton20()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton21()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton29()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton30()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton31()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton32()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton33()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton34()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void CTeam4SoundMachineDlg::OnBnClickedButton35()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}



//Individuelle Buttons (Siehe Bedienungsanleitung)
void CTeam4SoundMachineDlg::OnBnClickedButton36() 
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv1.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON36)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON36)->SetWindowText(_T("Indiv 1"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton37()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv2.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv2.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("Indiv 2"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton38()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv3.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv3.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("Indiv 3"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton39()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv4.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv4.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("Indiv 4"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton40()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv5.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv5.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("Indiv 5"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton41()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv6.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv6.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON41)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON41)->SetWindowText(_T("Indiv 6"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton42()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv7.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv7.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("Indiv 7"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton43()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv8.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv8.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON43)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON43)->SetWindowText(_T("Indiv 8"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton44()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv9.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv9.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON44)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON44)->SetWindowText(_T("Indiv 9"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton45()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv10.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv10.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON45)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON45)->SetWindowText(_T("Indiv 10"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton46()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv11.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv11.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON46)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON46)->SetWindowText(_T("Indiv 11"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton47()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv12.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv12.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON47)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON47)->SetWindowText(_T("Indiv 12"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton48()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv13.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv13.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON48)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON48)->SetWindowText(_T("Indiv 13"));
}


void CTeam4SoundMachineDlg::OnBnClickedButton49()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\indiv14.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\indiv14.mp3 from 0"), NULL, 0, NULL);
	GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("X"));
	Sleep(1000);
	GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("Indiv 14"));
}
