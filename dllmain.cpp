// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern "C" __declspec(dllexport) void ServerCallTo_Create_Hosting_Server()
{
    Server_Library::Framework_Server::Create_Hosting_Server();
}
extern "C" __declspec(dllexport) void ServerCallTo_End_Write_Stack_Server_InputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_InputPraise()->Write_End(coreId);
}
extern "C" __declspec(dllexport) void ServerCallTo_End_Write_Stack_Server_OutputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_OutputPraise()->Write_End(coreId);
}
extern "C" __declspec(dllexport) void ServerCallTo_Flip_InBufferToWrite()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Flip_Input_DoubleBuffer();
}
extern "C" __declspec(dllexport) void ServerCallTo_Flip_OutBufferToWrite()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Flip_Output_DoubleBuffer();
}
extern "C" __declspec(dllexport) void ServerCallTo_Request_Write_Stack_Server_InputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_InputPraise()->Write_Start(coreId);
}
extern "C" __declspec(dllexport) void ServerCallTo_Request_Write_Stack_Server_OutputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_OutputPraise()->Write_Start(coreId);
}
extern "C" __declspec(dllexport) void ServerCallTo_Pop_Stack_InputPraises(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Get_Data_Control()->Pop_Stack_InputPraises(coreId);
}
extern "C" __declspec(dllexport) void ServerCallTo_Pop_Stack_Output()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Get_Data_Control()->Pop_Stack_Output();
}
extern "C" __declspec(dllexport) __int8 ServerCallTo_Get_PraiseEventId()
{
    return Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->GetPraiseEventId();
}
extern "C" __declspec(dllexport) float ServerCallTo_Get_Praise1_pitch()
{
    return Server_Library::Framework_Server::Get_Praise1_pitch();
}
extern "C" __declspec(dllexport) float ServerCallTo_Get_Praise1_yaw()
{
    return Server_Library::Framework_Server::Get_Praise1_yaw();
}
extern "C" __declspec(dllexport) void ServerCallTo_Set_PraiseEventId(__int8 value)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->SetPraiseEventId(value);
}
extern "C" __declspec(dllexport) void ServerCallTo_Set_Praise1_mousePos_X(__int16 value)
{
    Server_Library::Framework_Server::Set_Praise1_mousePos_X(value);
}
extern "C" __declspec(dllexport) void ServerCallTo_Set_Praise1_mousePos_Y(__int16 value)
{
    Server_Library::Framework_Server::Set_Praise1_mousePos_Y(value);
}