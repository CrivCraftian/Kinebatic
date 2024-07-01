#include "Tree.h"

namespace KBProgram
{
	Tree::Tree()
	{

	}

	Tree::~Tree()
	{

	}

	void Tree::Start()
	{
		kb::GameObject::Start();

		for (auto line : lines)
		{
			// AddShape(&line);
		}
	}

	void Tree::Update()
	{
		kb::GameObject::Update();
		// line.SetPosition(kb::Vector2(line.p1.x, line.p1.y), line.p2);
	}

	void Tree::End()
	{
		kb::GameObject::End();
	}
}