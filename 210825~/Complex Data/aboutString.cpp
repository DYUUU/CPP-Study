#include <iostream>

using namespace std;

void aboutString()
{
	// C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	/*
	C ��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ �� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string  ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	
	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	>> string ������ �����ϴ� !
	*/

	char ch1[20];
	char ch2[20] = "jaguar";
	string str1;
	string str2 = "panda";
	// char1 = char2 �� �� ��
	str1 = str2; // ��
	cout << str1 << endl << str2;




}