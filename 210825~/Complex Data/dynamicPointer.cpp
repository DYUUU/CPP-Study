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

	cout << "당신의 이름을 입력하십시오" << endl;
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오" << endl;
	cin >> (*temp).age;

	cout << "안녕하세요! 당신은 " << temp->name << " 씨" << endl;
	cout << "당신은 " << temp->age << " 살 이군요!" << endl;
}