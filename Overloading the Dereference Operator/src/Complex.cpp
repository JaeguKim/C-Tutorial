/*
 * Complex.cpp
 *
 *  Created on: 2018. 5. 7.
 *      Author: jaegu
 */

#include "Complex.h"

ostream &operator<<(ostream &out, const Complex &c) {
	out << "(" << c.getReal() << "," << c.getImaginary() << ")";
	return out;
}

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex &c1, double d) {
	return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex operator+(double d, const Complex &c1) {
	return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex Complex::operator*() const {
	return Complex(real, -imaginary);
}

Complex::Complex() :real(0), imaginary(0){
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

}

Complex::Complex(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}

bool Complex::operator==(const Complex &other) const {
	return (real == other.real && imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex &other) const {
	return !(*this == other);
}
