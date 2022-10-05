#pragma once
#include <string>

using namespace std;

class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	int Gold;
	int HP;
	int Direction;

	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();
};

