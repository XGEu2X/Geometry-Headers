#include <iostream>

#include "../src/RandomGenerators.hpp"

int main() {
	double d = random_real(0.0, 10.0);
	
	std::cout << d << std::endl;

	Geometry::Circle RC;
	Geometry::PointSet P = RC.born(10);

	std::cout << P.to_string();

}