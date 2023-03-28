
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


