/* 2. ƒан номер года.ќпределить количество дней в этом году(високосный или нет).¬исокосным считаетс€ год, дел€щийс€
на 4, за исключением тех годов, которые дел€тс€ на 100 и не дел€тс€ на 400 */

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	cout << "¬ведите год: ";
	cin >> year;


	if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
		cout << "Ётот год високосный (в нем 366 дней): " << year << endl;
	}
	else {
		cout << "Ётот год не високосный год (365 дней): " << year << endl;
	}
	return 0;
}