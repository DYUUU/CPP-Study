#include <iostream>

using namespace std;

void MyEnum()
{
	// ����ü
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.

	enum spectrum { red = 0, orange = 2, yellow, green,
	blue, violet, indigo, ultraviolet};

	/*
	1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	2. red, orange ... 0�������� 7���� ������ ��Ÿ����
	��ȣ ����� ����ϴ�.
	*/


	// �����ڵ鳢���� ��� ������ ������� ����
	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;

}