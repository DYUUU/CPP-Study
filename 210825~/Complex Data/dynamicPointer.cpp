#include <iostream>

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

void dynamicStructure()
{
	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�" << endl;
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�" << endl;
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! ����� " << temp->name << " ��" << endl;
	cout << "����� " << temp->age << " �� �̱���!" << endl;
}