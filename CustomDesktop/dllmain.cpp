﻿// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"
#include "AnimatedDesktop.h"


CAnimatedDesktop g_customDesktop;


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		g_customDesktop.Init();
		break;

	case DLL_PROCESS_DETACH:
		g_customDesktop.Uninit();
		break;

	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}

