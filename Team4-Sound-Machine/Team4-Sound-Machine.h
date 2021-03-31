
// Team4-Sound-Machine.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CTeam4SoundMachineApp:
// Siehe Team4-Sound-Machine.cpp für die Implementierung dieser Klasse
//

class CTeam4SoundMachineApp : public CWinApp
{
public:
	CTeam4SoundMachineApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CTeam4SoundMachineApp theApp;
