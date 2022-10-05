#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	Type = "Goblin"; 
	cout << "Goblin 持失切" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FGoblin::~FGoblin()
{
	cout << "Goblin 社瑚切" << endl;
}
