#include "Fixed.h"
#include <iostream>

int const Fixed::fract_bits = 8;

/******************
 * PUBLIC METHODS *
 * ***************/
Fixed::Fixed() : fpi(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed& Fixed::operator=(Fixed const& src)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &src)
		fpi = src.getRawBits();
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
