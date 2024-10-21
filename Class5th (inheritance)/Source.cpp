#include <iostream>

using namespace std;

class Unit  // 메모리 크기: int 두개-> 8 byte (정리)
{
protected:
	int health;
	int defense;

public:
	Unit()
	{
		cout << "Create Unit" << endl;
	}
	~Unit()
	{
		cout << "Release Unit" << endl;
	}
};

class Marine : public Unit // 메모리 크기:int 한개+부모클래스 int 두개-> 12 byte(정리)
{
private:
	int attack;

public:
	Marine() // Marine 객체 생성시 Marine 생성자 실행을 하는데 그전에 
	{		 // 상속 받는 Unit의 생성자를 먼저 실행한다 (정리)

		health = 40;
		defense = 0;
		attack = 6;

		cout << "Create Marine" << endl;
	}
	~Marine() // Marine의 소멸자가  실행될 때 역순으로 Marine이 먼저
	{		  // 소멸자가 실행되고  이후 Unit의 소멸자가 실행된다.(정리)
		cout << "Release Marine" << endl;
	}
	void Show()
	{
		cout << "Marine 의 health : " << health << endl;
		cout << "Marine 의 defense : " << defense << endl;
		cout << "Marine 의 attack : " << attack << endl;
	}
};

class Firebat : public Unit
{
private:
	int attack;
public:
	Firebat()
	{
		health = 50;
		defense = 1;
		attack = 16;
	}
	void Show()
	{
		cout << "Firebat 의 health : " << health << endl;
		cout << "Firebat 의 defense : " << defense << endl;
		cout << "Firebat 의 attack : " << attack << endl;

	}
};

class Ghost : public Unit
{
private:
	int attack;
public:
	Ghost()
	{
		health = 45;
		defense = 0;
		attack = 10;
	}
	void Show()
	{
		cout << "Ghost 의 health : " << health << endl;
		cout << "Ghost 의 defense : " << defense << endl;
		cout << "Ghost 의 attack : " << attack << endl;

	}
};
int main()
{
#pragma region 캡슐화
	// 클래스 안에 서로 연관되어 있는 속성과
	// 기능들을 하나의 캡슐로 만들어 데이터를 외부로 부터 
	// 보호하며, 인터페이스를 제공하여 사용자로 부터 내부에 있는 데이터를
	// 사용하지 않고, 인터페이스를 사용 할 수 있도록 설정하는 것입니다.
#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수
	// 있도록 설정해주는 기능입니다.

	// Unit  unit;
	// Marine marine;
	// 
	// cout << "Unit의 메모리 크기 : " << sizeof(unit) << endl;
	// cout << "Marine의 메모리 크기 : " << sizeof(marine) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된상태로 메모리의 크기가 결정됩니다.
#pragma endregion

#pragma region 객체(과제)

	// Marine marine;
	// Firebat firebat;
	// Ghost ghost;
	// 
	// marine.Show();
	// firebat.Show();
	// ghost.Show();

#pragma endregion


	return 0;
}
