#ifndef FUNKTEST_H
#define FUNKTEST_H


#include <iostream>

class CFunkTest
{
public:
	//Ctor
	inline CFunkTest(int(*m_pAddTest)(int, int)) : m_pAddTest(m_pAddTest) {}

	uint8_t InvokeTest(void);

private:
	//Konstanten
	const int M_I_LHS_INPUT = 1;
	const int M_I_RHS_INPUT = 1;
	const int M_I_OUTPUT = 2;


	//Member Variablen
	int(*m_pAddTest)(int, int) = nullptr;
};

#endif // !FUNKTEST_H

