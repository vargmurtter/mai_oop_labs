#include <cstdlib>
#include <iostream>
#include "Square.h"
#include "Rictangle.h"
#include "Trapeze.h"

int main() {
	try{
		std::cout << "Enter the value for square: ";
		double s_a;
		std::cin >> s_a; 

		std::cout << "Enter the value for rectangle: " << std::endl;
		double r_a;
		double r_b;
		std::cout << "a> ";
		std::cin >> r_a; 
		std::cout << "b> ";
		std::cin >> r_b; 

		std::cout << "Enter the value for trapeze: " << std::endl;
		double t_a;
		double t_b;
		double t_h;
		std::cout << "a> ";
		std::cin >> t_a; 
		std::cout << "b> ";
		std::cin >> t_b;
		std::cout << "h> ";
		std::cin >> t_h; 

		std::cout << std::endl;

		// квадрат
  		Square *s = new Square(s_a);
	    s->Print();
	    delete s;

	    // прямоугольник
	    Rictangle *r = new Rictangle(r_a, r_b);
	    r->Print();
	    delete r;

	    // трапеция
	    Trapeze *t = new Trapeze(t_a, t_b, t_h);
	    t->Print();
	    delete t;


	} catch (int e){
		std::cout << "THIS IS FUKIN' EXCEPTION! YOU NEED TYPE ANY INTEGER NUMBER!!!" << std::endl;
	}
	
    return 0;
}