#include <iostream>
#include "function3.h"

using namespace std;

void countDown(int);
int func(int);
int main() 
{
	//재귀 호출 : cpp에서는 자기 자신을 호출할 수 있다.

	//void recurs(argumentList) {
	//	// Code#1
	//	if (condition)
	//	{
	//		recurs(argumentList);
	//	}
	//	// Code#2
	//}

	// 함수를 지시하는 포인터
	// 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.

	// 1. 주소 얻기
	cout << func << endl;
	
	// 2. 지시하는 포인터 선언하기
	int (*pf)(int);
	pf = func;

	// 3. 함수를 지시하는 포인터를 사용하여 함수 호출하기
	cout << (*pf)(3) << endl;

	return 0;

}

int func(int n)
{
	return n + 1;
}

void countDown(int n)
{

	cout << "Counting. . . " << n << endl;
	if (n > 0)
		countDown(n-1);
	cout << n << "번째 재귀함수\n";
}