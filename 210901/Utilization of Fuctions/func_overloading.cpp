#include <iostream>		

using namespace std;

//void print(char, int);
//void print(int, int);
//void print(char);


int sum(int, int);
float sum(float, float);

int func_overloading()
{
	// 함수의 오버로딩
	// 여러 개의 함수를 같은 이름으로 연결한다.
	//print('a', 3);
	//print(3, 2);
	//print('a');

	/*
	1. 함수의 리턴형만 다를 경우
	2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
	*/
	int a, b;
	cout << " 두 정수를 입력하십시오\n";
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
	float c, d;
	cin >> c >> d;
	cout << endl;
	cout << "두 실수의 합은" << sum(c, d) << "입니다.\n";

	

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

float sum(float a, float  b)
{
	return a+ b;
}
