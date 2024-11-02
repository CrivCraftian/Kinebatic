#pragma once
#include <Kinebatic.h>

namespace KBProgram
{
	class Planet : public kb::GameObject
	{
	public:
		Planet(Planet* origin, int radius, int distance, int sublayers, int maxSubplanets);
		~Planet();

		void Start() override;
		void Update() override;
		void End() override;

	private:
		void CreateSubplanets(int radius, int distance, int layers, int maxSubplanets);

		int rot;
		int dist;
		int rad;

		int layers;
		int MaxSubplanets;

		Planet* originPlanet;
		std::vector<Planet*> subplanets;

		sf::Vector2f offset;

		kb::Circle pScreen;
	};
}
