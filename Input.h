#pragma once
#include "Framework_Server.h"
#include "Input_Control.h"

namespace Server_Library
{
    class Input
    {
    public:
        Input();
        virtual ~Input();
        void Initialise_Control();

        class Input_Control* Get_Input_Control();
        class Object* Get_InputBufferSubset();
        __int8 GetPraiseEventId();

        void Set_Subset_InputBuffer(Object* value);
        void SetPraiseEventId(__int8 value);

    protected:

    private:
        static class Input_Control* ptr_Input_Control;
        static class Object* ptr_Buffer_SubSet_InputPraise;
        static __int8 ptr_in_praiseEventId;

    };
}