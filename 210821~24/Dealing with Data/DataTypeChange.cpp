#include <iostream>

using namespace std;

void datatypechange() {
	//�������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int a = 3.141592;
	cout << a << endl;

	//���������� �������� ��ȯ
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;
	// cpp
	// static_cast<typeName>

}