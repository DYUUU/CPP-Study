#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20

void charPointer()
{
	// char 형의 문자열을 사용하고 싶을 때에
	// string 말고 포인터 쓰고 싶을 때
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	// 문자열을 넉넉히 담을 수 있는 사이즈를 가져야 함
	// 동적 char 형을 사용하여 메모리 효율적 사용
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 "  << ps << "이고, 그 주소는 " << (int*)ps << "입니다." << endl;
	// 서로 별개의 주솟값을 가진 문자열이 만들어졌음.

}