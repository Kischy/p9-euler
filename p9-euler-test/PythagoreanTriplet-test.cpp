#include "pch.h"

#include "../p9-euler/PythagoreanTriplet.h"


class PythagoreanTripletTestClass : public testing::Test
{
public:
	PythagoreanTriplet pythago;

};


TEST(PythagoreanTripletIsAClass, Exists) {
	PythagoreanTriplet pythago;

}


TEST_F(PythagoreanTripletTestClass, FindSimplePythagoreanTriple)
{
	std::vector<unsigned int> triple = { 3,4,5 };
	ASSERT_EQ(pythago.find_pythagorean_triple(12), triple);
}


