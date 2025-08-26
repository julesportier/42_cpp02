#include "Fixed.h"
#include <iostream>

const int Fixed::m_fract_bits = 8;

/******************
 * PUBLIC METHODS *
 * ***************/
Fixed::Fixed() : m_fpi(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& src) : m_fpi(src.getRawBits())
{
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &src)
		m_fpi = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (m_fpi);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	m_fpi = raw;
}
