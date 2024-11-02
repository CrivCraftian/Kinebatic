#include "kbpdh.h"
#include "GameInput.h"

namespace kb
{
	bool GameInput::IsKeyPressed(std::string key)
	{
		return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
	}

	bool GameInput::IsKeyHeld(std::string key)
	{
		return false;
	}

	sf::Keyboard::Key GameInput::ConvertStringToKey(std::string string)
	{
		return sf::Keyboard::A;
	}
}