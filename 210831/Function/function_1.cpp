#include <iostream>
#include "function.h"

using namespace std;

const float PIE = 3.14;


int main_function()
{
	/*
	1.  ���� ���� �ִ� Ÿ��
	typeName functionName(parameterList)
	{
		statement(s)
		return value;
	}
	2.  ���� ���� ���� Ÿ��
	void functionName(parameterList)
	{
		statement(s);
		return; // ���� ����
	}
	*/
	int a;
	cout << "Type one number : ";
	cin >> a;
	cheers(a);
	cout << endl;

	int b;
	cout << "\n\n���� ������ ���̸� �Է��Ͻʽÿ� : ";
	cin >> b;
	float c = circle(b);
	cout << "=== ���� ���̴� " << c << "�Դϴ�. ===" << endl;


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
