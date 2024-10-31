#include <iostream>
#include <string.h>
#include "Zergling.h"
#include "Hydralisk.h"

using namespace std;

template<typename T>
class List
{
private:
	int size;
	int index;
	T* pointer;

public:
	List(int size)
	{
		index = 0;
		this->size = size;
		pointer = new T[this->size];
	}

	void Add(T data)
	{
		if (index >= size)
		{
			cout << "List is Full" << endl;
		}
		else
		{
			pointer[index++] = data;
		}
	}

	T & operator [] (int index)
	{
		return pointer[index];
	}

	~List()
	{
		delete pointer;
	}
};

template<typename T>
bool Same(T a, T b)
{
	return a == b;
}

// 문자의 길이를 판단
template<>
bool Same<const char*>(const  char* x, const char* y)
{
	cout << "템플릿 특수화" << endl;
	return strlen(x) == strlen(y);
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 타입들을 가질 수 있는 기술에 중점을 두어 재사용을 높일 수
	// 있는 기능입니다.

	//	List<int> list(5); // 선언을 한번만 하기에 index값은 한번만 초기화 된다.
	//	
	//	list.Add(10);
	//	list.Add(20);
	//	list.Add(30);
	//	list.Add(40);
	//	list.Add(50);
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		cout << "list " << i << "의 값 : " << list[i] << endl;
	//	}
#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶을 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 템플릿 기능입니다.

	// cout << Same('A', 'B') << endl;
	// cout << Same(5, 5) << endl;
	// cout << Same(10.5, 10.7 ) << endl;
	// 
	// cout << Same("Apple","Korea") << endl;

#pragma endregion

#pragma region 업 캐스팅
	// 하위 클래스의 정보를 담을 수 있는 객체에 상위 클래스의
	// 자료형의 부여하여, 상위 클래스처럼 사용할 수 있는 기능입니다.

	Zerg* zerg = new Zergling();
	

#pragma endregion


	return 0;
}
