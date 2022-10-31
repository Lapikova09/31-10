#include <iostream>
using namespace std;
int main() {
	/*const int size = 5;
	int mas[size];//описание массива
	int mas1[] = { 1,2,3,4,5 };//инициализация массива
	//ввод элементов массива с клавиатуры
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	//вывод элементов массива в строку
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/

	/*const int size = 10;
	int arr[size];
	int ch = 0;
	int ne = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			ch++;
		}
		else { ne++; }
	}
	cout << ch << endl;
	cout << ne << endl;*/


	/*const int size = 8;
	int arr[size];
	int s = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) { s = s + arr[i]; }
	}
	cout << s << endl;*/


	//Array20. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти
	//сумму элементов массива с номерами от K до L включительно
	/*const int n = 5;
	int arr[n];
	int s = 0;
	int k;
	cin >> k;
	int l;
	cin >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = k; i <= l; i++) {
		 s = s + arr[i]; }
	cout << s << endl;*/

	/*//Array21. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
	//Найти среднее арифметическое элементов массива с номерами от K до L
	//	включительно.*/	/*const int n = 5;
	int arr[n];
	int s = 0;
	int k;
	cin >> k;
	int l;
	cin >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = k; i <= l; i++) {
		s = s + arr[i];
	}
	double sr = (double)s / 5;
	cout << sr << endl;*/


	//найти произв отр элементов 
	/*const int size = 6;
	int arr[size];
	int p = 1;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) { p = p * arr[i]; }
	}
	cout << p << endl;*/

	//найти кол во элементов, не делящ на 2 и на 3
	/*const int size = 7;
	int arr[size];
	int k = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] %2!= 0 && arr[i] % 3 != 0) { k++; }
	}
	cout << k << endl;*/

   /*  const int size = 11;
    int arr[size];
     int s = 0;
     for (int i = 0; i < size; i++) {
      	cin >> arr[i];
       }
	 for (int i = 0; i < size; i++) {
		 s = s + arr[i];
	 }
	 double sr = (double)s / 11;
      cout << sr << endl;
      }*/