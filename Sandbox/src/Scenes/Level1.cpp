#include "Level1.h"
#include "Tree.h"

namespace KBProgram
{
	Level1::Level1()
	{

	}

	Level1::~Level1()
	{

	}

	void Level1::Start()
	{
		kb::Scene::Start();

		AddObject(new KBProgram::Tree(), 0, 0);

	}

	void Level1::Update()
	{
		kb::Scene::Update();
	}

	void Level1::End()
	{
		kb::Scene::End();
	}
}