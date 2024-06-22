#pragma once

#ifdef KB_PLATFORM_WINDOWS
	#ifdef KB_BUILD_DLL
		#define KB_API __declspec(dllexport)
	#else
		#define KB_API __declspec(dllimport)
	#endif // !

#else
	#error Kinebatic only supports Windows!
#endif // !1
