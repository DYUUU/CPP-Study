#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);

int reference()
{
	// ���� (reference) ��?
	// �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	// �Լ��� �Ű������� ���

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "���� ���� " << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "\n\n";

	cout << "������ �̿��� ���� ��ȯ\n";
	swapA(wallet1, wallet2);
	cout << "���� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "\n\n";

	cout << "�����͸� �̿��� ���� ��ȯ\n";
	swapB(&wallet1, &wallet2);
	cout << "������ ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	return 0;

}
// ������ �����ϴ� ���
void swapA(int&a, int&b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}
// �����ͷ� �����ϴ� ���
void swapB(int*a, int*b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
