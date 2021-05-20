// DrumMachine.cpp: Implementierungsdatei
//

#include "pch.h"
#include "framework.h"
#include "Team4-Sound-Machine.h"
#include "DrumMachine.h"
#include "afxdialogex.h"
#include <Mmsystem.h>
#include <mciapi.h>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")


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
	ON_BN_CLICKED(IDC_KICK, &DrumMachine::OnBnClickedKick)
	ON_BN_CLICKED(IDC_SNARE, &DrumMachine::OnBnClickedDrums)
	ON_BN_CLICKED(IDC_KICK1STOP, &DrumMachine::OnBnClickedKick1stop)
	ON_BN_CLICKED(IDC_DRUMS1STOP, &DrumMachine::OnBnClickedDrums1stop)
	ON_BN_CLICKED(IDC_METRONOM, &DrumMachine::OnBnClickedMetronom)
	ON_BN_CLICKED(IDC_METRONOMSTOP, &DrumMachine::OnBnClickedMetronomstop)
	ON_BN_CLICKED(IDCANCEL, &DrumMachine::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_PERC, &DrumMachine::OnBnClickedPerc)
	ON_BN_CLICKED(IDC_PERC1STOPP, &DrumMachine::OnBnClickedPerc1stopp)
	ON_BN_CLICKED(IDC_Bass, &DrumMachine::OnBnClickedBass)
	ON_BN_CLICKED(IDC_BASS1STOPP, &DrumMachine::OnBnClickedBass1stopp)
END_MESSAGE_MAP()


// DrumMachine-Meldungshandler


void DrumMachine::OnBnClickedKick()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3 repeat"), NULL, 0, NULL);
}

void DrumMachine::OnBnClickedKick1stop()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3"), NULL, 0, NULL);
}



void DrumMachine::OnBnClickedDrums()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3 repeat"), NULL, 0, NULL);
}

void DrumMachine::OnBnClickedDrums1stop()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3"), NULL, 0, NULL);
}




void DrumMachine::OnBnClickedMetronom()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3 repeat"), NULL, 0, NULL);
}

void DrumMachine::OnBnClickedMetronomstop()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
}



void DrumMachine::OnBnClickedCancel()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
	CDialogEx::OnCancel();
}


void DrumMachine::OnBnClickedPerc()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedPerc1stopp()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedBass()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}


void DrumMachine::OnBnClickedBass1stopp()
{
	// TODO: Fügen Sie hier Ihren Handlercode für Benachrichtigungen des Steuerelements ein.
}
