#include <iostream>

using namespace std;

int main()
{
	// ���α׷��� �ǻ� ���� �ɷ�?
	// �б� ����
	// if, switch

	// if
	/*
		if(����)
			�ڵ�
	*/


	/*if (false)
	{
		cout << "#1";
	}
	else if (true)
	{
		cout << "#2";
	}
	else
	{
		cout << "#1";
	}*/

	// �� ǥ����
	// ����, ����, �� ���� ������

	// ���� ||
	//	���� || ���� TF/TT/FT = true , FF = false

	// ���� &&
	// ���� && ���� TT = true, TF/FT/FF = false

	/*cout << "Typing What is your age.";
	int age;
	cin >> age;

	if (age < 0 || age > 100)
	{
		cout << "Don't be Liar." << endl;
	}

	else if (20 <= age && age <= 29)
	{
		cout << "You're 20's age!" << endl;
	}
	else
	{
		cout << "I don't know What is your exact age." << endl;
	}	*/

	//cout << "���α׷��� ����Ǿ����ϴ�.";


	// switch
	int a;
	cout << "���� �Է��ϼ���\n";
	cin >> a;
	switch (a)
	{
	case 1: 
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;
	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;
	default:
		cout << "�Է��Ͻ� ���� 1,2,3 �̿��� �ٸ� ���Դϴ�.\n";
		break;
	}

	cout << "switch ������ �������ϴ�.\n";



	return 0;
}