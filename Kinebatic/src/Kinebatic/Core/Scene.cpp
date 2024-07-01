#include "kbpdh.h"
#include "Scene.h"

namespace kb
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

		KB_CORE_INFO("Scene Initialised!");
	}

	void Scene::Update()
	{
		for (auto object : *_gameobjects)
		{
			object->Update();

			for (auto shape : object->GetShapes())
			{
				shape->Draw(Core::GetWindow());
			}
		}
	}

	void Scene::End()
	{
		for (auto object : *_gameobjects)
		{
			object->End();
		}

		// KB_CORE_INFO("Scene Closed!");
	}
	void Scene::AddObject(GameObject* object, int x, int y)
	{
		object->SetPosition(sf::Vector2f(x, y));
		_gameobjects->push_back(object);

		object->Start();
	}
}