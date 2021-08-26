#include <iostream>

using namespace std;

void MyEnum()
{
	// 열거체
	// 기호 상수를 만드는 것에 대한 또다른 방법.

	enum spectrum { red = 0, orange = 2, yellow, green,
	blue, violet, indigo, ultraviolet};

	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red, orange ... 0에서부터 7까지 정수를 나타내는
	기호 상수로 만듭니다.
	*/


	// 열거자들끼리의 산술 연산은 적용되지 않음
	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;

}