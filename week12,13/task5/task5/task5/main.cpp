#include <iostream>

//5. Найти наибольший / наименьший элемент массива и его номер по порядку

int main() {
	setlocale(0, "");

	const int n = 10;
	int arr[n];
	int max = 0;
	int min = 0;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
	}

	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[max]) {
			arr[max] = arr[i];
			max = i;
		}
	}

	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[min]) {
			arr[min]=arr[i];
			min=i;
		}
	}
	std::cout << "\nМаксимальный элемент массива: " << arr[max];
	std::cout << "\nЕго номер: " << max;
	std::cout << "\nМинимальный элемент массива: " << arr[min];
	std::cout << "\nЕго номер: " << min;
}