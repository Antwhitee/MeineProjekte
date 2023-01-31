#include "FunkTest.h"
#include "ErrorHandler.h"
#include <iostream>

using namespace std;

uint8_t CFunkTest::InvokeTest()
{
	uint8_t errResult = static_cast<uint8_t>(ErrorMsg::EM_SUCCES);

	auto result = m_pAddTest(M_I_LHS_INPUT, M_I_RHS_INPUT);


	if (result > M_I_OUTPUT) {
		cout << "Der Output ist" << result << " groe�er als gew�nscht";
		errResult |= static_cast<uint8_t>(ErrorMsg::EM_ERR_IS_GREATER);
	}
	else if (result < M_I_OUTPUT) {
		cout << "Der Output ist" << result << " kleiner als gew�nscht";

		errResult |= static_cast<uint8_t>(ErrorMsg::EM_ERR_IS_LESSER);


	}
	else if (result != M_I_OUTPUT) {
		cout << "Der Output ist" << result << " nicht der gew�nschte";

		errResult |= static_cast<uint8_t>(ErrorMsg::EM_ERR_IS_NOT);

	}
	else {
		cout << "Der Output ist " << result<<endl;



	}
	return errResult;
}
