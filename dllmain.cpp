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

extern "C" __declspec(dllexport) void Create_ConcurrentQue_ServerSide()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Create_ConcurrentQue();
}
extern "C" __declspec(dllexport) void Create_Hosting_Server()
{
    Server_Library::Framework_Server::Create_Hosting_Server();
}
extern "C" __declspec(dllexport) void Create_Write_Stack_Server_InputAction()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_InputPraise()->Create_WriteEnable();
}
extern "C" __declspec(dllexport) void Create_Write_Stack_Server_OutputSend()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_OutputPraise()->Create_WriteEnable();
}
extern "C" __declspec(dllexport) void End_Write_Stack_Server_InputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_InputPraise()->Write_End(coreId);
}
extern "C" __declspec(dllexport) void End_Write_Stack_Server_OutputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_OutputPraise()->Write_End(coreId);
}
extern "C" __declspec(dllexport) void Flip_InBufferToWrite()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Flip_Input_DoubleBuffer();
}
extern "C" __declspec(dllexport) void Flip_OutBufferToWrite()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Flip_Output_DoubleBuffer();
}
extern "C" __declspec(dllexport) void Request_Launch(__int8 concurrent_CoreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Request_Wait_Launch_ConcurrentThread(concurrent_CoreId);
}
extern "C" __declspec(dllexport) void Request_Write_Stack_Server_InputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_InputPraise()->Write_Start(coreId);
}
extern "C" __declspec(dllexport) void Request_Write_Stack_Server_OutputAction(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_WriteEnable_Stack_Server_OutputPraise()->Write_Start(coreId);
}
extern "C" __declspec(dllexport) void Thread_End(__int8 concurrent_CoreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Concurrent_Thread_End(concurrent_CoreId);
}
extern "C" __declspec(dllexport) void Push_Stack_InputPraises(__int8 coreId)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Get_Data_Control()->Pop_Stack_InputPraises(coreId);
}
extern "C" __declspec(dllexport) void Pop_Stack_Output()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->Get_Data_Control()->Pop_Stack_Output();
}

extern "C" __declspec(dllexport) void Get_coreId_To_Launch()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Get_coreId_To_Launch();
}
extern "C" __declspec(dllexport) void Get_Flag_Active()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Get_Flag_Active();
}
extern "C" __declspec(dllexport) void Get_Flag_Idle()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Get_Flag_Idle();
}
extern "C" __declspec(dllexport) void Get_State_LaunchBit()
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Execute()->Get_LaunchConcurrency_ServerSide()->Get_State_LaunchBit();

}

extern "C" __declspec(dllexport) __int8 Get_PraiseEventId()
{
    return Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->GetPraiseEventId();
}
extern "C" __declspec(dllexport) float Get_Praise1_pitch()
{
    return Server_Library::Framework_Server::Get_Praise1_pitch();
}
extern "C" __declspec(dllexport) float Get_Praise1_yaw()
{
    return Server_Library::Framework_Server::Get_Praise1_yaw();
}

extern "C" __declspec(dllexport) void Set_PraiseEventId(__int8 value)
{
    Server_Library::Framework_Server::Get_HostServer()->Get_Data()->GetBuffer_InputFrontDouble()->SetPraiseEventId(value);
}
extern "C" __declspec(dllexport) void Set_Praise1_mousePos_X(__int16 value)
{
    Server_Library::Framework_Server::Set_Praise1_mousePos_X(value);
}
extern "C" __declspec(dllexport) void Set_Praise1_mousePos_Y(__int16 value)
{
    Server_Library::Framework_Server::Set_Praise1_mousePos_Y(value);
}