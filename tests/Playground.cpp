#include <iostream>

#include "../src/RandomGenerators.hpp"

using namespace Geometry;

int main() {
	CirclePointSet Generator(5);
	std::vector<Circle::pointSet> L = Generator.born(10, 5);
	for (Circle::pointSet P : L) {
		std::cout << P.to_string() << std::endl;
	}
	return 0;
}