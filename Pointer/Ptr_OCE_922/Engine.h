#ifndef ENGINE_H
#define ENGINE_H

#include "Device.h"

class CEngine
{
public:
	//Ctor/Dtor
	CEngine();
	~CEngine();

	//Methoden
	void Run(void);
	void Print(void);

private:
	// Loop
	void Initialize(void);
	void Finalize(void);

	// Member-Variablen
	CDevice* m_pDev1 = nullptr;
	CDevice* m_pDev2 = nullptr;
	CDevice* m_pDev3 = nullptr;
	CDevice* m_pDev4 = nullptr;
};


#endif // !ENGINE_H

