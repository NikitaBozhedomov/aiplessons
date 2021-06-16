#include <iostream>

//2. Вычислить сумму элементов массива :
//a.больших 5, меньших 7, больших 3,


int main() {
	setlocale(0, "");

	int arr[100];
	
	int sum = 0;

	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
	}

	for (int i = 0; i < 100; i++) {
		if ((arr[i] > 5) && (arr[i] < 7) && (arr[i] > 3))
			sum = sum + arr[i];
	}
	std::cout << "\nСумма элементов массива равна: " << sum;
}