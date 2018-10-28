#pragma once

#ifdef AT_PLATFORM_WINDOWS
	#ifdef AT_BUILD_DLL
		#define ALTER_API __declspec(dllexport)
	#else
		#define ALTER_API __declspec(dllimport)
	#endif // AT_BUILD_DLL
#else
	#error Alter only supports Windows

#endif // AT_PLATFORM_WINDOWS
