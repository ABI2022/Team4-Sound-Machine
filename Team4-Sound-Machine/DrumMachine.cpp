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
	ON_BN_CLICKED(IDC_STOPPALL, &DrumMachine::OnBnClickedStoppall)
	ON_BN_CLICKED(IDC_PRESET1, &DrumMachine::OnBnClickedPreset1)
	ON_BN_CLICKED(IDC_PRESET1STOPP, &DrumMachine::OnBnClickedPreset1stopp)
	ON_BN_CLICKED(IDC_Crash, &DrumMachine::OnBnClickedCrash)
	ON_BN_CLICKED(IDC_Glass, &DrumMachine::OnBnClickedGlass)
	ON_BN_CLICKED(IDC_scratch, &DrumMachine::OnBnClickedscratch)
	ON_BN_CLICKED(IDC_DanceVoc, &DrumMachine::OnBnClickedDancevoc)
END_MESSAGE_MAP()


// DrumMachine-Meldungshandler

// Stopp & Beenden
void DrumMachine::OnBnClickedStoppall()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Perc1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Bass1.mp3"), NULL, 0, NULL);

	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Preset1.mp3"), NULL, 0, NULL);

	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\FadeOut.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\FadeOut.mp3 from 0"), NULL, 0, NULL);
}



void DrumMachine::OnBnClickedCancel()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Kick1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Drums1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Perc1.mp3"), NULL, 0, NULL);
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Bass1.mp3"), NULL, 0, NULL);

	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Preset1.mp3"), NULL, 0, NULL);
	CDialogEx::OnCancel();
}



//Loops 1
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



void DrumMachine::OnBnClickedPerc()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Perc1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Perc1.mp3 repeat"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedPerc1stopp()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Perc1.mp3"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedBass()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Bass1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Bass1.mp3 repeat"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedBass1stopp()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Bass1.mp3"), NULL, 0, NULL);
}



void DrumMachine::OnBnClickedPreset1()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\Preset1.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\Preset1.mp3 repeat"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedPreset1stopp()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\Preset1.mp3"), NULL, 0, NULL);
}



//SFX
void DrumMachine::OnBnClickedCrash()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\crash.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\crash.mp3 from 0"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedGlass()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\glass.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\glass.mp3 from 0"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedscratch()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\scratch.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\scratch.mp3 from 0"), NULL, 0, NULL);
}


void DrumMachine::OnBnClickedDancevoc()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\dance.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\dance.mp3 from 0"), NULL, 0, NULL);
}



//Metronom
void DrumMachine::OnBnClickedMetronom()
{
	mciSendString(_T("open ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
	mciSendString(_T("play ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3 repeat"), NULL, 0, NULL);
}

void DrumMachine::OnBnClickedMetronomstop()
{
	mciSendString(_T("stop ..\\Team4-Sound-Machine\\sounds\\130BPM.mp3"), NULL, 0, NULL);
}