#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int a, b = 0;
	cout << "Количество элементов: ";
	cin >> a;
	cout << endl << "Массив: ";
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		if (((b == 0) && (arr[i] > 0)) || ((arr[i] > 0) && (arr[i] < b))) b = arr[i];
		cout << b;
	}
}