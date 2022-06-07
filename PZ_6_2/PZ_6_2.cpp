/* № 2 Дано число R и список размера N.Найти два соседних элемента списка, сумма которых
наиболее близка к числу R, и вывести эти элементы в порядке возрастания их индексов
(определение наиболее близких чисел - то есть такой элемент AK, для которого
величина | AK - R | является минимальной). */

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <random>

using namespace std;

int main() {
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[20], num[10], i, number;
	int minR = 9999;

	for (i = 0; i < 20; i++)
		arr[i] = 1 + rand() % 40;
	for (i = 0; i < 20; i++)
		cout << arr[i] << " ";

	cout << "Введите число, сумму которого вы хотите найти : ";
	cin >> number;

	for (i=0; i < 20; i++)
		if (abs(arr[i] + arr[i - 1] - number) < minR){
			minR = abs(arr[i - 1] + arr[i] - number);
			num[2] += arr[i - 1], arr[i];
		}

	for (i = 0; i < 2; i++)
		cout << num[i] << " ";


	return 0;
}