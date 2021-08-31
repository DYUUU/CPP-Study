#include <iostream>

using namespace std;

int main()
{
	// 프로그램의 의사 결정 능력?
	// 분기 구문
	// if, switch

	// if
	/*
		if(조건)
			코드
	*/


	/*if (false)
	{
		cout << "#1";
	}
	else if (true)
	{
		cout << "#2";
	}
	else
	{
		cout << "#1";
	}*/

	// 논리 표현식
	// 논리합, 논리곱, 논리 부정 연산자

	// 논리합 ||
	//	좌항 || 우항 TF/TT/FT = true , FF = false

	// 논리곱 &&
	// 좌항 && 우항 TT = true, TF/FT/FF = false

	/*cout << "Typing What is your age.";
	int age;
	cin >> age;

	if (age < 0 || age > 100)
	{
		cout << "Don't be Liar." << endl;
	}

	else if (20 <= age && age <= 29)
	{
		cout << "You're 20's age!" << endl;
	}
	else
	{
		cout << "I don't know What is your exact age." << endl;
	}	*/

	//cout << "프로그램이 종료되었습니다.";


	// switch
	int a;
	cout << "값을 입력하세요\n";
	cin >> a;
	switch (a)
	{
	case 1: 
		cout << "입력하신 값은 1입니다.\n";
		break;
	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;
	default:
		cout << "입력하신 값은 1,2,3 이외의 다른 값입니다.\n";
		break;
	}

	cout << "switch 구문이 끝났습니다.\n";



	return 0;
}