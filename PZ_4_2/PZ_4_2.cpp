/* ���� ����� ����� N(> 1).������� ���������� �� ����� ����� K, ��� ������� ����� 1 + 2 + ... + K
����� ������ ��� ����� N, � ���� ��� �����. */

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number1, sum, k;
	sum = 0, k = 0;
	cout << "������� �����: ";
	cin >> number1;


	if (number1 > 0) {
		while (number1 > sum or number1 == sum) {
			k += 1;
			sum += k;
		}
	}
	cout << "����� �����: " << sum << endl << "���������� ����� �����: " << k;
	return 0;
}