#pragma once

#include "SFML\Window.hpp"

namespace kb
{
	static class GameInput
	{
	public:
		enum TreeTypes
		{
			Oak,
			Birch,
			Pine
		};

		static bool IsKeyPressed(std::string key);
		static bool IsKeyHeld(std::string key);
	private:
		static sf::Keyboard::Key ConvertStringToKey(std::string string);
	};
}
