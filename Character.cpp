#include "Character.h"
#include <iostream>

using namespace std;

FCharacter::FCharacter()
{
	Type = "Character";
	Gold = 0;
	HP = 0;
	Direction = 0;

	cout << "Character ������" << endl;
}

FCharacter::~FCharacter()
{
	cout << "Character �Ҹ���" << endl;
}

void FCharacter::Move()
{
	cout << Type << " �̵��Ѵ�." << endl;
}

void FCharacter::Attack()
{
	cout << Type << " �����Ѵ�." << endl;
}

void FCharacter::Dead()
{
	cout << Type << " �״´�." << endl;
}

void FCharacter::DecreaseHP()
{
	cout << Type << " HP �پ���." << endl;
}
