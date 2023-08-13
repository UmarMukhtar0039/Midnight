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

#ifdef MN_ENABLE_ASSERTS
	#define MN_ASSERT(x, ...) { if(!(x)) { MN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define MN_CORE_ASSERT(x, ...) { if(!(x)) { MN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define MN_ASSERT(x, ...)
	#define MN_CORE_ASSERT(x, ...)
#endif
	
#define BIT(x) (1 << x)