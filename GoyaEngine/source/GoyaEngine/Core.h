#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GOYAENGINE_API __declspec(dllexport)
	#else
		#define GOYAENGINE_API __declspec(dllimport)
	#endif // 
#else
	#error GoyaEngine Only Supports Windows!
#endif // GE_PLATFORM_WINDOWS
