#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	cout << "Player ������" << endl;

	Type = "Player";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FPlayer::~FPlayer()
{
	cout << "Player �Ҹ���" << endl;
}

void FPlayer::Collect()
{
	cout << Type << " ������." << endl;
}