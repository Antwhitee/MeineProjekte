#pragma once
#include <cstdint>
enum class ErrorMsg : uint8_t {
	EM_SUCCES = 0x0,									//0000 0000  0
	EM_ERR_IS_GREATER = 0x1,							//0000 0001  1
	EM_ERR_IS_LESSER = EM_ERR_IS_GREATER << 0x1,		//0000 0010  2
	EM_ERR_IS_NOT = EM_ERR_IS_LESSER << 0x1				//0000 0100  4

};
class CErrorHandler
{
private:


public:
	void ReciveMessage(const uint8_t& a_iMessage);

};

