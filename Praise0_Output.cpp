#include "pch.h"
#include "Praise0_Output.h"
#include <cstddef>

namespace Server_Library
{
	__int8 Praise0_Output::numberOfClientsConnected;

	Praise0_Output::Praise0_Output()
	{
		numberOfClientsConnected = 0;
	}

	Praise0_Output::~Praise0_Output()
	{
	}
	__int8 Praise0_Output::Get_numberOfClientsConnected()
	{
		return numberOfClientsConnected;
	}
	void Praise0_Output::Set_numberOfClientsConnected(__int8 value)
	{
		numberOfClientsConnected = value;
	}
}