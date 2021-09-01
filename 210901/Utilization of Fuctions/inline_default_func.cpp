#include <iostream>

using namespace std;

const int SIZE = 8;
inline float square(float x) { return x * x; }
int sumArr(int* , int n =1);

int inline_default_func() {

	// 인라인 함수
	/*
	일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
	인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	프로그램 실행 속도 향상
	복잡해질 경우 프로그램 속도 다운
	*/

	/*int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는 ?" << endl;
	float b = square(a);
	cout << b << endl;*/

	// 디폴트 매개 변수
	/*
	오른쪽에서 왼쪽으로 정의해야 함.
	사전에 많은 에러들을 예방할 수 있다.
	*/

	//int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	//int sum = sumArr(arr);
	//cout << "함수의 합은 " << sum << " 입니다." << endl;
	//cout << "함수의" << "세 번재 인덱스 까지의 합은 " << sumArr(arr, 3) << " 입니다." << endl;

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