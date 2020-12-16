#include "../include/DualMath.h"
#include "../include/DualNumber.h"
#include<cmath>

DualNumber DualMath::exp(const DualNumber& u)
{
	return DualNumber(std::exp(u.x), u.y * std::exp(u.x));
}
DualNumber DualMath::pow(const DualNumber& u, const double& k)
{
	return DualNumber(std::pow(u.x, k), u.y * k * std::pow(u.x, k - 1));
}
DualNumber DualMath::abs(const DualNumber& u)
{
	return DualNumber(std::abs(u.x), u.y * u.x / std::abs(u.x));
}
DualNumber DualMath::log(const DualNumber& u)
{
	return DualNumber(std::log(u.x), u.y / u.x);
}
DualNumber DualMath::tan(const DualNumber& u)
{
	return DualNumber(std::tan(u.x), u.y / std::pow(std::cos(u.x), 2));
}
DualNumber DualMath::atan(const DualNumber& u)
{
	return DualNumber(std::atan(u.x), u.y / (1 + std::pow(u.x, 2)));
}