#include <iostream>

// #define PIE 3.141592
// C ���� �ϴ� ���

using namespace std;

void Const() {
	// ���� ���̸� ���ϴ� ���α׷�
	// ������ * ������ * ����

	const float PIE = 3.1415926535;
	// cpp ���� ����ϴ� ���

	int r = 3;
	float s = r * r * PIE;
	// 1. �ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// ���

	int r2 = 3;
	float s2 = r2* r2 * PIE;

	cout << s << endl;
	
}