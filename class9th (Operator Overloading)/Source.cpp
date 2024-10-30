#include <iostream>
#include "../Program/Computer.h"

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
#pragma region this 포인터
		// 자기 자신을 가리키는 포인터입니다.
		this->x = x;
		this->y = y;
#pragma endregion

	}
	// int X() const {return x;}; 는 값을 복사하기에 메모리 아쉬움(정리)
	int& X() { return x; };
	int& Y() { return y; };

	Vector2& operator + (const Vector2& clone) // const는 읽기전용으로 사용(정리)
	{
		Vector2 tempVec(this->x + clone.x, this->y + clone.y);

		return tempVec;
	}

	Vector2& operator ++()
	{
		this->x++;
		this->y++;
		return *this;
	}
	Vector2& operator ++ (int value)
	{
		Vector2  clone(this->x, this->y);
		this->x++;
		this->y++;
		return clone;
	}
	Vector2& operator - (const Vector2& clone)
	{
		Vector2 vector(this->x - clone.x, this->y - clone.y);
		return vector;
	}
	Vector2& operator * (int value)
	{
		Vector2 vector(this->x * value, this->y * value);
		return vector;
	}
};

Vector2 operator * (int value, Vector2& clone)
{
	Vector2 vector(clone.X() * value, clone.Y() * value);
	return vector;
}

int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를 
	// 상속받는 상속입니다.

	// Computer computer;
	// 
	// computer.Use();

	// 다중 상속의 경우 여러 개의 상위 클래스에 
	// 중복되는속성이 존재할 수 있기 때문에 범위 
	// 지정 연산자를통해 상위 클래스의 이름을 
	// 선언하고 속성을 사용해야 합니다.

#pragma endregion

#pragma region 연산자 오버로딩
	// Vector2 vector1(1, 1);
	// Vector2 vector2(3, 3);
	// 
	// Vector2 position = vector1 + vector2;
	// 
	// cout << "전위 증가한 position x의 값 : " << ++position.X() << endl;
	// 
	// cout << "position x의 값 : " << position.X()<< endl;
	// cout << "position y의 값 : " << position.Y() << endl;

	// Vector2 position = vector1 + vector2;

#pragma endregion

#pragma region 연산자 오버로딩의 교환 법칙
	// 피연산자의 위치는 연산의 결과에 아무런 영향을 미치지 않는 법칙입니다.

	// Vector2 transform(1, 1);
	// 
	// transform = 5 * transform;
	// 
	// cout << "transform의 x값 : " << transform.X() << endl;
	// cout << "transform의 y값 : " << transform.Y() << endl;

#pragma endregion


	return 0;
}
