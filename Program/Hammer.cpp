#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer Attack" << endl;
	cout << "Hammer의 공격력 : " << attack << endl;
	cout << "Hammer의 사거리 : " << intersection << endl;
}
