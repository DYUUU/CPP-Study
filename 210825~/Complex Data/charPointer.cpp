#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20

void charPointer()
{
	// char ���� ���ڿ��� ����ϰ� ���� ����
	// string ���� ������ ���� ���� ��
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	// ���ڿ��� �˳��� ���� �� �ִ� ����� ������ ��
	// ���� char ���� ����Ͽ� �޸� ȿ���� ���
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� "  << ps << "�̰�, �� �ּҴ� " << (int*)ps << "�Դϴ�." << endl;
	// ���� ������ �ּڰ��� ���� ���ڿ��� ���������.

}