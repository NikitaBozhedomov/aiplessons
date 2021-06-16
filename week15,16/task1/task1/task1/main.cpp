#include <iostream>

//1. Преобразовать матрицу : элементы строки, в которой находится минимальный
//элемент матрицы, заменить нулями.

int main() {
	setlocale(0, "");
	
	const int rows = 3;
	const int cols = 4;
	int mat[rows][cols];
	int min = 0;
	
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			mat[i][j] = rand() % 100 - 50;
	
	std::cout<<"Первичная матрица: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) 
			std::cout << mat[i][j] << " ";
			std::cout << std::endl;
		}
	
	for (int i = 0; i < rows; i++) 
		for (int j = 0; j < cols; j++) 
			if (mat[i][j] < mat[min][min]) 
				mat[min][min] = mat[i][j];
			
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++)
			if (mat[i][j] == mat[min][min]){
				for (int k = 0; k < cols; k++)
					mat[i][k] = 0;
			}
	}

	std::cout << "Преобразованная матрица: \n";
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j] << " ";
			std::cout << std::endl;
	}


}