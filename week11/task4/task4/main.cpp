#include <iostream>

struct robs {
	float size, weight, maxsp;
};


int main() {
	setlocale(0, "");

	/*4.������� ���������� � �������: ��������, ���, ������������ ��������. �������
	������ � ����� ������ ������.*/
	robs a, b, c;

	std::cout << "������ �����\n������� �������� - ";
	std::cin >> a.size;
	std::cout << "������� ��� - ";
	std::cin >> a.weight;
	std::cout << "������� ������������ �������� - ";
	std::cin >> a.maxsp;

	std::cout << "������ �����\n������� �������� - ";
	std::cin >> b.size;
	std::cout << "������� ��� - ";
	std::cin >> b.weight;
	std::cout << "������� ������������ �������� - ";
	std::cin >> b.maxsp;

	std::cout << "������ �����\n������� �������� - ";
	std::cin >> c.size;
	std::cout << "������� ��� - ";
	std::cin >> c.weight;
	std::cout << "������� ������������ �������� - ";
	std::cin >> c.maxsp;

	if ((a.weight > b.weight) && (a.weight > c.weight)) {
		std::cout << "������ ����� ����� �������";
		std::cout << "\n��� ��� ���������� " << a.weight << "\n��� ������ " << a.size << "\n��� ������������ �������� " << a.maxsp;
	}
	if ((b.weight > a.weight) && (b.weight > c.weight)) {
		std::cout << "������ ����� ����� �������";
		std::cout << "\n��� ��� ���������� " << b.weight << "\n��� ������ " << b.size << "\n��� ������������ �������� " << b.maxsp;
	}
	if ((c.weight > b.weight) && (c.weight > a.weight)) {
		std::cout << "������ ����� ����� �������";
		std::cout << "\n��� ��� ���������� " << c.weight << "\n��� ������ " << c.size << "\n��� ������������ �������� " << c.maxsp;
	}

	return 0;
}