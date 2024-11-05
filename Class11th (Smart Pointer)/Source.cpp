#include <iostream>

using namespace std;

class Packet
{
public:
	int data = 10;

	Packet()
	{
		cout << "Create Packet" << endl;
	}

	int Data()
	{
		return data;
	}

	~Packet()
	{
		cout << "Release Packet" << endl;
	}
};

class Character
{
private:
	weak_ptr<Character> weakPointer;

public:
	Character()
	{
		cout << "Create Character" << endl;
	}

	void Parther(weak_ptr<Character> clone)
	{
		weakPointer = clone;
	}

	~Character()
	{
		cout << "Release Character" << endl;
	}
};

int main()
{
#pragma region 스마트 포인터
	// 포인터를 시뮬레이트하는 동시에 자동으로 메모리 관리를 해주며,
	// 경계 확인과 같은 추가 기능을 제공하는 추상 데이터 포인터 형식입니다.

#pragma region Unique 포인터
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 
	// 있도록 되어 있는 포인터입니다.

	// 둘다 가능
	// unique_ptr<int> uniquePointer = make_unique<int>();

	// unique_ptr<int> uniquePointer(new int);
	// 
	// *uniquePointer = 100; // 동일하게 포인터로 값 변경 가능(정리)
	// 
	// cout << "uniquePointer가 가리키는 값 : "<< *uniquePointer << endl;


	// Unique 포인터는 delete를 안해도 소멸자(삭제)가 실행됨(정리)
	// unique_ptr<Packet> uniquePointer1(new Packet);
	// 
	// cout << "uniquePointer1의 Data 값 : " << uniquePointer1->Data() << endl;
	// 
	// // uniquePointer2가 uniquePointer1이 가리키고 있는 메모리를 가리킴
	// unique_ptr<Packet> uniquePointer2 = std::move(uniquePointer1);
	// 
	// // uniquePointer1은 nullptr이라 바로 터짐
	// // cout << "uniquePointer1의 Data 값 : " << uniquePointer1->Data() << endl;
	// 
	// cout << "uniquePointer1의 Data 값 : " << uniquePointer2->Data() << endl;


#pragma endregion

#pragma region Shared 포인터
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를
	// 해제하도록 설계되어 있는 포인터입니다.

	// shared_ptr<Character> sharedPointer1(new Character);
	// 
	// // 참조하는 객체의 참조 횟수: use_count
	// cout << "sharedPointer1의 참조 횟수 : " << sharedPointer1.use_count() << endl;
	// 
	// shared_ptr<Character> sharedPointer2(sharedPointer1);
	// 
	// cout << "sharedPointer1의 참조 횟수 : " << sharedPointer1.use_count() << endl;
	// cout << "sharedPointer2의 참조 횟수 : " << sharedPointer2.use_count() << endl;


#pragma endregion

#pragma region Weak 포인터
	// 자원 객체를 소유하지 않기 때문에 Shared 포인터로 관리되는
	// 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.

	// weak는 약한참조, shared는 강한참조, 강한참조가 0이 되면 객체는 사라짐

	// shared_ptr<Character> warrior = make_shared<Character>();
	// shared_ptr<Character> wizard = make_shared<Character>();
	// 
	// warrior->Parther(wizard);
	// wizard->Parther(warrior);


#pragma endregion


#pragma endregion

	return 0;
}
