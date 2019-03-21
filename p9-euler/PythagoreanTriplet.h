#pragma once


#include <vector>


class PythagoreanTriplet
{
public:
	std::vector<unsigned int> find_pythagorean_triple_of_sum(unsigned int sum_of_abc) const
	{
		std::vector<unsigned int> abc;
		unsigned int a = 1, b = 2, c = 3, sum = calc_sum(a,b,c);

		while (sum <= sum_of_abc)
		{
			b = find_second_value(a, sum_of_abc);

			if (isValidValue(b))
			{
				c = sqrt_ineffective(a * a + b * b);

				if (isValidValue(c))
				{
					sum = calc_sum(a, b, c);
					if (sum == sum_of_abc) break;
				}
			}

			a++;
		}


		if (sum != sum_of_abc)
		{
			a = 0;
			b = 0;
			c = 0;
		}


		abc.push_back(a);
		abc.push_back(b);
		abc.push_back(c);
		return abc;
	}




private:

	inline bool isValidValue(unsigned int value) const
	{
		return value != 0;
	}

	inline unsigned int find_second_value(unsigned int first_val, unsigned int sum_of_abc) const
	{
		unsigned int b = first_val+1, c = first_val+2, sum = calc_sum(first_val,b,c);
		
		while (sum <= sum_of_abc)
		{
			if (sum == sum_of_abc) return b;

			b += 1;
			c = sqrt_ineffective(first_val*first_val + b * b);
			sum = calc_sum(first_val, b, c);
		}		


		return 0;
	}


	inline unsigned int calc_sum(unsigned int a, unsigned int b, unsigned int c)  const
	{
		return a + b + c;
	}

	// has to be public for testing
	inline unsigned int sqrt_ineffective(unsigned int val) const
	{
		unsigned int sqrt = 0, sqrt_2x = 0;

		while (sqrt_2x <= val)
		{
			if (sqrt_2x == val) return sqrt;

			sqrt++;
			sqrt_2x = sqrt * sqrt;

		}

		return 0;
	}

	


};

