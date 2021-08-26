#include <iostream>

using namespace std;

void MyUnion()
{
	// 공용체 (union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
	// 모든 멤버 변수가 한 번에 하나의 메모리를 공유한다.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
		double doubleVal;
	};

	//MyUnion test;
	//test.intVal = 3;
	//cout << test.intVal << endl;
	//cout << test.longVal << endl;
	//cout << test.floatVal << endl;
	//cout << test.doubleVal << endl;
	//test.longVal = 33;
	//cout << test.intVal << endl;
	//cout << test.longVal << endl;
	//cout << test.floatVal << endl;
	//cout << test.doubleVal << endl;
	//test.floatVal = 3.3f;
	//cout << test.intVal << endl;
	//cout << test.longVal << endl;
	//cout << test.floatVal << endl;
	//cout << test.doubleVal << endl;
	//test.doubleVal = 3.33;
	//cout << test.intVal << endl;
	//cout << test.longVal << endl;
	//cout << test.floatVal << endl;
	//cout << test.doubleVal << endl;

	union ShareData
	{
		unsigned char a;
		unsigned short b;
		unsigned int c;

	};
	ShareData var;

	var.c = 0x12345678;

	cout << hex;
	cout << var.a << endl;
	cout << var.b << endl;
	cout << var.c;

}