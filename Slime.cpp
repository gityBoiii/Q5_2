#pragma once
#include <iostream>

#include "Slime.h"

FSlime::FSlime()
{
	Type = "Slime";
	cout << "�������� ��ȯ�Ǿ����ϴ�" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FSlime::~FSlime()
{
	cout << "�������� �ְŵ�" << endl;
}

void FSlime::Cry()
{
	cout << "�������� ���������!" << endl;
	cout << "�׾ƾƾƾ�!" << endl;
	
}
