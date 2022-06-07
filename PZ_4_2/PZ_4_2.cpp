/* Дано целое число N(> 1).Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K
будет больше или равна N, и саму эту сумму. */

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
	cout << "Введите Число: ";
	cin >> number1;


	if (number1 > 0) {
		while (number1 > sum or number1 == sum) {
			k += 1;
			sum += k;
		}
	}
	cout << "Сумма чисел: " << sum << endl << "Наименьшее целое число: " << k;
	return 0;
}