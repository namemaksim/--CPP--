/* 2. Дан номер года.Определить количество дней в этом году(високосный или нет).Високосным считается год, делящийся
на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400 */

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	cout << "Введите год: ";
	cin >> year;


	if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
		cout << "Этот год високосный (в нем 366 дней): " << year << endl;
	}
	else {
		cout << "Этот год не високосный год (365 дней): " << year << endl;
	}
	return 0;
}