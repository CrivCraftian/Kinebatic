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
		UpdateObjects();

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
		KB_CORE_INFO("Added Gameobject");

		object->SetPosition(sf::Vector2f(x, y));
		object->SetScene(this);
		_addedobjects->push_back(object);
	}

	void Scene::UpdateObjects()
	{
		if (!_addedobjects->empty())
		{
			KB_CORE_INFO("Adding Objects to screen");

			for(GameObject* obj : *_addedobjects)
			{
				KB_CORE_INFO("Pushed Object to screen");
				_gameobjects->push_back(obj);
				obj->Start();
			}

			_addedobjects->clear();
		}
	}
}