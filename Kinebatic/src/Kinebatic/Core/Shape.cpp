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

	Line::Line(Vector2 startPosition, float rotation, int distance)
	{
		p1 = startPosition;

		float r = DEG_TO_RAD(rotation);

		float x = startPosition.x + (distance * std::cos(r));
		float y = startPosition.y + (distance * std::sin(r));

		p2 = Vector2(x, y);

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

	void Vector2::Normalize()
	{
		int divisor = std::sqrt(x*x + y+y);

		x = x / divisor;
		y = y / divisor;
	}

	Circle::Circle()
	{
		this->SetRadius(1.0f);
		this->SetPosition(Vector2(0.0f, 0.0f));
	}

	Circle::Circle(float radius)
	{
		this->SetRadius(radius);
		SetPosition(Vector2(0.0f, 0.0f));
	}

	Circle::~Circle()
	{
		shape.setPosition(0.0f, 0.0f);
		shape.setRadius(1.0f);
	}

	void Circle::SetRadius(float radius)
	{
		shape.setRadius(radius);
	}

	float Circle::GetRadius()
	{
		return shape.getRadius();
	}

	void Circle::SetPosition(Vector2 position)
	{
		shape.setPosition(sf::Vector2(position.x, position.y));
	}

	Vector2 Circle::GetPosition()
	{
		return Vector2(shape.getPosition().x, shape.getPosition().y);
	}

	void Circle::Draw(sf::RenderWindow* window)
	{
		window->draw(shape);
	}
}