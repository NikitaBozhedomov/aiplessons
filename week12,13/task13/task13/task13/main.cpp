#include <iostream>

//13. ��������� ��� ������������� �������� �� 5, � ������������� ��������� �� 1

int main() {
	setlocale(0, "");
	const int n = 10;
	int arr[n];

	std::cout << "��������� ������: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 - 5;
		std::cout << arr[i] << " ";
	}

	std::cout << "\n���������� ������ ����� ���: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0)
			arr[i] = arr[i] * 5;
		if (arr[i] > 0) 
			arr[i] = arr[i] - 1;
			std::cout << arr[i] << " ";
	}
}