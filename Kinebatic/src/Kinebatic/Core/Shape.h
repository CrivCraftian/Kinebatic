#pragma once

#include "kbpdh.h"
#include "Kinebatic\Core.h"

#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

namespace kb
{
	struct KB_API Vector2
	{
		float x, y;

		Vector2()
			: x(0), y(0) {}

		Vector2(float x, float y)
			: x(x), y(y) {}

		void Normalize();
	};

	class KB_API Shape
	{
	public:
		virtual void Draw(sf::RenderWindow* window) { };

	protected:

	private:
	};

	class KB_API Line : public Shape
	{
	public:
		Vector2 p1, p2;
		Line();
		Line(Vector2 p1, Vector2 p2);
		Line(Vector2 startPosition, float rotation, int distance);
		~Line();

		void SetPosition(Vector2 pos1, Vector2 pos2);
		virtual void Draw(sf::RenderWindow* window) override;

	private:
		sf::Vertex _line[2];
	};

	class KB_API Circle : public Shape
	{
	public:
		Circle();
		Circle(float radius);
		~Circle();

		void SetRadius(float radius);
		float GetRadius();
		void SetPosition(Vector2 position);
		Vector2 GetPosition();
		virtual void Draw(sf::RenderWindow* window) override;

	private:
		sf::CircleShape shape;
	};
}
