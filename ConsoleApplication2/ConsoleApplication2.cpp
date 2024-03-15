// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[11];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array = ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=========" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "=========" << endl;


	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
void insertionsort() {
	int i,  temp, j;
	int arr[11];

	for (i = 1; i <= n - 1; i++)  //langkah 1
	{
		temp = arr[i]; //langkah 2
		j = i - 1; //langkah 3
		while ((j >= 0) && arr[j] > temp)
		{
			arr[j + 1] = arr[j]; //langkah 4a
			j = j - 1; //langkah 4b
		}
		arr[j + 1] = temp; //langkah 5
	}
}
void display() {
	cout << endl;
	cout << "=========" << endl;
	cout << "Element array yang telah tersusun" << endl;
	cout << "=========" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "jumlah pass + " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();
}
