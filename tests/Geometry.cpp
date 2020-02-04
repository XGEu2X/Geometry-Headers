#include <gtest/gtest.h>

#include "../src/Point.hpp"
#include "../src/PointSet.hpp"
#include "../src/RandomGenerators.hpp"

using namespace std;
using namespace Geometry;

TEST(Point, UnitTest) {
	Point p1(vector<double>({3.2, 0, -14})), p2(vector<double>({ 7, 1.11, -0.3 }));
	Point r = 2.5 * (p1 + p2);

	ASSERT_DOUBLE_EQ(25.5, r[0]);
	ASSERT_DOUBLE_EQ(2.775, r[1]);
	ASSERT_DOUBLE_EQ(-35.75, r[2]);

	ASSERT_EQ(false, r.is_evaluated());
	r.set_value(1);
	ASSERT_EQ(true, r.is_evaluated());
}

TEST(PointSet, UnitTest) {
	PointSet S;
}