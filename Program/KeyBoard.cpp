#include "KeyBoard.h"

KeyBoard::KeyBoard()
{
	cout << "Create Keyboard" << endl;
}

void KeyBoard::OnEnter()
{
	cout << "KeyBoard Press" << endl;
}

KeyBoard::~KeyBoard()
{
	cout << "Release Keyboard" << endl;
}
