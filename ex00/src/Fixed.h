#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int raw);
private:
	int fpi;
	static const int fract_bits;
};

#endif
