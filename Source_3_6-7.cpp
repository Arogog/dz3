#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int brr[1000];
	int a, b, n;
	cout << "���������� ���������: ";
	cin >> a;
	cout << endl << "����� ��: ";
	cin >> n;
	cout << endl << "������: ";
	for (int i = 0; i < a; i++) {
		if (n > 0) b = (n % a + i) % a;
		else {
			b = (n % a + i) % a;
			b = (a + b) % a;
		}
		cin >> arr[i];
		brr[b] = arr[i];
	}
	for (int i = 0; i < a; i++) {
		cout << brr[i];
	}
}
