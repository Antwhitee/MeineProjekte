#include "ErrorHandler.h"
#include <iostream>
using namespace std;
void CErrorHandler::ReciveMessage(const uint8_t& a_iMessage)
{
	auto msg = static_cast<ErrorMsg>(a_iMessage);
	switch (msg)
	{
	case ErrorMsg::EM_SUCCES:
		cout << "Program closed successful"<<endl;
		break;
	case ErrorMsg::EM_ERR_IS_GREATER:
		cout << "ERROR 1: Adition Function Result was to large" << endl;
		break;
	case ErrorMsg::EM_ERR_IS_LESSER:
		cout << "ERROR 2: Adition Function Result is to small" << endl;
		break;
	case ErrorMsg::EM_ERR_IS_NOT:
		cout << "ERROR 3: Adition is not correct" << endl;

		break;
	default:
		break;
	}
}
