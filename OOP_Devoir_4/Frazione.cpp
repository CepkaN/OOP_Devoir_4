#include"Frazione.h"
#include<iostream>

Frazione::Frazione() {
	_numeratore = 1;
	_denominatore = 1;
}
Frazione::Frazione(double numer,double denom):_numeratore(numer),_denominatore(denom){}
Frazione::~Frazione() {}
void Frazione::MostraFra() {
	std::cout << "Числитель : " << _numeratore << '\n';
	std::cout << "Знаменатель : " << _denominatore << '\n';
}
void Frazione::GetNumar(double numer) {
	_numeratore = numer;
}
void Frazione::GetDenom(double denom) {
	_denominatore = denom;
}
double Frazione::SetFrazione() {
	return _numeratore/_denominatore;
}
double Frazione::SetDenom() {
	return _denominatore;
}
double Frazione::operator+(Frazione& fra) {
	return this->SetFrazione() + fra.SetFrazione();
}
double Frazione::operator-(Frazione& fra) {
	return this->SetFrazione() - fra.SetFrazione();
}
double Frazione::operator*(Frazione& fra) {
	return this->SetFrazione() / fra.SetFrazione();
}
double Frazione::operator/(Frazione& fra) {
	return this->SetFrazione() * fra.SetFrazione();
}
std::string Frazione::operator+(std::string lettera) {
	return "не надо так делать";
}
int Frazione::operator-(int x) {
	return (1000 - x);
}
