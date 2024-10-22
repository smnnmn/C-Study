#include "Knife.h"

Knife::Knife()
{
	attack = 10;
	intersection = 1;
}

void Knife::Attack()
{
	cout << "Knife Attack" << endl;
	cout << "Knife의 공격력 : " << attack << endl;
	cout << "Knife의 사거리 : " << intersection << endl;

}
