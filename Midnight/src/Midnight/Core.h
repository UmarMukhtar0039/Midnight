#pragma once

#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL 
		#define MIDNIGHT_API __declspec(dllexport)
	#else
		#define MIDNIGHT_API __declspec(dllimport)
	#endif // 
#else
	#error Midnight Engine currently only support Windows platform.
#endif // 

#define BIT(x) (1 << x)