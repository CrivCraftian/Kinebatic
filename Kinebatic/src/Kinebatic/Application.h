#pragma once

#include "Core.h"
#include "kbpdh.h"

namespace Kinebatic
{
	class KB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void StartWindow();
		void End();

		void Run();
	private:
		sf::ContextSettings windowSettings;
	};

	Application* CreateApplication();
}