#include "Truesight.h"
#include <iostream>
#include <Windows.h>

int main()
{
	Truesight::Init();
	if (Truesight::GetError())
	{
		std::cout << Truesight::GetError().str() << "\n";
	}

	while (true)
	{
		std::cout << Truesight::HasDebugger() << std::endl;
		Sleep(100);
	}
}
