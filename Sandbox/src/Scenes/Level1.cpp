#include "Level1.h"
#include "Vertex.h"

namespace KBProgram
{
	Level1::Level1()
	{
		AddObject(new KBProgram::Vertex(), 0, 0);
	}

	Level1::~Level1()
	{

	}

	void Level1::Start()
	{
		Kinebatic::Scene::Start();

	}

	void Level1::Update()
	{
		Kinebatic::Scene::Update();
	}

	void Level1::End()
	{
		Kinebatic::Scene::End();
	}
}