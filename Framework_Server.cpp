#include "pch.h"
#include "Framework_Server.h"
#include <cstddef>
#include <iostream>

namespace Server_Library
{
	class Server_Library::Server* Framework_Server::ptr_HostServer;

	Framework_Server::Framework_Server()
	{
		std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;
	}

	Framework_Server::~Framework_Server()
	{

	}

	void Framework_Server::Create_Hosting_Server()
	{
		ptr_HostServer = new class Server_Library::Server();
		while (ptr_HostServer == NULL) { /* wait untill created */ }
		std::cout << "Created => Server_Library::Server()" << std::endl;
		ptr_HostServer->Get_Execute()->Initialise();
		ptr_HostServer->Get_Execute()->Initialise_Threads();
	}

	class Server_Library::Server* Framework_Server::Get_HostServer()
	{
		return ptr_HostServer;
	}

	float Framework_Server::Get_Praise1_pitch()
	{
		return reinterpret_cast <class Praise1_Output*>(Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_OututFrontDouble()->Get_OutputBuffer_Subset())->GetPitch();
	}

	float Framework_Server::Get_Praise1_yaw()
	{
		return reinterpret_cast <class Praise1_Output*>(Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_OututFrontDouble()->Get_OutputBuffer_Subset())->GetYaw();
	}

	void Framework_Server::Set_Praise1_mousePos_X(__int16 value)
	{
		reinterpret_cast <class Praise1_Input*>(Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->Get_InputBufferSubset())->Set_mouse_X(value);
	}

	void Framework_Server::Set_Praise1_mousePos_Y(__int16 value)
	{
		reinterpret_cast <class Praise1_Input*>(Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->Get_InputBufferSubset())->Set_mouse_Y(value);
	}
}