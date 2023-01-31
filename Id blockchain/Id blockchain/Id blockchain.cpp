
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "CustomerData.h"
using namespace std;


//string getFileContents(ifstream&);

int main()
{
	//CCustomerData customer;
	CCustomerData customer;
	//CCustomerData* p_customer = new CCustomerData();

	//customer = new  CCustomerData();
	string sName;
	string sEmail;
	string sTel;
	int iDirektion;

	//ifstream Reader("Ar");
	//string Art = getFileContents(Reader);
	//cout << Art << endl;

		cout << "  _    _ _ " <<endl;
		cout << " | |  | (_)" << endl;
		cout << " | |__| |_ " <<endl;
		cout << " |  __  | |" <<endl;
		cout << " | |  | | |" << endl;
		cout << " |_|  |_|_|" << endl;
		cout << endl;
		cout << endl;






	cout << "(1)Daten Key Generieren          (2)Daten Abfragen" << endl;
	cin >> iDirektion;

	if (iDirektion == 1) {
		cout << "Gib deine Daten ein:" << endl;

		cout << "Name: ";
		cin >> sName;
		cout << endl << "Email:";
		cin >> sEmail;
		cout << endl << "Tel:";
		cin >> sTel;
		cout << endl;

		customer.setData(sName, sEmail, sTel);
		cout << "Deine Daten: ";
		customer.printData();
		//customer.getData();
		customer.makeKey(customer.getData());
		customer.printKey();
	}

	return 0;
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
