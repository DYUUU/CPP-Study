#include <iostream>

using namespace std;

void helloCPP(int, int); // �Ű�����, parameter

int main_function2()
{
	int times;
	cout << "������ �Է��Ͻʽÿ�\n";
	cin >> times;
	helloCPP(times,0); // ��������, argument *** �򰥸��� �� ��!
	// �Ű������� ���������� �ڷ����� ��ġ�Ͽ��� ��.

	return 0;


}

void helloCPP(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello\n";
	}
}
