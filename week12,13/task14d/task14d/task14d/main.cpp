#include <iostream>

//14. ������� ����� ������ �� ���� ������ �������� ���� �������� ��� ����������
//�������� : d.�������

int main() {
	setlocale(0, "");

	const int n = 10;
	float arr[n], arr1[n], arr2[n];
	

	for (int i = 0; i< n; i++) {
		arr1[i] = rand() % n - (n/2);
	}
	std::cout << "������ ������: ";
	for (int i = 0; i< n; i++)
		std::cout << arr1[i] << " ";

	for (int i = 0; i< n; i++)
		arr2[i] = rand() % n - (n / 2);
	std::cout << "\n������ ������: ";
	for (int i = 0; i< n; i++)
		std::cout << arr2[i] << " ";

	for (int i = 0; i< n; i++)
		arr[i] = arr1[i] / arr2[i];
	std::cout << "\n���������� ������: ";
	for (int i = 0; i< n; i++)
		std::cout << arr[i] << " ";
}