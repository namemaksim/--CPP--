// 1. Дано вещественное число А и целое число N(> 0).Найти А в степени N : A = AA...N
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

	cout << "Введите Число, которое будет возводиться в степень: ";
	cin >> number1;

	cout << "Введите степень: ";
	cin >> number2;

	if (number1 > 0) {
		cout << "Ответ такой: " << pow(number1, number2) << endl;
	}
	else {
		cout << "Введено числo, меньше 0: " << number1 << endl;
	}

	return 0;
}