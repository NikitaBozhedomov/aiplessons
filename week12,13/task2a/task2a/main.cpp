#include <iostream>

//2. ��������� ����� ��������� ������� :
//a.������� 5, ������� 7, ������� 3,


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
	std::cout << "\n����� ��������� ������� �����: " << sum;
}