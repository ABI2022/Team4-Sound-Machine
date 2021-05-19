// DrumMachine.cpp: Implementierungsdatei
//

#include "pch.h"
#include "Team4-Sound-Machine.h"
#include "DrumMachine.h"
#include "afxdialogex.h"


// DrumMachine-Dialog

IMPLEMENT_DYNAMIC(DrumMachine, CDialogEx)

DrumMachine::DrumMachine(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DRUMMACHINE, pParent)
{

}

DrumMachine::~DrumMachine()
{
}

void DrumMachine::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DrumMachine, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON16, &DrumMachine::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON18, &DrumMachine::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON17, &DrumMachine::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_KICK, &DrumMachine::OnBnClickedKick)
	ON_BN_CLICKED(IDC_HIHAT, &DrumMachine::OnBnClickedHihat)
	ON_BN_CLICKED(IDC_SNARE, &DrumMachine::OnBnClickedSnare)
	ON_BN_CLICKED(IDC_CHORDS, &DrumMachine::OnBnClickedChords)
END_MESSAGE_MAP()


// DrumMachine-Meldungshandler


void DrumMachine::OnBnClickedKick()
{
	// TODO: F�gen Sie hier Ihren Handlercode f�r Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedHihat()
{
	// TODO: F�gen Sie hier Ihren Handlercode f�r Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedSnare()
{
	// TODO: F�gen Sie hier Ihren Handlercode f�r Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedChords()
{
	// TODO: F�gen Sie hier Ihren Handlercode f�r Benachrichtigungen des Steuerelements ein.
}
