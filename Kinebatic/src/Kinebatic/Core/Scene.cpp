#include "kbpdh.h"
#include "Scene.h"

namespace Kinebatic
{
	Scene::Scene()
	{

	}

	Scene::~Scene()
	{

	}

	void Scene::Start()
	{
		_gameobjects = std::make_unique<std::vector<GameObject*>>();
		_addedobjects = std::make_unique<std::vector<GameObject*>>();
		_removedobjects = std::make_unique<std::vector<GameObject*>>();

		std::cout << "Starting Scene!" << std::endl;
	}

	void Scene::Update()
	{
		for (auto object : *_gameobjects)
		{
			object->Update();
		}
	}

	void Scene::End()
	{

	}
	void Scene::AddObject(GameObject* object, int x, int y)
	{
		object->SetPosition(sf::Vector2f(x, y));
		_gameobjects->push_back(object);
	}
}