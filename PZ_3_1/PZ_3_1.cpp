// 1. ���� ��� ����� ����� : A, B, C.��������� ���������� ������������ : "���� �� ���� �� ����� �������������"//
#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	cout << "������� ������ �����: ";
	cin >> a;

	cout << "������� ������ �����: ";
	cin >> b;

	cout << "������� ������ �����: ";
	cin >> c;

	if (a > 0 or b > 0 or c > 0) {
		cout << "���� �� ���o �� ����� �����������o� " << endl;
	}
	else {
		cout << "���� ������������� �����" << endl;
	}
	return 0;
}