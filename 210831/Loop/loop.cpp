#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	// �ݺ����̶�?
	/*char arr[10] = { 'a','b' ,'c' ,'d' ,'e' };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}*/

	/*
	1. �ݺ����� ����� ī������ ���� �ʱ�ȭ
	2. �ݺ����� ������ ������ '���� �˻�'
	3. �ݺ��� ��ü�� ����
	4. ī������ ���� ��ȭ
	*/

	/*int a = 10;
	int b = 10;

	cout << "a�� " << a << ", b�� " << b << endl;
	cout << "a++�� " << a++ << ", b++�� " << b++ << endl;
	cout << "a�� " << a << ", b�� " << b << endl;
	cout << "++a�� " << ++a << ", ++b�� " << ++b << endl;
	cout << "a�� " << a << ", b�� " << b << endl;
	

	for (int i = 5; i > 0; i--)
	{
		cout << i << "��°�Դϴ�." << endl;
	}*/

	/*
	���� ǥ���� < <= > >= == != 
	*/

	// while ��, do while ��
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

	//// false �̱� ������ ���� �� ��
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
		cout << "while�� �Դϴ�." << endl;
		j++;
	} while (j < 3);*/
	/*bool j = false;
	do {
		cout << "while�� �Դϴ�." << endl;
	} while (j);*/
	// ��� �� ���� ������ ��.


	// �迭 ��� �ݺ���
	//int a[10] = { 1,3,5,7,9 };
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << a[i];
	//}
	//cout << endl;
	//for (int i : a) // ** �迭�� �׻� ������ ���
	//{
	//	cout << i;
	//}

	// ��ø ���� : 2���� �迭
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