#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(Fixed const& src);
	Fixed& operator=(Fixed const& src);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
private:
	int fpi;
	static int const fract_bits;
};

#endif
