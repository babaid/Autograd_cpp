#include "../include/DualNumber.h"
#include "../include/DualMath.h"
#include<iostream>

using namespace DualMath;

int main()
{
	DualNumber a(1.5, 1);

	auto f =  [](DualNumber& x) {return pow(x, 2); };

	std::cout << f(a) << std::endl;

}