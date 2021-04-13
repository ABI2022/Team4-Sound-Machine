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
END_MESSAGE_MAP()


// DrumMachine-Meldungshandler
