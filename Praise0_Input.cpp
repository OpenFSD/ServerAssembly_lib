#include "pch.h"
#include "Praise0_Input.h"

namespace Server_Library
{
	int Praise0_Input::connection;

	Praise0_Input::Praise0_Input()
	{
		connection = 0;
	}

	Praise0_Input::~Praise0_Input()
	{
	
	}

	int Praise0_Input::Get_Connection()
	{
		return connection;
	}
	void Praise0_Input::Set_Connection(int value)
	{
		connection = value;
	}
}