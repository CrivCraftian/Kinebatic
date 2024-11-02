#pragma once
#include <Kinebatic.h>
#include "math.h"

namespace KBProgram
{
	class Projectile : public kb::GameObject
	{
	public:
		Projectile();
		~Projectile();

		void Start() override;
		void Update() override;
		void End() override;

	private:
		void ShootProjectile();

		const float v0 = 50.0f; // Initial velocity
		const float angle = 80.0f * 3.14159265 / 180.0f; // Convert to radians
		const float g = 9.81f; // Gravity
		float t = 0.0f; // Time
		const float dt = 0.001f; // Time step

		kb::Circle proj;
	};
}
