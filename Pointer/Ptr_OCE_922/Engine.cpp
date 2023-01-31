#include "Engine.h"
#include <iostream>

CEngine::CEngine()
{
	Initialize();
}

CEngine::~CEngine()
{
	Finalize();
}

void CEngine::Run(void)
{
	if (m_pDev1 != nullptr) m_pDev1->Iterate();
	if (m_pDev2 != nullptr) m_pDev2->Iterate();
	if (m_pDev3 != nullptr) m_pDev3->Iterate();
	if (m_pDev4 != nullptr) m_pDev4->Iterate();
}

void CEngine::Print(void)
{
	if (m_pDev1 != nullptr) std::cout << m_pDev1->GetCount() << std::endl;
	if (m_pDev2 != nullptr) std::cout << m_pDev2->GetCount() << std::endl;
	if (m_pDev3 != nullptr) std::cout << m_pDev3->GetCount() << std::endl;
	if (m_pDev4 != nullptr) std::cout << m_pDev4->GetCount() << std::endl;

}

void CEngine::Initialize(void)
{
	if (m_pDev1 == nullptr) m_pDev1 = new CDevice(5);
	if (m_pDev2 == nullptr) m_pDev2 = new CDevice(3);
	if (m_pDev3 == nullptr) m_pDev3 = new CDevice(2);
	if (m_pDev4 == nullptr) m_pDev4 = new CDevice(1);
}

void CEngine::Finalize(void)
{// Aufräumkaskade
	if (m_pDev4 != nullptr)
	{
		delete m_pDev4;
		m_pDev4 = nullptr;
	}

	if (m_pDev3 != nullptr)
	{
		delete m_pDev3;
		m_pDev3 = nullptr;
	}

	if (m_pDev2 != nullptr)
	{
		delete m_pDev2;
		m_pDev2 = nullptr;
	}

	if (m_pDev1 != nullptr)
	{
		delete m_pDev1;
		m_pDev1 = nullptr;
	}
}
