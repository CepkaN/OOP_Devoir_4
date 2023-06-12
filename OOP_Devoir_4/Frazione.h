#pragma once
#include<iostream>


class Frazione {
private:
	double _numeratore;
	double _denominatore;
public:
	Frazione(double numer, double denom);
	Frazione();
	~Frazione();
	void MostraFra();
	void GetNumar(double numer);
	void GetDenom(double denom);
	double SetFrazione();
	double SetDenom();
	double operator+(Frazione& fra);
	double operator-(Frazione& fra);
	double operator*(Frazione& fra);
	double operator/(Frazione& fra);
	std::string operator+(std::string lettera);
	int operator-(int x);
};
