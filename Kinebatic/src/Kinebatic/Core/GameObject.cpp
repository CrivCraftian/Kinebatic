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

	std::vector<Shape*> GameObject::GetShapes()
	{
		return _shapesOnScreens;
	}

	void GameObject::AddShape(Shape* shape)
	{
		_shapesOnScreens.push_back(shape);
	}
}