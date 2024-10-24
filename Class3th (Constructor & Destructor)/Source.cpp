#include <iostream>

using namespace std;


class GameObject
{
private:
	const char* name;
	static int count;
	// class안에서는 static을 초기화 하지않는다. 선언만 (정리)

public:
	GameObject()
	{
		name = "Cylinder";

		cout << "Create GameObject" << endl;
	}
	// 생성자는 class와 같은 이름의 함수로 만들어야함 (정리)
	// 만약 생성자(함수)가 private라면 인스턴스를 생성할수 없음 (정리)

	void Information() const
	{
		// name = "Box";
		// 함수 앞에 const가 있다면 변수의 값을 변경할 수 없다.(정리)

		cout << "name : " << name << endl;
		cout << "Count의 값 : " << count << endl;
	}

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.

	~GameObject()
	{
		count++;
		cout << "count의 값 : " << count << endl;
		cout << "Destroy GameObject" << endl;
	}
	// 소멸자의 경우 class 명 앞에 '~'를 붇혀서 만들어야함 (정리)

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번
	// 만 호출되며, 소멸자에는 매개변수를 생성하여
	// 사용할 수 없습니다.

#pragma endregion

};

int GameObject::count = 0;
// static의 초기화는 외부에서 (정리)

void OnDamage(int& stamina)
{
	stamina -= 10;
}

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출되는 특수한 멤버 함수입니다.

	// GameObject gameObject; // 얘는 Stack에 메모리가 저장되서 
	// 					   // main 함수가 끝나면 삭제되어서 소멸자가 실행됨 (정리)
	// 
	// GameObject* gameObject1 = new GameObject(); // 얘는 Heap에 메모리가
	// 											// 저장되서 소멸자 실행X (정리)
	// GameObject* gameObject2 = new GameObject();
	// GameObject* gameObject3 = new GameObject();
	// 
	// // free를 사용하면 메모리가 해제되지만 소멸자가 실행되지 않음 (정리)
	// delete gameObject1; // delete를 사용하면 소멸자도 실행이 됨 (정리)
	// delete gameObject2;
	// delete gameObject3;
	// 
	// gameObject.Information();

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출
	// 되며, 생성자는 반환형이 존재하지 않기 때문에
	// 생성자가 호출되기 전에는 객체에 대한 메모리는 
	// 할당되지 않습니다.
#pragma endregion

#pragma region 참조자
	// 할당된 하나의 메모리 공간에 다른 이름을
	// 붙여 사용하는 키워드입니다.

	// int health = 100;
	// 
	// int& reference = health;
	// //선언과 동시에 참조할 변수를 적어줘야함 (정리)
	// reference = 99;
	// 
	// OnDamage(health);
	// // 사용방법: 매개변수를 전달할때 사용 (포인터(주소)사용시 효율적이지 못함)(정리)
	// 
	// cout << "health 변수의 값 : " << health << endl;
	// cout << "reference 변수의 값 : " << reference << endl;

#pragma endregion


	return 0;
}
