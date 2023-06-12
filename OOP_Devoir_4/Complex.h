#pragma once

class Complex {
private:
	double _realo;
	double _immag;
public:
	Complex();
	Complex(double re, double im);
	~Complex();
	void operator+(Complex& complex);
	void operator-(Complex& complex);
	void operator*(Complex& complex);
	void operator/(Complex& complex);
	void MostraCom();
};