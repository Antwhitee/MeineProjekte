#include "Device.h"

CDevice::~CDevice()
{
	m_bIsRunning = false;
}

void CDevice::Iterate(void)
{
	m_iCount++;
}

const int CDevice::GetCount(void) const
{
	return m_iCount;
}

void CDevice::SetCount(const int& a_iCount)
{
	m_iCount = a_iCount;
}

const bool CDevice::GetRunning(void) const
{
	return m_bIsRunning;
}
