#include "Fixed.h"
#include <iostream>
#include <cmath>

int const Fixed::fract_bits = 8;

/******************
 * PUBLIC METHODS *
 * ***************/
Fixed::Fixed() : fpi(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int i) : fpi(i << fract_bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : fpi(roundf(f * (1 << (fract_bits))))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(Fixed const& src) : fpi(src.getRawBits())
{
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(Fixed const& src)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &src)
		this->fpi = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->fpi);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fpi = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->fpi / (float)(1 << fract_bits));
}

float Fixed::toInt() const
{
	return (this->fpi >> fract_bits);
}
