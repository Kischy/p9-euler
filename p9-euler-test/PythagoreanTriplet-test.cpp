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

//Tests for the sqrt_ineffective which has to be public in order for these tests to work.
//TEST(PythagoreanTripletSqrtTest, SQRTofSimpleInteger) {	
//	ASSERT_EQ(PythagoreanTriplet::sqrt_ineffective(1), 1);
//	ASSERT_EQ(PythagoreanTriplet::sqrt_ineffective(25), 5);
//	ASSERT_EQ(PythagoreanTriplet::sqrt_ineffective(81), 9);
//	ASSERT_EQ(PythagoreanTriplet::sqrt_ineffective(308025), 555);
//	ASSERT_EQ(PythagoreanTriplet::sqrt_ineffective(80), 0);
//}


TEST_F(PythagoreanTripletTestClass, FindSimplePythagoreanTripleEqualToSum)
{
	std::vector<unsigned int> triple = { 3,4,5 };
	ASSERT_EQ(pythago.find_pythagorean_triple_of_sum(12), triple);
}


