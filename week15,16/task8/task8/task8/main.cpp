#include <iostream>

//8.Дана матрица.Элементы первой строки — мощность электромотора, второй строки
//— категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.

int main() {
	setlocale(0, "");

	const int rows = 2;
	const int cols = 10;
	int mat[rows][cols];
	int max = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++) {
			mat[0][j] = rand() % 100;
			mat[1][j] = rand() % 4;
		}
	std::cout << "Матрица: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j] << " ";
		std::cout << std::endl;
	}

		for (int j = 0; j < cols; j++){
			if (mat[1][j] == 3) {
				for (int j = 0; j < cols; j++) {
					if (mat[0][j] > mat[0][max])
						max = mat[0][j];
				}
			}
	}
	std::cout << "Самый мощный мотор категории 3: " << max;
}