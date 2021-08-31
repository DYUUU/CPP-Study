#include <iostream>

using namespace std;

int main_loop()
{
	// 반복문이란?
	/*char arr[10] = { 'a','b' ,'c' ,'d' ,'e' };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}*/

	/*
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행
	4. 카운터의 값을 변화
	*/

	/*int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << ", b++는 " << b++ << endl;
	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "++a는 " << ++a << ", ++b는 " << ++b << endl;
	cout << "a는 " << a << ", b는 " << b << endl;
	

	for (int i = 5; i > 0; i--)
	{
		cout << i << "번째입니다." << endl;
	}*/

	/*
	관계 표현식 < <= > >= == != 
	*/

	// while 문, do while 문
	/*
	int i = 0;*/
	/*for (i; i < 3; i++)
	{

	}*/

	//while (i < 3)
	//{
	//	//code
	//	cout << i << endl;
	//	i++;
	//}

	//string str = "Panda";
	//bool a = true;
	//bool b = false;
	//int i = 0; 

	//// false 이기 때문에 실행 안 됨
	//while (b) {
	//	cout << "hello\n";
	//}
	//while (str[i] != '\0')
	//{
	//	cout << str[i] ;
	//	i++;
	//}


	// do while
	/*int j = 0;
	do {
		cout << "while문 입니다." << endl;
		j++;
	} while (j < 3);*/
	/*bool j = false;
	do {
		cout << "while문 입니다." << endl;
	} while (j);*/
	// 적어도 한 번은 실행이 됨.


	// 배열 기반 반복문
	//int a[10] = { 1,3,5,7,9 };
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << a[i];
	//}
	//cout << endl;
	//for (int i : a) // ** 배열을 항상 끝까지 출력
	//{
	//	cout << i;
	//}

	// 중첩 루프 : 2차원 배열
	int tmp[4][5] =
	{
		{1, 2, 3, 4,5},
		{11, 22, 33, 44,55},
		{111,222,333,444,555},
		{1111,2222,3333,4444,555}
	};
	for (int row=0; row < 4; row++){
		for (int col=0; col < 5; col++)
		{ 
			cout << tmp[row][col] << " ";
		}
		cout << endl;
	}


	return 0;
}