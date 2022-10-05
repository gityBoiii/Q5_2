#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	FGoblin* Goblin = new FGoblin();
	Goblin->Move();

	FSlime* Slime = new FSlime(); 
	Slime->Move();
	Slime->Cry();
	Slime->Attack();
	MyPlayer->DecreaseHP();
	MyPlayer->Attack();

		// ���� 
	// ������ ���� -> ��� -> ���� 
	// ���̵�� : ĳ���� ��� -> ������ -> main

	delete Slime; // �������� ����
	Slime = nullptr; // null�� 
	// Cpp �����ڵ� ���ٱ� ���� �ý÷��� ����

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;


	return 0;
}