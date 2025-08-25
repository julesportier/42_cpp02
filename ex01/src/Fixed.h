#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(const int i);
	// Fixed(const float f);
	Fixed(Fixed const& src);
	Fixed& operator=(Fixed const& src);
	~Fixed();
	// float operator<<(Fixed i);
	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat() const;
	float toInt() const;
private:
	int fpi;
	static int const fract_bits;
};

#endif
