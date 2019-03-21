#include <iostream>

#include "PythagoreanTriplet.h"



int main(int argc, char **argv)
{
	unsigned long long p9_answ = 0;


	PythagoreanTriplet pythago;

	std::vector<unsigned int> result = pythago.find_pythagorean_triple_of_sum(1000);

	unsigned int a = result.at(0), b = result.at(1), c = result.at(2);

	p9_answ = a * b * c;



	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << "\n";
	std::cout << "The answer to the 9th problem of ProjectEuler.Net is " << p9_answ << ".\n";


	return 0;
}