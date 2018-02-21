//1396-11-25
#include <iostream>
#include <cmath>
#include "box.h"

int main(){
	// class is a datatype but we can make a new one, for example a class of student or a class of library.
	// class is a concept and object is its mesdagh
	Box b{1,2,3};
	std::cout << b.L << "," << b.W << "," << b.H << std::endl;
	return 0;
}
