//1d.Сгенерировать массив со случайными числами в диапазоне : [-10, 20]

#include<iostream>

int main() {
	int mass[30];

	for (int i = 0; i < 30; i++) {
		mass[i] = rand() %30-10;
	}

	for (int i = 0; i < 30; i++) {
		std::cout <<"Массив:"<< mass[i] << " ";
	}
}