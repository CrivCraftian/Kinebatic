#include "Level1.h"
#include "Tree.h"
#include "Plant.h"
#include "Projectile.h"
#include "Planet.h"

namespace KBProgram
{
	KBProgram::Planet* sun = new Planet(nullptr, 50, 200, 2, 2);

	Level1::Level1()
	{

	}

	Level1::~Level1()
	{

	}

	void Level1::Start()
	{
		kb::Scene::Start();

		// AddObject(sun, 0, 0);
		// sun->SetPosition(sf::Vector2f(500.0f, 500.0f));

		// AddObject(new KBProgram::Projectile(), 0, 0);

		AddObject(new KBProgram::Tree(), 0, 0);

		// AddObject(new KBProgram::Plant(kb::Vector2(800, 900), 10, 50, 10), 100, 5);
		// AddObject(new KBProgram::Plant(kb::Vector2(800, 900), -6, 40, 16), 100, 100);
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