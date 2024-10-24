#include <iostream>
#include <conio.h>
#include "../Program/Vulture.h"
#include "../Program/SiegeTank.h"
#include "../Program/Goliath.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수 있는 함수입니다.

	// Terran* terran = new Vulture; 

	// cout << "Vulture의 크기 : " << sizeof(Vulture) << endl;

	// terran->Move();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

#pragma region Factory

	// 1. 입력을 받습니다.

	// 2. 생성 가능한 횟수는 5번 이며,
	//	  1번을 선택하면 Vulture가 생성됩니다.
	//	  2번을 선택하면 SiegeTank가 생성됩니다.
	//	  3번을 선택하면 Goliath이 생성됩니다.

	//	  다른 번호를 입력하면 다시 입력받을 수 있도록 합니다.

	// 3. 생성된 유닛을 Move()가 호출되어서 각각의 Move()가 
	//	  호출될 수 있도록 합니다.

	//	Terran* terran; // Terran * pointer = nullptr;
	//	Vulture* vulture = new Vulture;
	//	SiegeTank* siegeTank = new SiegeTank;
	//	Goliath* goliath = new Goliath;
	//	
	//	int count = 0;
	//	char key = 0;
	//	
	//	while (count < 5)
	//	{
	//		cout << "Create Unit Number : ";
	//		cin >> key;
	//		cout << endl;
	//	
	//		switch (key)
	//		{
	//		case '1':	terran = vulture; break;
	//		case '2':	terran = siegeTank;  break;
	//		case '3':	terran = goliath; break;
	//		default:continue; break;
	//	
	//		}
	//		count++;
	//		terran->Move();
	//		cout << endl;
	//	}
#pragma endregion


	return 0;
}
