#include "kbpdh.h"
#include "Core.h"

namespace kb
{
	sf::RenderWindow* Core::_window = nullptr;

	template<typename T>
	T Core::GetResource(std::string fileName)
	{
		sf::FileInputStream file;
		file.open(std::string(KB_SL_DIR) + "Resources" + fileName);
		return file;
	}

	void Core::SetWindow(sf::RenderWindow* window)
	{
		_window = window;
	}

	sf::RenderWindow* Core::GetWindow()
	{
		return _window;
	}
}