#include <iostream>


using namespace std;

void structure()
{
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열 : 같은 데이터형의 집합

	// 앤캐
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