#include "Fixed.h"
#include <iostream>
#include <iostream>

int main( void ) {
	Fixed a(0.34f);
	Fixed b(1.91f);
	Fixed c(0.34f);
	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << c << '\n';
	// std::cout << (a < b) << '\n';
	// std::cout << (b < a) << '\n';
	// std::cout << (a < a) << '\n';
	// std::cout << (a > b) << '\n';
	// std::cout << (a <= b) << '\n';
	// std::cout << (a <= c) << '\n';
	// std::cout << (a >= b) << '\n';
	// std::cout << (a >= c) << '\n';
	// std::cout << (b == c) << '\n';
	// std::cout << (a == c) << '\n';
	// std::cout << (b != c) << '\n';
	// std::cout << (a != c) << '\n';
	// std::cout << (a + c) << '\n';
	// std::cout << (a + b + c) << '\n';
	std::cout << (b - a) << '\n';
	std::cout << (a - b) << '\n';
	std::cout << (a - b - c) << '\n';
	std::cout << (a - c) << '\n';
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
// int main( void ) {
// 	Fixed a;
// 	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	// std::cout << ++a << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << a++ << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << b << std::endl;
// 	// std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }
