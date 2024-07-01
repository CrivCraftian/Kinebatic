#include "kbpdh.h"
#include "Shape.h"

namespace kb
{
	Line::Line()
	{

		_line[0].position = sf::Vector2f(0, 0);
		_line[1].position = sf::Vector2f(0, 0);
	}

	Line::Line(Vector2 pos1, Vector2 pos2)
	{
		p1 = pos1;
		p2 = pos2;

		_line[0].position = sf::Vector2f(p1.x, p1.y);
		_line[1].position = sf::Vector2f(p2.x, p2.y);
	}

	Line::~Line()
	{

	}

	void Line::SetPosition(Vector2 pos1, Vector2 pos2)
	{
		p1 = pos1;
		p2 = pos2;
	}

	void Line::Draw(sf::RenderWindow* window)
	{
		_line[0].position = sf::Vector2f(p1.x, p1.y);
		_line[1].position = sf::Vector2f(p2.x, p2.y);

		window->draw(_line, 2, sf::Lines);
	}
}