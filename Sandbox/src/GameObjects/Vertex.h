#pragma once
#include "Kinebatic.h"

namespace KBProgram
{
	class Vertex : public Kinebatic::GameObject
	{
	public:
		Vertex();
		~Vertex();

		void Start() override;
		void Update() override;
		void End() override;
	};
}

