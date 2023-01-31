#ifndef DEVICE_H
#define DEVICE_H


class CDevice
{
public:
	// Ctor/Dtor
	inline CDevice(const int& a_iCount)
		: m_iCount(a_iCount), m_bIsRunning(true) {}

	~CDevice();

	// Methoden
	void Iterate(void);

	// Getter/Setter
	const int GetCount( void ) const;
	void SetCount( const int& a_iCount );

	const bool GetRunning(void) const;

private:
	// Member-Variablen
	int m_iCount = 0;
	bool m_bIsRunning = false;

};


#endif // !DEVICE_H

