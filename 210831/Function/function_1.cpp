#include <iostream>
#include "function.h"

using namespace std;

const float PIE = 3.14;


int main_function()
{
	/*
	1.  리턴 값이 있는 타입
	typeName functionName(parameterList)
	{
		statement(s)
		return value;
	}
	2.  리턴 값이 없는 타입
	void functionName(parameterList)
	{
		statement(s);
		return; // 생략 가능
	}
	*/
	int a;
	cout << "Type one number : ";
	cin >> a;
	cheers(a);
	cout << endl;

	int b;
	cout << "\n\n원의 반지름 길이를 입력하십시오 : ";
	cin >> b;
	float c = circle(b);
	cout << "=== 원의 넓이는 " << c << "입니다. ===" << endl;


	return 0;
}
void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers!" << endl;
	}

	// return;
}

float circle(int x)
{
	return x * x * PIE;

}
