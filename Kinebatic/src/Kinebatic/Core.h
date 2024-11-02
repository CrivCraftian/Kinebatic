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
#include "kbpdh.h"

#include <SFML\Graphics.hpp>

#define KB_SL_DIR R"($(SolutionDir))"
#define DEG_TO_RAD(x) ((x) * (3.14159265358979323846 / 180.0))

namespace kb
{
	class KB_API Core
	{
	public:
		template<typename T>
		static T GetResource(std::string fileName);

		static void SetWindow(sf::RenderWindow* window);
		static sf::RenderWindow* GetWindow();
	private:
		static sf::RenderWindow* _window;
	};
}