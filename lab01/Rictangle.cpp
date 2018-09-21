#include "Rictangle.h"
#include <iostream>

Rictangle::Rictangle(double a, double b) : side_a(a), side_b(b){
	std::cout << "Rectangle created: " << a << ", " << b << std::endl;
}

void Rictangle::Print(){
	std::cout << FigureSquare() << std::endl;
}

double Rictangle::FigureSquare(){
	return side_a*side_b;
}

Rictangle::~Rictangle(){
	std::cout << "Rectangle deleted\n" << std::endl;
}