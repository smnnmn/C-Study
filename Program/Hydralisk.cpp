#include "Hydralisk.h"

Hydralisk::Hydralisk()
{
	cout << "Create Hydralisk" << endl;
	initializeHealth = 80;
	health = initializeHealth;
}

void Hydralisk::Recovery()
{
	health = initializeHealth;
}


Hydralisk::~Hydralisk()
{
	cout << "Release Hydralisk" << endl;
}
