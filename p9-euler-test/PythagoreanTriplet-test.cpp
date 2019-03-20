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


TEST(PythagoreanTripletSqrtTest, SQRTofSimpleInteger) {	
	ASSERT_EQ(PythagoreanTriplet::sqrt(1), 1);
	ASSERT_EQ(PythagoreanTriplet::sqrt(25), 5);
	ASSERT_EQ(PythagoreanTriplet::sqrt(81), 9);
	ASSERT_EQ(PythagoreanTriplet::sqrt(555), 308025);
	ASSERT_EQ(PythagoreanTriplet::sqrt(80), 0);
}


TEST_F(PythagoreanTripletTestClass, FindSimplePythagoreanTripleEqualToSum)
{
	std::vector<unsigned int> triple = { 3,4,5 };
	ASSERT_EQ(pythago.find_pythagorean_triple_of_sum(12), triple);
}


