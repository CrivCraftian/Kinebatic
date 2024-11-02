#include "Planet.h"
#include "Tree.h"

namespace KBProgram
{
	Planet::Planet(Planet* origin, int radius, int distance, int sublayers, int maxSubplanets)
	{
		offset.x = 0;
		offset.y = 0;

		originPlanet = origin;
		rad = radius;
		dist = distance;
		layers = sublayers;
		MaxSubplanets = maxSubplanets;
	}

	Planet::~Planet() {
		ClearShapes();
	}

	void Planet::Start() {
		pScreen.SetRadius(rad);

		if (originPlanet != nullptr)
		{
			offset += originPlanet->GetPosition();
			offset.x += dist;
		}

		pScreen.SetPosition(kb::Vector2(offset.x + GetPosition().x, offset.y + GetPosition().y));
		CreateSubplanets(rad / 3, dist, layers, MaxSubplanets);
		std::cout << "Start method Called" << "\n";
		AddShape(&pScreen);
	}

	void Planet::Update() {
		pScreen.SetPosition(kb::Vector2(GetPosition().x, GetPosition().y));
	}

	void Planet::End() {

	}

	void Planet::CreateSubplanets(int radius, int distance, int layers, int maxSubplanets)
	{
		if (layers <= 0)
		{
			return;
		}

		for (int i = 0; i < maxSubplanets; i++) {
			std::cout << "Adding Subplanets, layer: " << layers << "\nIteration: " << i << "\n";
			Planet* p = new Planet(this, radius, distance/2, layers - 1, maxSubplanets);
			GetScene()->AddObject(p, GetPosition().x, GetPosition().y);
		}
	}
}