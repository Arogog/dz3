#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int a, b;
	cout << "Количество элементов: ";
	cin >> a;
	cout << endl << "Массив: ";
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		if (i % 2 == 1) {
			b = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = b;
		}
	}
	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}
}