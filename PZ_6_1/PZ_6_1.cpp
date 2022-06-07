/* 1 Дан список A размера N.Вывести вначале его элементы с четными номерами(в
порядке возрастания номеров), а затем — элементы с нечетными номерами(также в
порядке возрастания номеров) : A2, A4, А6, . . ., A1, A3, A5, ....Условный оператор не
 использовать. */

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <random>

using namespace std;

int main() {
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[10], num[10], i;

	for (i = 0; i < 10; i++)
		arr[i] = 1 + rand() % 20;
	for (i = 0; i < 10; i++)
		cout << arr[i] << " ";

	cout << endl <<"Четные номера: ";

	for (int i = 0; i < 10;){
		cout << arr[i] << " ";
		i += 2;
	}

	cout << endl << "Нечетные номера: ";

	for (int i = 1; i < 10;) {
		cout << arr[i] << ' ';
		i += 2;
	}

	return 0;
}


