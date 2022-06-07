// 1. Даны два целых числа : A, B, C.Проверить истинность высказывания : "Хотя бы одно из чисел положительное"//
#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	cout << "Введите третье число: ";
	cin >> c;

	if (a > 0 or b > 0 or c > 0) {
		cout << "Хотя бы однo из чисел положительнoе " << endl;
	}
	else {
		cout << "Нету положительных чисел" << endl;
	}
	return 0;
}