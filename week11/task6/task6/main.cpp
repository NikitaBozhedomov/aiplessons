#include <iostream>

struct sens {
	float min, max, obserr, maxsp;
};


int main() {
	setlocale(0, "");

	/*6.Имеется информация о датчиках : диапазон измеряемых значений(min, max),
	погрешность, максимальная скорость.Вывести данные о самом точном датчике.*/
	sens a, b, c;

	std::cout << "Датчик А\nВведите диапазон от до - "; 
	std::cin >> a.min >> a.max;
	std::cout << "Введите погрешность - "; 
	std::cin >> a.obserr;
	std::cout << "Введите максимальную скорость - "; 
	std::cin >> a.maxsp;

	std::cout << "Датчик B\nВведите диапазон от до - ";
	std::cin >> b.min >> b.max;
	std::cout << "Введите погрешность - ";
	std::cin >> b.obserr;
	std::cout << "Введите максимальную скорость - ";
	std::cin >> b.maxsp;

	std::cout << "Датчик C\nВведите диапазон от до - ";
	std::cin >> c.min >> c.max;
	std::cout << "Введите погрешность - ";
	std::cin >> c.obserr;
	std::cout << "Введите максимальную скорость - ";
	std::cin >> c.maxsp;

	if ((a.obserr < b.obserr) && (a.obserr < c.obserr)) {
		std::cout << "Датчик А обладает максимальной точностью";
		std::cout << "\nИмеет диапазон от " << a.min << " до " << a.max << "\nПогрешность составляет " << a.obserr << "\nМаксимальная скорость равна " << a.maxsp;
	}
	if ((b.obserr < a.obserr) && (b.obserr < c.obserr)) {
		std::cout << "Датчик B обладает максимальной точностью";
		std::cout << "\nИмеет диапазон от " << b.min << " до " << b.max << "\nПогрешность составляет " << b.obserr << "\nМаксимальная скорость равна " << b.maxsp;
	}
	if ((c.obserr < a.obserr) && (c.obserr < b.obserr)) {
		std::cout << "Датчик C обладает максимальной точностью";
		std::cout << "\nИмеет диапазон от " << c.min << " до " << c.max << "\nПогрешность составляет " << c.obserr << "\nМаксимальная скорость равна " << c.maxsp;
	}
	
	return 0;
}