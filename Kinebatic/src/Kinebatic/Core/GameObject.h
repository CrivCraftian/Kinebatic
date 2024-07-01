#pragma once
#include "Kinebatic/Core.h"
#include "Kinebatic\Core\Shape.h"

#include <SFML\System.hpp>
#include <vector>

namespace kb
{
	class KB_API GameObject
	{
	public:
		GameObject();
		virtual ~GameObject();

		virtual void Awake();
		virtual void Start();
		virtual void Update();
		virtual void End();

		void SetPosition(sf::Vector2f position);
		void SetSprite(std::string spriteName);

		std::vector<Shape*> GetShapes();

	protected:
		void AddShape(Shape* shape);

	private:
		sf::Vector2f _position;
		sf::Texture _texture;
		sf::Sprite _sprite;

		std::vector<Shape*> _shapesOnScreens;
	};
}
