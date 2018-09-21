#include "Trapeze.h"
#include <iostream>

Trapeze::Trapeze(double a, double b, double h) : side_a(a), side_b(b), height(h){
	std::cout << "Trapeze created: " << a << ", " << b << ", " << h << std::endl;
}

void Trapeze::Print(){
	std::cout << FigureSquare() << std::endl;
}

double Trapeze::FigureSquare(){
	return 0.5*(side_a+side_b)*height;
}

Trapeze::~Trapeze(){
	std::cout << "Trapeze deleted\n" << std::endl;
}