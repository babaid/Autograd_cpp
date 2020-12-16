#pragma once
#include "DualMath.h"
#include<iostream>

class DualNumber;

DualNumber operator+(const DualNumber&, const DualNumber&);
DualNumber operator-(const DualNumber&, const DualNumber&);
DualNumber operator*(const DualNumber&, const DualNumber&);
DualNumber operator/(const DualNumber&, const DualNumber&);

DualNumber operator+(const double, const DualNumber&);
DualNumber operator+(const DualNumber&, const double);

DualNumber operator*(const double, const DualNumber&);
DualNumber operator*(const DualNumber&, const double&);

DualNumber operator/(const double, const DualNumber&);
DualNumber operator/(const DualNumber&, const double);

std::ostream& operator<<(std::ostream& os, const DualNumber& num);




class DualNumber
{
private:
	double x, y;
public:
	DualNumber(double _x, double _y):x(_x), y(_y){}
	DualNumber(DualNumber&) = default;
	DualNumber& operator=(const DualNumber&) = default;

	friend DualNumber operator+(const DualNumber&, const DualNumber&);
	friend DualNumber operator-(const DualNumber&, const DualNumber&);
	friend DualNumber operator*(const DualNumber&, const DualNumber&);
	friend DualNumber operator/(const DualNumber&, const DualNumber&);

	friend DualNumber operator+(const double,const DualNumber&);
	friend DualNumber operator+(const DualNumber&,const double);

	friend DualNumber operator*(const double,const DualNumber&);
	friend DualNumber operator*(const DualNumber&,const double&);

	friend DualNumber operator/(const double, const DualNumber&);
	friend DualNumber operator/(const DualNumber&, const double);

	friend std::ostream& operator<<(std::ostream& os, const DualNumber& num);

	friend DualNumber DualMath::exp(const DualNumber&);
	friend DualNumber DualMath::pow(const DualNumber&, const double&);
	friend DualNumber DualMath::sin(const DualNumber&);
	friend DualNumber DualMath::cos(const DualNumber&);
	friend DualNumber DualMath::abs(const DualNumber&);
	friend DualNumber DualMath::log(const DualNumber&);

	friend DualNumber DualMath::tan(const DualNumber&);
	friend DualNumber DualMath::atan(const DualNumber&);
};


