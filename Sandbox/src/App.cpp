#include <Kinebatic.h>
#include <iostream>

class Sandbox : public Kinebatic::Application{

};

Kinebatic::Application* Kinebatic::CreateApplication()
{
	return new Sandbox();
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