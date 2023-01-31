// UnitTesting.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Calculator.h"
#include "FunkTest.h"
#include "ErrorHandler.h"

CCalculator* pCalc = nullptr;
CFunkTest* pFunk = nullptr;
CErrorHandler* pError = nullptr;

int OnAddition(int a_iHLS, int a_iRHS) {
	if (pCalc != nullptr)pCalc->Addition(a_iHLS, a_iRHS);
	else return 0;
}

void Init(void) {
	if (pCalc == nullptr) pCalc = new CCalculator();
	if (pFunk == nullptr) pFunk = new CFunkTest(OnAddition);
	if (pError == nullptr) pError = new CErrorHandler();

}

void Run() {
	if (pFunk != nullptr&& pError!=nullptr)pError->ReciveMessage( pFunk->InvokeTest());
}

void Fin(void) {

	if (pError != nullptr) {
		pError = nullptr;
	}

	if (pFunk != nullptr) {
		delete pFunk;
		pFunk = nullptr;
	}
	if (pCalc != nullptr) {
		delete pFunk;
		pFunk = nullptr;
	}
}

int main()
{
	Init();
	Run();
	Fin();

}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
