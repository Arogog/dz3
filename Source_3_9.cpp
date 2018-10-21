#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int brr[1000];
	int a, b, n;
	cout << "Количество элементов: ";
	cin >> a;
	cout << endl << "Массив: ";
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < a; i++) {
		b = arr[i];
		n = 0;
		for (int c = 0; c < a; c++) {
			if (b == arr[c]) n++;
			if (n >= 2) break;
		}
		if (n == 1) cout << arr[i] << " ";
	}
}