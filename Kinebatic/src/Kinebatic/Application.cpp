#include "kbpdh.h"
#include "Application.h"

namespace Kinebatic
{
	sf::RenderWindow* window;

	Application::Application()
	{
		StartWindow();
	}

	Application::~Application()
	{
		if (window->isOpen())
		{
			window->close();
			window->clear();
		}
		delete window;
		window = nullptr;
	}

	void Application::StartWindow()
	{
		windowSettings.antialiasingLevel = 8;
		window = new sf::RenderWindow(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default, windowSettings);
	}

	void Application::End()
	{
		window->close();
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

			/*
			Objects get called here
			Like the rendering calls and updates
			*/
			window->display();
		}
	}
	Application* CreateApplication()
	{
		return new Application();
	}
}