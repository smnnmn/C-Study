#include "Mouse.h"

Mouse::Mouse()
{
	cout << "Create Mouse" << endl;
}

void Mouse::OnEnter()
{
	cout << "Mouse Click" << endl;
}

Mouse::~Mouse()
{
	cout << "Release Mouse" << endl;
}
