// 1. ���� ������������ ����� � � ����� ����� N(> 0).����� � � ������� N : A = AA...N
#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float number1;
	int number2;

	cout << "������� �����, ������� ����� ����������� � �������: ";
	cin >> number1;

	cout << "������� �������: ";
	cin >> number2;

	if (number1 > 0) {
		cout << "����� �����: " << pow(number1, number2) << endl;
	}
	else {
		cout << "������� �����, ������ 0: " << number1 << endl;
	}

	return 0;
}