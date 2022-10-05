#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer(); //Constructor
	~FPlayer(); //Destructor

	//FCharacter 기능을 가져다 씀
	//int Gold;
	//int HP;
	//int Direction;

	//void Move();
	//void Attack();
	//void Dead();
	//void DecreaseHP();

	void Collect();
};

