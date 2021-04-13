// AboutBox.cpp: Implementierungsdatei
//

#include "pch.h"
#include "Team4-Sound-Machine.h"
#include "AboutBox.h"
#include "afxdialogex.h"


// AboutBox-Dialog

IMPLEMENT_DYNAMIC(AboutBox, CDialogEx)

AboutBox::AboutBox(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ABOUTBOX, pParent)
{

}

AboutBox::~AboutBox()
{
}

void AboutBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AboutBox, CDialogEx)
END_MESSAGE_MAP()


// AboutBox-Meldungshandler
