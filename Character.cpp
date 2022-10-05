#include "Character.h"
#include <iostream>

using namespace std;

FCharacter::FCharacter()
{
	Type = "Character";
	Gold = 0;
	HP = 0;
	Direction = 0;

	cout << "Character 생성자" << endl;
}

FCharacter::~FCharacter()
{
	cout << "Character 소멸자" << endl;
}

void FCharacter::Move()
{
	cout << Type << " 이동한다." << endl;
}

void FCharacter::Attack()
{
	cout << Type << " 공격한다." << endl;
}

void FCharacter::Dead()
{
	cout << Type << " 죽는다." << endl;
}

void FCharacter::DecreaseHP()
{
	cout << Type << " HP 줄어든다." << endl;
}
