#include <iostream>

//6. Найти номер минимального / максимального по модулю элемента

int main() {
	setlocale(0, "");
	
	const int n=100;
	int arr[n];
	int max = 0;
	int min = 0;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << " ";
	}
	
	for (int i = 1; i < n; i++) {
		if (abs(arr[i]) < abs(arr[min]))
			min = i;
	}
	std::cout << "\nМинимальный по модулю элемент массива имеет номер: " << min;
	
	for (int i = 1; i < n; i++) {
		if (abs(arr[i])>abs(arr[max]))
			max = i;
	}
	std::cout << "\nМаксимальный по модулю элемент массива имеет номер: " << max;
}