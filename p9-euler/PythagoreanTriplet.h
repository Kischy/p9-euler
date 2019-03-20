#pragma once


#include <vector>
#include <cmath>


class PythagoreanTriplet
{
public:
	std::vector<unsigned int> find_pythagorean_triple_of_sum(unsigned int sum_of_abc) const
	{
		std::vector<unsigned int> abc;
		unsigned int a = 0, b = 0, c = 0;




		abc.push_back(a);
		abc.push_back(b);
		abc.push_back(c);
		return abc;
	}


	static unsigned int sqrt(unsigned int val)
	{
		unsigned int sqrt = (unsigned int)(std::sqrt(double(val)));

		if ((sqrt*sqrt) == val) return sqrt;

		return 0;
	}

private:
	unsigned int find_second_value(unsigned int first_val, unsigned int sum_of_abc) const
	{
		unsigned int b = first_val, c = first_val, sum = 0;
		
		while (sum <= sum_of_abc)
		{
			
		}	
		


		return b;
	}


	


};

