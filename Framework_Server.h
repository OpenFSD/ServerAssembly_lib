#pragma once
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include "Server.h"
#include "Data.h"
#include "Input.h"
#include "Output.h"
#include "Praise0_Input.h"
#include "Praise1_Input.h"
#include "Praise0_Output.h"
#include "Praise1_Output.h"
#include "WriteEnable_Stack_Server_InputAction_Framework.h"
#include "WriteEnable_Stack_Server_OutputRecieve_Framework.h"

namespace Server_Library
{
    class Framework_Server
    {
    public:
        Framework_Server();
        virtual ~Framework_Server();
        static void Create_Hosting_Server();
        static class Server* Get_HostServer();
//get
//  praise 1     
        static float Get_Praise1_pitch();
        static float Get_Praise1_yaw();

//set
//  praise 1
        static void Set_Praise1_mousePos_X(__int16 value);
        static void Set_Praise1_mousePos_Y(__int16 value);
    protected:

    private:
        static class Server_Library::Server* ptr_HostServer;
    };
}