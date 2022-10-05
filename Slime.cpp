#pragma once
#include <iostream>

#include "Slime.h"

FSlime::FSlime()
{
	Type = "Slime";
	cout << "슬라임이 소환되었습니다" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FSlime::~FSlime()
{
	cout << "슬라임이 주거따" << endl;
}

void FSlime::Cry()
{
	cout << "슬라임이 울부지저따!" << endl;
	cout << "그아아아앙!" << endl;
	
}
