#include <iostream>

// #define PIE 3.141592
// C 에서 하는 방법

using namespace std;

void Const() {
	// 원의 넓이를 구하는 프로그램
	// 반지름 * 반지름 * 파이

	const float PIE = 3.1415926535;
	// cpp 에서 사용하는 방법

	int r = 3;
	float s = r * r * PIE;
	// 1. 바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// 상수

	int r2 = 3;
	float s2 = r2* r2 * PIE;

	cout << s << endl;
	
}