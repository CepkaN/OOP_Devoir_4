#include"Frazione.h"
#include"Complex.h"

int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1.
	Frazione frazione1(32, 5);
	Frazione frazione2(22, 10);
	Frazione frazione3;
	frazione1.MostraFra();
	std::cout << '\n';
	frazione2.MostraFra();
	std::cout << frazione1 + frazione2 << '\n';
	std::cout << frazione1 - frazione2 << '\n';
	std::cout << frazione1.operator*(frazione2) << '\n';
	std::cout << frazione1.operator/(frazione2) << '\n';
	std::cout << frazione3 + "stroka" << '\n';
	std::cout << frazione3 - 777 << '\n';

	// Задача 2.
	std::cout << "\n\n";
	Complex complex1(7, 6);
	Complex complex2(2, 3);
	complex1 + complex2;
	complex1 - complex2;
	complex1 * complex2;
	complex1 / complex2;


	return 0;
}

