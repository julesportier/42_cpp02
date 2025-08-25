#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat() const;
	float toInt() const;
private:
	int fpi;
	static const int fract_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& i);

#endif
