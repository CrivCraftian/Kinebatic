#include "Tree.h"

namespace KBProgram
{
	Tree::Tree()
	{
		lines = CreateTree(kb::Vector2(1400, 900), 250, 3);
		// lines.push_back(kb::Line(kb::Vector2(100, 100), 135, 50));
	}

	Tree::~Tree()
	{
		ClearShapes();
	}

	void Tree::Start()
	{
		kb::GameObject::Start();

		for (auto& line : lines)
		{
			AddShape(&line);
		}
	}

	void Tree::Update()
	{
		kb::GameObject::Update();
		// line.SetPosition(kb::Vector2(line.p1.x, line.p1.y), line.p2);
	}

	void Tree::End() {
		kb::GameObject::End();
	}

	std::vector<kb::Line> Tree::CreateTree(kb::Vector2 startPos, int rootsize, int size)
	{
		std::vector<kb::Line> branches;
		AddBranch(&branches, size, startPos, 270, rootsize, 6, 2);

		return branches;
	}

	void Tree::AddBranch(std::vector<kb::Line>* list, int count, kb::Vector2 previousPosition, float rotation, float length, int numBranches, int chance)
	{
		kb::Line line(previousPosition, rotation, length);

		list->push_back(line);

		if (length < 1)
		{
			return;
		}

		if (count > 0)
		{
			float angleIncrement = topAngle / numBranches;

			for (int i = 0; i < numBranches; ++i)
			{
				float randomAngleIncrement = r.getFloat(-15.0f, 15.0f);

				float branchRotation = (rotation - topAngle / 2) + (angleIncrement * i) + randomAngleIncrement;

				AddBranch(list, count - 1, line.p2, branchRotation, r.getFloat(length / 2, length / 3), numBranches + incrementValue, chance + chance);

				if (r.getInt(0, chance) == 1)
				{
					randomAngleIncrement = r.getFloat(-15.0f, 15.0f);

					AddBranch(list, count, line.p2, branchRotation, r.getFloat(length / 2, length), numBranches + incrementValue, chance + chance);
				}
			}
		}
	}
}