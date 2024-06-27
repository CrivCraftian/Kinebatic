#pragma once

#include "Core.h"
#include "kbpdh.h"
#include "Core/Scene.h"

namespace Kinebatic
{
	class KB_API Application
	{
	public:
		inline Application();
		inline virtual ~Application();

		inline void StartWindow();
		inline void End();

		inline void Run();

		inline void SetScene(Scene* scene);
	private:
		sf::ContextSettings windowSettings;

		Scene* _currentScene;
	};

	Application* CreateApplication();
}