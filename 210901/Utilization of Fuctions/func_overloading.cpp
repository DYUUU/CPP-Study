#include <iostream>		

using namespace std;

//void print(char, int);
//void print(int, int);
//void print(char);


int sum(int, int);
float sum(float, float);

int func_overloading()
{
	// �Լ��� �����ε�
	// ���� ���� �Լ��� ���� �̸����� �����Ѵ�.
	//print('a', 3);
	//print(3, 2);
	//print('a');

	/*
	1. �Լ��� �������� �ٸ� ���
	2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/
	int a, b;
	cout << " �� ������ �Է��Ͻʽÿ�\n";
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�.\n";
	float c, d;
	cin >> c >> d;
	cout << endl;
	cout << "�� �Ǽ��� ����" << sum(c, d) << "�Դϴ�.\n";

	

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
