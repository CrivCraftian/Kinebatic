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

#include <string>

#define KB_SL_DIR "\"${SolutionDir}\""

namespace Kinebatic
{
	class KB_API Core
	{
	public:
		template<typename T>
		static T GetResource(std::string fileName);
	private:

	};
}