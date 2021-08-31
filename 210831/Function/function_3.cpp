#include <iostream>
#include "function3.h"

using namespace std;

const int SIZE = 8;

int main_function3()
{
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);
	// arr == &arr[0]
	cout << "함수의 " << SIZE << "까지의 합은 " << sum << " 입니다." << endl;
	cout << "함수의" << "세 번재 인덱스 까지의 합은 " << sumArr(arr, 3) << " 입니다." << endl;

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