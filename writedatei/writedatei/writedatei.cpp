// writedatei.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    FILE a;
    int iNumber = 40; 
    int iRange = 5;
    int iResult = 0;
    cout << "Int mmultipl: "<<iNumber<<endl;
    cout << "Range: " << iRange << endl;
    ofstream MyWriteDatey("halloDatei.txt");

    
    for (int i = 1; i <= iRange; i++) {
        
        iResult = iNumber * i;
        MyWriteDatey<< iNumber << " * " << i << " = "<< iResult << endl;

    }


    
    MyWriteDatey.open(".txt");
    return 0;
}













//
//class MyClass {
//public:
//
//    int iId;
//    string sName;
//
//
//};
//
//int main()
//{
//    int iIn;
//    string sIn;
//    cout << "Schrieb dein alter: " << endl;
//
//    cin >> iIn;
//    cout << "Schreib dein Name: " << endl;
//    cin >> iIn;
//    MyClass myObj;
//    myObj.iId = iIn;
//    myObj.sName = sIn;
//
//   
//    cout << myObj.iId<< endl<< myObj.sName;



    /*string myTextIn;
    string myText;

    ofstream MyWriteFile("newfile.txt");
    MyWriteFile << "Schreibe deine TodoListe";
    cin >> myTextIn;
    MyWriteFile << myTextIn <<endl;

    MyWriteFile.close();

    while (getline(MyWriteFile, myText)) {
        cout << myText;
    }
    MyWriteFile.close();*/
   

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
