#include<iostream>
#include "trygonometria.h"
#include <cmath>


int main()
{
	double degree;
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> degree;
	getchar();


	double a = degreemath::sinus(degree);
	double b = degreemath2::cosinus(degree);
	double c = degreemath3::tangens(degree);
	double d = degreemath4::cotangens(degree);
	std::cout << "sinus: " << a << " cosinus: " << b << " tangens: " << c << " cotangens: " << d;
	getchar();
	return 0;
}