#include <iostream>
#include "function3.h"

using namespace std;

void countDown(int);
int func(int);
int main() 
{
	//��� ȣ�� : cpp������ �ڱ� �ڽ��� ȣ���� �� �ִ�.

	//void recurs(argumentList) {
	//	// Code#1
	//	if (condition)
	//	{
	//		recurs(argumentList);
	//	}
	//	// Code#2
	//}

	// �Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.

	// 1. �ּ� ���
	cout << func << endl;
	
	// 2. �����ϴ� ������ �����ϱ�
	int (*pf)(int);
	pf = func;

	// 3. �Լ��� �����ϴ� �����͸� ����Ͽ� �Լ� ȣ���ϱ�
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
	cout << n << "��° ����Լ�\n";
}