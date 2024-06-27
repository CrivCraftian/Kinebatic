#include "kbpdh.h"
#include "Core.h"

namespace Kinebatic
{
	template<typename T>
	T Core::GetResource(std::string fileName)
	{
		sf::FileInputStream file;
		file.open(std::string(KB_SL_DIR) + "Resources" + fileName);
		return file;
	}
}