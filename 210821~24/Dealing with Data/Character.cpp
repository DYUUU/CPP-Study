#include <iostream>

using namespace std;

void Character() {
	//// char : 작은 문자형
	//int a = 77;
	//char b = a; // 아스키 코드값 77 이 들어감.
	//char c = 'a';
	//cout << b << endl;
	//cout << (int)c << endl;

	// char b = "a"; // 사용 불가
	// null 문자가 문자의 끝이 어디인지 알려줌.
	char b[] = { 'a', 'b' ,'c', '\0'};
	cout << b << endl;
	// "" >> 명시적으로 null 문자가 포함 => String


}