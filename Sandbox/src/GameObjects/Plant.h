#pragma once

#include <Kinebatic.h>;

namespace KBProgram
{
	class Plant : public kb::GameObject
	{
	public:
		Plant(kb::Vector2 startPos, float angleRotated, float length, int size);
		~Plant();

		void Start() override;
		void Update() override;
		void End() override;


	private:
		kb::Random r;

		std::vector<kb::Line> CreateFern(kb::Vector2 start, float rotation, float angleRotated, float length, int count);

		void AddBranch(std::vector<kb::Line>* lines, kb::Vector2 prev, float rotation, float angleIncrease, float length, int count, bool subbranches = false);
		void AddStem(std::vector<kb::Line>* lines, kb::Vector2 prev, float rotation, float angleRot, float length, int count);

		float OGLength;

		std::vector<kb::Line> flines;
	};
}
