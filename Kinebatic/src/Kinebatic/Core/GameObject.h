#pragma once
#include "Kinebatic/Core.h"

namespace Kinebatic
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

	private:
		sf::Vector2f _position;
		sf::Texture _texture;
		sf::Sprite _sprite;
	};
}
