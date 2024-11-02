#pragma once
#include "Kinebatic/Core.h"
#include "Kinebatic\Core\Shape.h"

#include <SFML\System.hpp>
#include <vector>

namespace kb
{
	class Scene;

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

		const sf::Vector2f& GetPosition();

		std::vector<Shape*> GetShapes();

		void SetScene(Scene* s);

	protected:
		void AddShape(Shape* shape);
		void RemoveShape(Shape* shape);
		void ClearShapes();

		Scene* GetScene();

	private:
		sf::Vector2f _position;
		sf::Texture _texture;
		sf::Sprite _sprite;

		std::vector<Shape*> _shapesOnScreens;

		Scene* currentScene;
	};
}
