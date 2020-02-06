#include <iostream>

#include "../src/include/Probability.hpp"
#include "../src/RandomGenerators.hpp"

int main() {
	double d = random_real(0.0, 10.0);
	
	std::cout << d << std::endl;

	Geometry::Circle RC;
	Geometry::Point p = RC.born();

	std::cout << p.to_string();

}