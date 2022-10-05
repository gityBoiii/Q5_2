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

		// 문제 
	// 슬라임 생성 -> 기능 -> 제거 
	// 아이디어 : 캐릭터 상속 -> 슬라임 -> main

	delete Slime; // 변수에서 해제
	Slime = nullptr; // null로 
	// Cpp 제작자도 없앨까 말까 궁시렁된 문법

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;


	return 0;
}