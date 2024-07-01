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
		~Line();

		void SetPosition(Vector2 pos1, Vector2 pos2);
		virtual void Draw(sf::RenderWindow* window) override;

	private:
		sf::Vertex _line[2];
	};
}
