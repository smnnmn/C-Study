#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main()
{
#pragma region Vector 컨테이너

	//	std::vector<int> vector;
	//	
	//	vector.reserve(6); // 초기 배열크기
	//	
	//	vector.push_back(10); // [10]
	//	vector.push_back(20); // [10][20]
	//	vector.push_back(30); // [10][20][30]
	//	vector.push_back(40); // [10][20][30][40]
	//	vector.push_back(50); // [10][20][30][40][50]
	//	
	//	vector.pop_back(); // [10][20][30][40]
	//	
	//	vector.push_back(60); // [10][20][30][40][50][60]
	//	vector.push_back(70); // [10][20][30][40][50][60][70]
	//	vector.push_back(80); // [10][20][30][40][50][60][70][80]
	//	
	//	
	//	cout << "Capacity : " << vector.capacity() << endl; // 배열의 크기(reserve)
	//	
	//	cout << "size : " << vector.size() << endl;
	//	
	//	for (int i = 0; i < vector.size(); i++)
	//	{
	//		cout << vector[i] << endl;
	//	}

#pragma endregion

#pragma region List 컨테이너

	// std::list<int> list;
	// 
	// list.push_back(10); // [10]
	// list.push_back(20); // [20]
	// list.push_front(0); // [0][10][20]
	// 
	// // cout << list[0]; << 안됨 (배열방식이 아님)
	// 
	// list.pop_front(); // [10][20]
	// 
	// cout << "List의 크기 : " << list.size() << endl;
	// 
	// cout << list.front() << endl;
	// 
	// cout << list.back() << endl;

#pragma endregion

#pragma region String 컨테이너

	// string name = "star";
	// 
	// name += "FC"; // 복사하여 nameFC 라는 메모릴 만듬 -> append로 사용하면 효율적(정리)
	// 
	// cout << "name 변수의 값 : " << name << endl;
	// 
	// cout << "name Capacity 값 : " << name.capacity() << endl;
	// 
	// name.append(" Go for it"); // name 뒤에 연결(정리)
	// 
	// cout << "name Capacity 값 : " << name.capacity() << endl;
	// 
	// cout << "name 변수의 Length : " << name.length() << endl; // 열? 문자 포함X(정리)
	// cout << "name 변수의 값 : " << name << endl;
	// 
	// // length() 는 문자열의 개수이고
	// // size() 는 문자열의 크기 
	// 
	// for (int i = 0; i < name.size(); i++)
	// {
	// 	if (i % 5 == 0 && i != 0)
	// 	{
	// 		name.insert(i, "X");
	// 	}
	// }
	// cout << "name 변수의 값 : " << name << endl;
	// 
	// //find는 문자가 있는 위치를 반환(정리)
	// 
	// cout << name.find("for") << endl;
	// 
	// // compare는 존재의 유무를 1,-1로 알려줌
	// cout << name.compare("for") << endl;

#pragma endregion

	return 0;
}
