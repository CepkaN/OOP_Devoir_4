#include"Complex.h"
#include<iostream>

Complex::Complex() {
	_realo = 1;
	_immag = 1;
}
Complex::Complex(double re, double im):_realo(re),_immag(im){}
Complex::~Complex() {}
void Complex::MostraCom() {
	std::cout << _realo << " + i(" << _immag << ")\n";
}
void Complex::operator+(Complex& complex){
	double a = _realo + complex._realo;
	double b = _immag + complex._immag;
	Complex com(a, b);
	com.MostraCom();
}
void Complex::operator-(Complex& complex) {
	double a = _realo - complex._realo;
	double b = _immag - complex._immag;
	Complex com(a, b);
	com.MostraCom();
}
void Complex::operator*(Complex& complex) {
	double a = (_realo * complex._realo) - (_immag * complex._immag);
	double b = (_immag * complex._realo) + (_realo * complex._immag);
	Complex com(a, b);
	com.MostraCom();
}
void Complex::operator/(Complex& complex) {
	double a = ((_realo * complex._realo) + (_immag * complex._immag)) / ((complex._realo * complex._realo) + (complex._immag * complex._immag));
	double b = ((_immag * complex._realo) - (_realo * complex._immag)) / ((complex._realo * complex._realo) + (complex._immag * complex._immag));
	Complex com(a, b);
	com.MostraCom();
}