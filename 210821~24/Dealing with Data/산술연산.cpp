#include <iostream>
#include <typeinfo>

using namespace std;

void main() {
	/*
	 + : 두 개의 피연산자의 합을 계산합니다.
	 - : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산합니다.
	 * : 두 개의 피연산자의 곱을 계산합니다.
	 / : 첫 번재 피연산자에서 두 번째 피연산자를 나눕니다.
	 >> 두 개의 피연사자가 모두 정수이면 결과값은 '몫' 입니다.
	 % : 첫 번재 피연산자를 두 번째 피연산자로 나누어 나머지를 구합니다.
	 예를 들어서 19를 6으로 나누게 되면 1이 값이 됩니다.
	****** 부동 소수점(실수) 사용할 수 없습니다.
	*/

	
	//int a = 10;
	//int b = 3;

	//int c = a + b;
	///*
	//int d = a - b;
	//int e = a * b;
	//int f = a / b;
	//int g = a % b;

	//cout << "c : " << c << endl;
	//cout << "d : " << d << endl;
	//cout << "e : " << e << endl;
	//cout << "f : " << f << endl;
	//cout << "g : " << g << endl;
	//*/

	//// cpp가 복잡한 산술 연산을 수행할 수 있을까? >> 네

	//int multiple = a / b * c;

	//cout << multiple << endl;
	
	//auto : 데이터 형을 자동으로 결정
	//별로 좋지 않은 코딩 습관

	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e125;
	
	cout << typeid(n).name() << endl;
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;


}