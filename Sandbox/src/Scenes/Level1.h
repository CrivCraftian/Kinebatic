#pragma once
#include "Kinebatic.h"

namespace KBProgram
{
	class Level1 : public kb::Scene
	{
	public:
		Level1();
		~Level1();

		void Start() override;
		void Update() override;
		void End() override;
	};
}
