#include <iostream>
#include "function3.h"

using namespace std;

const int SIZE = 8;

int main_function3()
{
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);
	// arr == &arr[0]
	cout << "�Լ��� " << SIZE << "������ ���� " << sum << " �Դϴ�." << endl;
	cout << "�Լ���" << "�� ���� �ε��� ������ ���� " << sumArr(arr, 3) << " �Դϴ�." << endl;

	return 0;
}

int sumArr(int* arr, int n)
{
	int total = 0;
	for (int i = 0.; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}