#pragma once
#include <Kinebatic.h>
#include <Kinebatic/EntryPoint.h>
#include <iostream>
#include "Scenes/Level1.h"

class Sandbox : public kb::Application{

};

kb::Application* kb::CreateApplication()
{
	Sandbox* sandbox = new Sandbox();
    sandbox->SetScene(new KBProgram::Level1());

	return sandbox;
}

/*
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::RectangleShape rect(sf::Vector2f(30.0f, 30.0f));
    rect.setOrigin(sf::Vector2f(15.0f, 15.0f));
    sf::Vector2f v2(window.getSize().x/2, window.getSize().y / 2);
    rect.setPosition(v2);
    rect.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(rect);
        window.display();
    }

    return 0;
}
*/