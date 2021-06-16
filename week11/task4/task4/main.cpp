#include <iostream>

struct robs {
	float size, weight, maxsp;
};


int main() {
	setlocale(0, "");

	/*4.Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
	данные о самом тяжёлом роботе.*/
	robs a, b, c;

	std::cout << "Первый робот\nВведите габариты - ";
	std::cin >> a.size;
	std::cout << "Введите вес - ";
	std::cin >> a.weight;
	std::cout << "Введите максимальную скорость - ";
	std::cin >> a.maxsp;

	std::cout << "Второй робот\nВведите габариты - ";
	std::cin >> b.size;
	std::cout << "Введите вес - ";
	std::cin >> b.weight;
	std::cout << "Введите максимальную скорость - ";
	std::cin >> b.maxsp;

	std::cout << "Третий робот\nВведите габариты - ";
	std::cin >> c.size;
	std::cout << "Введите вес - ";
	std::cin >> c.weight;
	std::cout << "Введите максимальную скорость - ";
	std::cin >> c.maxsp;

	if ((a.weight > b.weight) && (a.weight > c.weight)) {
		std::cout << "Первый робот самый тяжелый";
		std::cout << "\nЕго вес составляет " << a.weight << "\nЕго размер " << a.size << "\nЕго максимальная скорость " << a.maxsp;
	}
	if ((b.weight > a.weight) && (b.weight > c.weight)) {
		std::cout << "Второй робот самый тяжелый";
		std::cout << "\nЕго вес составляет " << b.weight << "\nЕго размер " << b.size << "\nЕго максимальная скорость " << b.maxsp;
	}
	if ((c.weight > b.weight) && (c.weight > a.weight)) {
		std::cout << "Третий робот самый тяжелый";
		std::cout << "\nЕго вес составляет " << c.weight << "\nЕго размер " << c.size << "\nЕго максимальная скорость " << c.maxsp;
	}

	return 0;
}