#include "Knife.h"

Knife::Knife()
{
	attack = 10;
	intersection = 1;
}

void Knife::Attack()
{
	cout << "Knife Attack" << endl;
	cout << "Knife�� ���ݷ� : " << attack << endl;
	cout << "Knife�� ��Ÿ� : " << intersection << endl;

}
