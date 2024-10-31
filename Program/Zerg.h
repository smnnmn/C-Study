#pragma once
#include <iostream>

using namespace std;

class Zerg
{
protected:
	int health;
	int initializeHealth;
public:
	Zerg();

	virtual void Recovery() = 0;

	~Zerg();
};

