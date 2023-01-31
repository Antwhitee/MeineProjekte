#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
using namespace std;


class CCustomerData
{

public:
	void setData(string a_sName, string a_sEmail, string a_sTel);
	vector<string> getData();
	void makeKey(vector<string> a_sVector);

	void printData();
	void printKey();



private:
	vector<string>vCustomData{sName, sEmail, sTel};
	vector<int>vCustomKey;
	//vector<char*>vCharBridge;

	string sBuffer; 

	
	string sName;
	string sEmail;
	string sTel;
	
	

};

