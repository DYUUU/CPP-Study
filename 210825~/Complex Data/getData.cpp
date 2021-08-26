#include <iostream>
#include <cstring>

using namespace std;

void getChar() {

	const int Size = 15;
	char name1[Size]; // 비어있는 배열
	char name2[Size] = "C++ programing";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요\n";
	// cin >> name1;
	// 공백을 만났을 때 문자의 끝이라고 생각한다. 공백을 포함하여 받아야 한다.
	cin.getline(name1, Size);
	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자 입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이" << name1[0] << "자로 시작하는군요" << endl;
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.: ";
	cout << name2 << endl;

}