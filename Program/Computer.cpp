#include "Computer.h"

Computer::Computer()
{
	cout << "Create Computer" << endl;
}

void Computer::Use()
{
	// ���� �Ѱ�
	// Mouse mouse;
	// KeyBoard keyBoard;
	// mouse.OnEnter();
	// keyBoard.OnEnter();

	// ���Ӱ� ����
	Mouse::OnEnter();
	KeyBoard::OnEnter();
}

Computer::~Computer()
{
	cout << "Release Computer" << endl;
}
