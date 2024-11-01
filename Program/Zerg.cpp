#include "Zerg.h"

Zerg::Zerg()
{
	cout << "Create Zerg" << endl;

}

void Zerg::Recovery()
{
	health = initializeHealth;
}

void Zerg::OnDamage(int damage)
{
	health -= damage;
}

int Zerg::Health()
{
	return health;
}

Zerg::~Zerg()
{
	cout << "Release Zerg" << endl;
}
