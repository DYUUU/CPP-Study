#include <iostream>

using namespace std;

void helloCPP(int, int); // 매개변수, parameter

int main_function2()
{
	int times;
	cout << "정수를 입력하십시오\n";
	cin >> times;
	helloCPP(times,0); // 전달인자, argument *** 헷갈리지 말 것!
	// 매개변수와 전달인자의 자료형이 일치하여야 함.

	return 0;


}

void helloCPP(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello\n";
	}
}
