#include "kbpdh.h"
#include "Application.h"
#include "Log.h"

namespace kb
{
	sf::RenderWindow* window;

	Application::Application()
	{
		Initialise();
	}

	Application::~Application()
	{
		if (window->isOpen())
		{
			End();
		}
		delete window;
		window = nullptr;
	}

	inline void Application::Initialise()
	{
		kb::Log::Init();
		StartWindow();

		kb::Core::SetWindow(window);
		KB_CORE_INFO("Kinebatic Engine Initialized");
	}

	void Application::StartWindow()
	{
		KB_CORE_INFO("Starting Window");
		windowSettings.antialiasingLevel = 0;
		window = new sf::RenderWindow(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default, windowSettings);
	}

	void Application::End()
	{
		if (_currentScene != nullptr)
		{
			_currentScene->End();
			delete _currentScene;
			_currentScene = nullptr;
		}

		KB_CORE_INFO("Window Closed");

		window->close();
		window->clear();
	}

	void Application::Run()
	{
		while (window->isOpen())
		{
			sf::Event event;
			while (window->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					window->close();
				}
			}

			window->clear();

			if (_currentScene != nullptr)
			{
				_currentScene->Update();
			}

			window->display();
		}
	}

	void Application::SetScene(Scene* scene)
	{
		_currentScene = scene;
		if(_currentScene)
			_currentScene->Start();
	}

	Application* CreateApplication()
	{
		return new Application();
	}
}