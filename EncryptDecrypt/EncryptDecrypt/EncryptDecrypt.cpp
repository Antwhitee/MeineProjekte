

#include <iostream>
#include <vector>
using namespace std;



int iSetKey = 0;
const int I_LETTER_MOVER = 6 + iSetKey;

vector <int> Parse(string a_sInDecrypt)
{
	int iBuffer = 0;

	vector <int> intSaver = {};
	intSaver = vector <int>();

	for (size_t i = 0; i < a_sInDecrypt.length(); i++)
	{


		if (a_sInDecrypt[i] != '.' )
		{
			if (i != 0)
			{

				if (a_sInDecrypt[i - 1] == '.' )
				{
					intSaver.push_back(iBuffer);
					iBuffer = 0;
				}
				else
				{
					iBuffer *= 10;

				}
			}

			iBuffer += a_sInDecrypt.at(i) - 48;
		}

	}


	intSaver.push_back(iBuffer);


	return intSaver;
}



vector <int> EncryptCesar(string a_sInput)
{
	vector <int> integerSaver = {};
	integerSaver = vector <int>(a_sInput.length());


	for (size_t i = 0; i < a_sInput.length(); i++)
	{
		integerSaver[i] = a_sInput.at(i);
		integerSaver[i] += I_LETTER_MOVER;
		cout << integerSaver[i] << ".";
	}



	return integerSaver;
}

string DecreyptCesar(vector <int> a_encrypt)
{
	string sOut;
	for (size_t i = 0; i < a_encrypt.size(); i++)
	{
		int iBuffer = a_encrypt[i] - I_LETTER_MOVER;
		sOut.push_back(iBuffer);


	}
	cout << sOut << endl;

	return sOut;
}


int main()
{
	iSetKey;
	int iStarten = 0;
	int iInput = 0;
	string sDecrypt = "";
	string sEncrypt = "";
	cout << "Um das Programm zu starten druecke die 1: " << endl;
	cin >> iStarten;
	while(iStarten == 1){
	

	cout << "Gib deinen Schluessel ein: " << endl;
	cin >> iSetKey;
	cout << endl;

	if(iSetKey){
	cout << "(1)Chat Verschluesseln" << endl;
	cout << "(2)Chat Entschluesseln" << endl;
	cin >> iInput;
	}


	if (iInput == 1) {
		cout << "Gib bitt dein Text ein: " << endl;
		cin >> sEncrypt;
		EncryptCesar(sEncrypt);
		cout << endl;

	}
	else {
		cout << "Gib bitt dein Text ein zum entschluesseln: " << endl;

		cin >> sDecrypt;

		vector <int> intSaver = {};
		intSaver = Parse(sDecrypt);
		DecreyptCesar(intSaver);



	}



	}
	return 0;
}




