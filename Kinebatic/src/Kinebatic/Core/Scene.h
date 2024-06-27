#pragma once

#include "GameObject.h"
#include "Kinebatic/Core.h"

namespace Kinebatic
{
	class KB_API Scene
	{
	public:
		Scene();
		~Scene();

		virtual void Start();
		virtual void Update();
		virtual void End();

		void AddObject(GameObject* object, int x, int y);

	private:
		std::unique_ptr<std::vector<GameObject*>> _gameobjects;
		std::unique_ptr<std::vector<GameObject*>> _addedobjects;
		std::unique_ptr<std::vector<GameObject*>> _removedobjects;
	};
}
