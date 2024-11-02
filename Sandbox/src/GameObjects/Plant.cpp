#include "Plant.h"

namespace KBProgram
{
	Plant::Plant(kb::Vector2 startPos, float angleRotated, float length, int size)
	{
		OGLength = length;

		flines = CreateFern(startPos, 270, angleRotated, length, size);
	}

	Plant::~Plant()
	{
		ClearShapes();
	}

	void Plant::Start()
	{
		kb::GameObject::Start();

		for (auto& line : flines)
		{
			AddShape(&line);
		}
	}

	void Plant::Update()
	{
		kb::GameObject::Update();

	}

	void Plant::End()
	{
		kb::GameObject::End();

	}

	std::vector<kb::Line> Plant::CreateFern(kb::Vector2 start, float rotation, float angleRotated, float length, int count)
	{
		std::vector<kb::Line> lines;

		AddStem(&lines, start, rotation, angleRotated, length, count);

		return lines;
	}

	void Plant::AddBranch(std::vector<kb::Line>* lines, kb::Vector2 prev, float rotation, float angleIncrease, float length, int count, bool subbranches)
	{
		kb::Line line(kb::Vector2(prev), rotation, length);

		lines->push_back(line);

		if (count > 0)
		{
			AddBranch(lines, line.p2, rotation + angleIncrease, angleIncrease, length * 0.75f, count - 1, subbranches);

			if (subbranches)
			{
				AddBranch(lines, line.p2, rotation + 70, -10.0f, length * 0.25f, count, false);
				AddBranch(lines, line.p2, rotation - 70, 10.0f, length * 0.25f, count, false);
			}
		}
	}
	void Plant::AddStem(std::vector<kb::Line>* lines, kb::Vector2 prev, float rotation, float angleRot, float length, int count)
	{
		kb::Line line(kb::Vector2(prev), rotation, length);

		lines->push_back(line);

		if (count > 0)
		{
			AddStem(lines, line.p2, rotation + angleRot, angleRot, length - (length/10), count - 1);

			AddBranch(lines, line.p2, rotation + 70, -10.0f, length * 0.5f, count, true);
			AddBranch(lines, line.p2, rotation - 70, 10.0f,  length * 0.5f, count, true);
		}
	}
}