#include "trygonometria.h"
#include <cmath>
#include<iostream>

double degreemath::sinus(double degree) {
	double rad = 3.14 / degree;
	return std::sin(rad); 
}

double degreemath2::cosinus(double degree) {

	double rad = 3.14 / degree;
	return std::cos(rad); 
}

double degreemath3::tangens(double degree) {

	double rad = 3.14 / degree;
	return std::tan(rad); 
}

double degreemath4::cotangens(double degree) {

	double rad = 3.14 / degree;
	double wynik = 1 / (tan(rad));
	return wynik; 
}