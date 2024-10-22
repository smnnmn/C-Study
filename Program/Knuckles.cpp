#include "Knuckles.h"

Knuckles::Knuckles()
{
	attack = 8;
	intersection = 0;
}

void Knuckles::Attack()
{
	cout << "Knuckles Attack" << endl;
	cout << "Knuckles의 공격력 : " << attack << endl;
	cout << "Knuckles의 사거리 : " << intersection << endl;
}
