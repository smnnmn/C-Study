#pragma once
#include "Mouse.h"
#include "KeyBoard.h";

class Computer: public Mouse,KeyBoard
{
public:
	Computer();

	void Use();

	~Computer();
};

