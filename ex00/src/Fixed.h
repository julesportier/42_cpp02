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
	int m_fpi;
	static const int m_fract_bits;
};

#endif
