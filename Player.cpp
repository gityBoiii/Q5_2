#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	cout << "Player 생성자" << endl;

	Type = "Player";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FPlayer::~FPlayer()
{
	cout << "Player 소멸자" << endl;
}

void FPlayer::Collect()
{
	cout << Type << " 모은다." << endl;
}