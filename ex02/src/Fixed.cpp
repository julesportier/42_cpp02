#include "Fixed.h"
#include <iostream>
#include <cmath>

const int Fixed::m_fract_bits = 8;

/******************
 * PUBLIC METHODS *
 * ***************/
Fixed::Fixed() : m_fpi(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int i) : m_fpi(i << m_fract_bits)
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : m_fpi(roundf(f * (1 << (m_fract_bits))))
{
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& src) : m_fpi(src.getRawBits())
{
	// std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& src)
{
	// std::cout << "Copy assignement operator called\n";
	if (this != &src)
		m_fpi = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called\n";
	return (m_fpi);
}

void Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called\n";
	m_fpi = raw;
}

float Fixed::toFloat() const
{
	return ((float)m_fpi / (float)(1 << m_fract_bits));
}

float Fixed::toInt() const
{
	return (m_fpi >> m_fract_bits);
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (m_fpi < rhs.getRawBits());
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return (rhs < *this);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (!(*this > rhs));
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (!(*this < rhs));
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (m_fpi ==  rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return (!(*this == rhs));
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	Fixed temp(this->toFloat() + rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	Fixed temp(this->toFloat() - rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	Fixed temp(this->toFloat() * rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed temp(this->toFloat() / rhs.toFloat());
	return (temp);
}

std::ostream& operator<<(std::ostream& os, const Fixed& i)
{
	os << i.toFloat();
	return (os);
}
