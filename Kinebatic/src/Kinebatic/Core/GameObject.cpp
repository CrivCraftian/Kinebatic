#include "kbpdh.h"
#include "GameObject.h"
#include "Kinebatic/Log.h"

namespace kb
{
	GameObject::GameObject()
	{

	}

	GameObject::~GameObject()
	{

	}

	void GameObject::Awake()
	{

	}

	void GameObject::Start()
	{

	}

	void GameObject::Update()
	{
		
	}

	void GameObject::End()
	{
	}

	void GameObject::SetPosition(sf::Vector2f position)
	{
		_position = position;
	}

	void GameObject::SetSprite(std::string spriteName)
	{
		std::string path = /*std::string(KB_SL_DIR) + "/" + "Resources" + "/" + */ spriteName;

		if (!_texture.loadFromFile(path))
		{
			KB_CORE_ERROR("Failed to load texture from file: {0}", path);
		}
		else
		{
			_texture.loadFromFile(path);
			_sprite.setTexture(_texture);
		}
	}

	const sf::Vector2f& GameObject::GetPosition()
	{
		return _position;
	}

	std::vector<Shape*> GameObject::GetShapes()
	{
		return _shapesOnScreens;
	}

	void GameObject::SetScene(Scene* s)
	{
		currentScene = s;
	}

	void GameObject::AddShape(Shape* shape) {
		_shapesOnScreens.push_back(shape);
	}

	void GameObject::RemoveShape(Shape* shape) {
		for (int i = 0; i < _shapesOnScreens.size(); i++)
		{
			if (_shapesOnScreens[i] != shape)
			{
				continue;
			}

			_shapesOnScreens[i] = nullptr;
			return;
		}

		KB_CORE_WARN("Could not find shape");
	}
	void GameObject::ClearShapes() {
		for (int i = 0; i < _shapesOnScreens.size(); i++)
		{
			_shapesOnScreens[i] = nullptr;
		}
	}

	Scene* GameObject::GetScene() {
		return currentScene;
	}
}