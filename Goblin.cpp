#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	Type = "Goblin"; 
	cout << "Goblin ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FGoblin::~FGoblin()
{
	cout << "Goblin �Ҹ���" << endl;
}
