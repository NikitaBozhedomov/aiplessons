#include <iostream>

//6. ����� ����� ������������ / ������������� �� ������ ��������

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
	std::cout << "\n����������� �� ������ ������� ������� ����� �����: " << min;
	
	for (int i = 1; i < n; i++) {
		if (abs(arr[i])>abs(arr[max]))
			max = i;
	}
	std::cout << "\n������������ �� ������ ������� ������� ����� �����: " << max;
}