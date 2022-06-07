#include <iostream>
#include <Windows.h>
#include <cmath>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number, number1, number2, answer;
	cout << "Введите двухзначное число: ";
	cin >> number;
	if (9 < number and number < 100) {
		number1 = number % 10;
		number2 = number / 10;
		answer = number1 * 10 + number2;
		cout << "Ответ такой: " << answer << endl;
	}
	else {
		cout << "Неверно введены данные" << endl;
	}
	return 0;
}