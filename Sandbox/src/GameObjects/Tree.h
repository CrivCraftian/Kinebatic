#pragma once
#include <Kinebatic.h>

namespace KBProgram
{
	class Tree : public kb::GameObject
	{
	public:
		Tree();
		~Tree();

		void Start() override;
		void Update() override;
		void End() override;

		std::vector<kb::Line> lines
		{
			kb::Line(kb::Vector2(300, 300), kb::Vector2(300, 100)),
			kb::Line(kb::Vector2(200, 300), kb::Vector2(300, 100))
		};

		// kb::Line line = kb::Line(kb::Vector2(2, 2), kb::Vector2(200, 200));
	};
}
