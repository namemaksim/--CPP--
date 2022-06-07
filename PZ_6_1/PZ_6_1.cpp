/* 1 ��� ������ A ������� N.������� ������� ��� �������� � ������� ��������(�
������� ����������� �������), � ����� � �������� � ��������� ��������(����� �
������� ����������� �������) : A2, A4, �6, . . ., A1, A3, A5, ....�������� �������� ��
 ������������. */

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
	cout << "������� ���-�� ����� � ������: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		m += (rand() % 10);
	}


	copy_if(begin(m), end(m), back_inserter(mylist), [](const int x) { return x % 2; });
	mylist.sort([](const int a, const int b) { return a > b; });
	cout << "�������� ����� (" << mylist.size() << " - ���������): ";
	for (int i : mylist)
		cout << i << ' ';

	mylist.clear();

	copy_if(begin(m), end(m), back_inserter(mylist), [](const int x) { return (x + 1) % 2; }); //������ �����

	mylist.sort([](const int a, const int b) { return a < b; });   //�� �����������

	cout << "\n׸���� �����(" << mylist.size() << " - ���������): ";

	for (int i : mylist)
		cout << i << ' ';
}


