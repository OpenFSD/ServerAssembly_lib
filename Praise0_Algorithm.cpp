#include "pch.h"
#include "Praise0_Algorithm.h"
#include <cstddef>

namespace Server_Library
{
    Praise0_Algorithm::Praise0_Algorithm()
    {
    }

    Praise0_Algorithm::~Praise0_Algorithm()
    {
    }

    void Praise0_Algorithm::Do_Praise(
        class Server_Library::Praise0_Input* ptr_In_SubSet,
        class Server_Library::Praise0_Output* ptr_Out_SubSet
    )
    {
        //ToDo: game engine array of connections
        ptr_Out_SubSet->Set_numberOfClientsConnected(ptr_Out_SubSet->Get_numberOfClientsConnected() + (__int8)1);
    }
}