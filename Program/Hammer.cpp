#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer Attack" << endl;
	cout << "Hammer�� ���ݷ� : " << attack << endl;
	cout << "Hammer�� ��Ÿ� : " << intersection << endl;
}
