#include "Square.h"
#include <iostream>

Square::Square(double a) : side_a(a){
	std::cout << "Square created: " << a << std::endl;
}

void Square::Print(){
	std::cout << FigureSquare() << std::endl;
}

double Square::FigureSquare(){
	return side_a*side_a;
}

Square::~Square(){
	std::cout << "Square deleted\n" << std::endl;
}