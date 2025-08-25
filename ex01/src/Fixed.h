#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const& src);
	Fixed& operator=(Fixed const& src);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat() const;
	float toInt() const;
private:
	int fpi;
	static int const fract_bits;
};

std::ostream& operator<<(std::ostream& os, Fixed const& i);

#endif
