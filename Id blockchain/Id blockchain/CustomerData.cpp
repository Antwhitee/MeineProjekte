#include "CustomerData.h"
#pragma warning(disable : 4996)



void CCustomerData::setData(string a_sName, string a_sEmail, string a_sTel)
{
    vCustomData.push_back(a_sName);
    vCustomData.push_back(a_sEmail);
    vCustomData.push_back(a_sTel);
}

char* convert(const std::string& s)  // pointer
{
        char* pc = new char[s.size() + 1];  //pointer
        std::strcpy(pc, s.c_str());
        return pc;
}

void CCustomerData::makeKey(vector<string> a_sVector)
{
    vector<char*> vCharBridge; // Die brücke von string zu Char
    transform(a_sVector.begin(), a_sVector.end(), back_inserter(vCharBridge), convert); // change stringV to charV
    //for (int i = 0; i < vCharBridge.size(); i++) { cout << vCharBridge[i]; }
    for (int i = 0; i < vCharBridge.size(); i++) {
       
        long long cvi = int(*vCharBridge[i]);
        //if (cvi != 0) 
            vCustomKey.push_back(cvi);
            cout << cvi<<endl;
            //cout << vCustomKey[i];
       
        
    }
    for (rsize_t i = 0; i < vCharBridge.size(); i++) {
        delete[] vCharBridge[i];
    }

    
}

vector<string> CCustomerData::getData()
{
    return vCustomData;
}

void CCustomerData::printData()
{
    for (const string& i : vCustomData) {
        cout << i << endl;

    }
}
void CCustomerData::printKey()
{
    cout << "Dein Key:" << endl;
    for (const int& i : vCustomKey) { // const int&
      /*if(i != 0)*/
        cout << i;
    };
}
;
