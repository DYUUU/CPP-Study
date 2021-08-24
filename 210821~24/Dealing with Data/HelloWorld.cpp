#include <iostream> // 전처리 지시자

//c++에서 함수를 사용하고자 한다면
//반드시 그 함수의 원형을 미리 정의하여야 한다.

using namespace std;
	// cpp  코드에는 반드시
	// main의 이름을 갖고 있는 함수가 있어야 한다.
	// cpp에서는 

void  HelloWorld() {
	std::cout << "Hello";
	std::cout << "World!" << std::endl;

	// 위와 같은 코드
	cout << "Hello";
	cout << "World!";

}