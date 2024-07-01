#pragma once

#include "Core.h"
#include "kbpdh.h"
#include "Core/Scene.h"

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

namespace kb
{
	class KB_API Application
	{
	public:
		inline Application();
		inline virtual ~Application();

		inline void Initialise();
		inline void StartWindow();
		inline void End();

		inline void Run();

		inline void SetScene(Scene* scene);
	private:
		sf::ContextSettings windowSettings;

		Scene* _currentScene;

		sf::CircleShape shape;
	};

	Application* CreateApplication();
}