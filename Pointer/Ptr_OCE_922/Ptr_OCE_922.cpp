// Ptr_OCE_922.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Engine.h"
#include <memory>

template <typename T> 
using uPtr = std::unique_ptr <T>;

uPtr<CEngine> pSmartEngine = nullptr; // smart pointer
CEngine* pEngine = nullptr; // raw pointer
bool bIsRunning = false;

void While(bool a_bIsValid)
{
	if (a_bIsValid == true)
	{
		if (pEngine != nullptr)
		{
			pEngine->Run();
			pEngine->Print();
		}
		pSmartEngine->Run();
		pSmartEngine->Print();

		While(a_bIsValid);
	}
}

void Initialize() //Setup
{
	bIsRunning = true;
	if (pEngine == nullptr) pEngine = new CEngine();
	pSmartEngine = std::make_unique<CEngine>();
}

void Update() //Loop
{
	While(bIsRunning);
	//while (bIsRunning)
	//{
	//	if (pEngine != nullptr)
	//	{
	//		pEngine->Run();
	//		pEngine->Print();
	//	}
	//	pSmartEngine->Run();
	//	pSmartEngine->Print();

	//	bIsRunning = false;
	//}
}

void Finalize()
{
	if (pEngine != nullptr)
	{
		delete pEngine;
		pEngine = nullptr;
	}
	bIsRunning = false;
}

int main()
{
	// Setup konfiguriert dein System
	Initialize();

	// Loop
	Update();

	// Finalize
	Finalize();



	return bIsRunning;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
