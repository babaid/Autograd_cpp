#include "../include/DualNumber.h"
#include<iostream>
#include<cmath>

DualNumber operator+(const DualNumber& u,const DualNumber& v) 
{
	return DualNumber(u.x + v.x, u.y + v.y);
}
DualNumber operator-(const DualNumber& u,const DualNumber& v)
{
	return DualNumber(u.x - v.x, u.y - v.y);
}
DualNumber operator*(const DualNumber& u,const DualNumber& v)
{
	return DualNumber(u.x * v.x, u.x * v.y + v.x * u.y);
}
DualNumber operator/(const DualNumber& u,const DualNumber& v)
{
	return DualNumber(u.x / v.x, (v.x * u.y - u.x * v.y) / std::pow(v.x, 2));
}

DualNumber operator*(const double s,const DualNumber& u)
{
	return DualNumber(s * u.x, s * u.y);
}
DualNumber operator*(const DualNumber& u,const double& s)
{
	return DualNumber(s * u.x, s * u.y);
}

DualNumber operator+(const double s, const DualNumber& u)
{
	return DualNumber(s + u.x, u.y);
}
DualNumber operator+(const DualNumber& u,const double s)
{
	return DualNumber(s + u.x, u.y);
}

std::ostream& operator<<(std::ostream& os, const DualNumber& num)
{
	os << "x: " << num.x << " x': " << num.y << std::endl;
	return os;
}

DualNumber operator/(const double s, const DualNumber& u)
{
	return DualNumber(s / u.x, -s * u.y / std::pow(u.x, 2));
}
DualNumber operator/(const DualNumber& u, const double s)
{
	return DualNumber(u.x / s, u.y / s);
}

