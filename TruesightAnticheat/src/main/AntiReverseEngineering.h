#pragma once
#include <Windows.h>

namespace Truesight {
    bool HasDebugger() {
        CONTEXT ctx = { 0 };
        ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;

        auto hThread = GetCurrentThread();

        if (GetThreadContext(hThread, &ctx) == 0)
        {
            return false;
        }

        if (ctx.Dr0 != 0 || ctx.Dr1 != 0 || ctx.Dr2 != 0 || ctx.Dr3 != 0)
            return true;

        return false;
        }
}