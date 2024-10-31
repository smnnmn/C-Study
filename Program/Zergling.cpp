#include "Zergling.h"

Zergling::Zergling()
{
	cout << "Create Zergling" << endl;
	initializeHealth = 35;
	health = initializeHealth;
}

void Zergling::Recovery()
{
	health = initializeHealth;
}

Zergling::~Zergling()
{
	cout << "Release Zergling" << endl;
} 
