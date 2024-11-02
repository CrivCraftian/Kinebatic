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

		/*
		std::vector<kb::Line> lines
		{
			kb::Line(kb::Vector2(300, 300), kb::Vector2(300, 100)),
			kb::Line(kb::Vector2(100, 100), 90, 100)
		};
		*/

		float angleOffsetMin = 30.0f, angleOffsetMax = 60.0f;
		int incrementValue = 1;
		float topAngle = 90.0f;

	private:
		kb::Random r;

		std::vector<kb::Line> lines;

		std::vector<kb::Line> CreateTree(kb::Vector2 startPos, int rootsize, int size);
		void AddBranch(std::vector<kb::Line>* list, int count, kb::Vector2 previousPosition, float angleOffsetMax, float length, int numBranches, int chance);
		// kb::Line line = kb::Line(kb::Vector2(2, 2), kb::Vector2(200, 200));
	};
}
