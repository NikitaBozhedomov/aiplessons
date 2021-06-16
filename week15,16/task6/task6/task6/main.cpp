#include <iostream>

//6. Дана матрица.Составить массив, каждый элемент которого равен максимальному
//элементу соответствующей строки матрица.

int main() {
	setlocale(0, "");

	const int rows = 3;
	const int cols = 4;
	const int n = 10;
	int mat[rows][cols];
	int arr[rows];
	
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			mat[i][j] = rand() % 100 - 50;

	std::cout << "Матрица\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j] << " ";
			std::cout << std::endl;
	}

	for (int i = 0; i < rows; i++) {
		arr[i] = mat[i][0];
		for (int j = 0; j < cols; j++) {
			if (mat[i][j] > arr[i])
				arr[i] = mat[i][j];
		}
	}

	std::cout << "\nМассив: ";
	for (int i = 0; i < rows; i++)
		std::cout << arr[i] << " ";
}