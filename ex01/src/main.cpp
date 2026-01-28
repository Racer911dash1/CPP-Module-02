#include <iostream>
#include "Fixed.hpp"

int main()
{
	{
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);

		a = Fixed(1234.4321f);

		std::cout << "a is " << a << "\n";
		std::cout << "b is " << b << "\n";
		std::cout << "c is " << c << "\n";
		std::cout << "d is " << d << "\n";
		std::cout << "a is " << a.toInt() << " as integer\n";
		std::cout << "b is " << b.toInt() << " as integer\n";
		std::cout << "c is " << c.toInt() << " as integer\n";
		std::cout << "d is " << d.toInt() << " as integer\n";
	}
	{
		Fixed a;
		Fixed b;
		Fixed c;

		a.setRawBits(42);
		b.setRawBits(0b101010);
		c.setRawBits(0x2a);
		std::cout << "a is " << a << "\n";
		std::cout << "b is " << b << "\n";
		std::cout << "c is " << c << "\n";
		std::cout << "a is " << a.toInt() << "\n";
		std::cout << "b is " << b.toInt() << "\n";
		std::cout << "c is " << c.toInt() << "\n";
	}
	{
		Fixed a;
		Fixed b;
		Fixed c;

		a = 42;
		b = 0b101010;
		c = 0x2a;
		std::cout << "a is " << a << "\n";
		std::cout << "b is " << b << "\n";
		std::cout << "c is " << c << "\n";
		std::cout << "a is " << a.toInt() << "\n";
		std::cout << "b is " << b.toInt() << "\n";
		std::cout << "c is " << c.toInt() << "\n";
	}
	return EXIT_SUCCESS;
}
