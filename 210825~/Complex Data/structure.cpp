#include <iostream>


using namespace std;

void structure()
{
	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭 : ���� ���������� ����

	// ��ĳ
	struct Mylove
	{
		string name;
		string lover;
		int age;

	};

	/*Mylove Rhys;
	Rhys.name = "Rhys spencer";
	Rhys.lover = "Larrchen";*/

	/*Mylove Rhys = {
		"Rhys Spencer",
		"Larrchen",
		25
	};*/

	Mylove characters[2] =
	{
		{"Rhys Spencer", "Larrchen", 29},
		{"Yann", "Ett", 19}
	};

	cout << characters[0].name << endl;



}