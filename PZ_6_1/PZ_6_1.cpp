/* 1 Дан список A размера N.Вывести вначале его элементы с четными номерами(в
порядке возрастания номеров), а затем — элементы с нечетными номерами(также в
порядке возрастания номеров) : A2, A4, А6, . . ., A1, A3, A5, ....Условный оператор не
 использовать. */

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <random>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b, * m;
	list <int> mylist;
	cout << "Введите кол-во чисел в списке: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		m += (rand() % 10);
	}


	copy_if(begin(m), end(m), back_inserter(mylist), [](const int x) { return x % 2; });
	mylist.sort([](const int a, const int b) { return a > b; });
	cout << "Нечётные числа (" << mylist.size() << " - элементов): ";
	for (int i : mylist)
		cout << i << ' ';

	mylist.clear();

	copy_if(begin(m), end(m), back_inserter(mylist), [](const int x) { return (x + 1) % 2; }); //чётные числа

	mylist.sort([](const int a, const int b) { return a < b; });   //по возрастанию

	cout << "\nЧётные числа(" << mylist.size() << " - элементов): ";

	for (int i : mylist)
		cout << i << ' ';
}


