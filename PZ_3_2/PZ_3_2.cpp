/* 2. ��� ����� ����.���������� ���������� ���� � ���� ����(���������� ��� ���).���������� ��������� ���, ���������
�� 4, �� ����������� ��� �����, ������� ������� �� 100 � �� ������� �� 400 */

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	cout << "������� ���: ";
	cin >> year;


	if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
		cout << "���� ��� ���������� (� ��� 366 ����): " << year << endl;
	}
	else {
		cout << "���� ��� �� ���������� ��� (365 ����): " << year << endl;
	}
	return 0;
}