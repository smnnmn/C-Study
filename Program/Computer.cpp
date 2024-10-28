#include "Computer.h"

Computer::Computer()
{
	cout << "Create Computer" << endl;
}

void Computer::Use()
{
	// 내가 한거
	// Mouse mouse;
	// KeyBoard keyBoard;
	// mouse.OnEnter();
	// keyBoard.OnEnter();

	// 새롭게 배운거
	Mouse::OnEnter();
	KeyBoard::OnEnter();
}

Computer::~Computer()
{
	cout << "Release Computer" << endl;
}
