#include "Fixed.hpp"
#include <iostream>

int main()
{
	{
		Fixed a;
		Fixed b( a );
		Fixed c;

		c = b;
		std::cout << a.getRawBits() << "\n";
		std::cout << b.getRawBits() << "\n";
		std::cout << c.getRawBits() << "\n";

		a.setRawBits(42);
		b.setRawBits(-42);
		c.setRawBits(a.getRawBits() - b.getRawBits());
		std::cout << a.getRawBits() << "\n";
		std::cout << b.getRawBits() << "\n";
		std::cout << c.getRawBits() << "\n";
	}
	return EXIT_SUCCESS;
}
