#include "Projectile.h"

namespace KBProgram
{
	Projectile::Projectile()
	{
		proj.SetPosition(kb::Vector2(500.0f, 500.0f));
		proj.SetRadius(10);
	}

	Projectile::~Projectile()
	{

	}

	void Projectile::Start()
	{
		AddShape(&proj);
	}

	void Projectile::Update()
	{
		ShootProjectile();
	}

	void Projectile::End()
	{

	}

	void Projectile::ShootProjectile()
	{
		t += dt;
		float x = v0 * cos(angle) * t;
		float y = v0 * sin(angle) * t - 0.5f * g * t * t;

		proj.SetPosition(kb::Vector2(x, 400 - y));
	}
}