#include <iostream>
#include <typeinfo>

using namespace std;

void main() {
	/*
	 + : �� ���� �ǿ������� ���� ����մϴ�.
	 - : ù ��° �ǿ����ڿ��� �� ��° �ǿ������� ���� ����մϴ�.
	 * : �� ���� �ǿ������� ���� ����մϴ�.
	 / : ù ���� �ǿ����ڿ��� �� ��° �ǿ����ڸ� �����ϴ�.
	 >> �� ���� �ǿ����ڰ� ��� �����̸� ������� '��' �Դϴ�.
	 % : ù ���� �ǿ����ڸ� �� ��° �ǿ����ڷ� ������ �������� ���մϴ�.
	 ���� �� 19�� 6���� ������ �Ǹ� 1�� ���� �˴ϴ�.
	****** �ε� �Ҽ���(�Ǽ�) ����� �� �����ϴ�.
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

	//// cpp�� ������ ��� ������ ������ �� ������? >> ��

	//int multiple = a / b * c;

	//cout << multiple << endl;
	
	//auto : ������ ���� �ڵ����� ����
	//���� ���� ���� �ڵ� ����

	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e125;
	
	cout << typeid(n).name() << endl;
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;


}