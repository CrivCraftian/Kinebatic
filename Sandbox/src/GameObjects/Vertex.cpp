#include "Vertex.h"

namespace KBProgram
{
	Vertex::Vertex()
	{
		SetSprite("Purple.png");
	}

	Vertex::~Vertex()
	{

	}

	void Vertex::Start()
	{
		Kinebatic::GameObject::Start();
	}

	void Vertex::Update()
	{
		Kinebatic::GameObject::Update();
	}

	void Vertex::End()
	{
		Kinebatic::GameObject::End();
	}
}