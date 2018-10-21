#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int n;
	cout << "Количество элементов = ";
	cin >> n;
	cout << endl << "Массив - ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i > 0) {
			if (((arr[i] >= 0) && (arr[i - 1] >= 0)) || ((arr[i] < 0) && (arr[i - 1] < 0))) {
				if (arr[i] >= arr[i - 1]) {
					cout << arr[i - 1] << " " << arr[i];
					break;
				}
				else {
					cout << arr[i] << " " << arr[i - 1];
					break;
				}
			}
		}
	}

}