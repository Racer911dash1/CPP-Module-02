#include <iostream>
#include "Fixed.hpp"

int main()
{
	{
		Fixed a(8);
		Fixed b(4);
		Fixed c(8);

		Fixed add = a.toInt() + b.toInt();
		Fixed subtract = a.toInt() - b.toInt();
		Fixed multiply = a.toInt() * b.toInt();
		Fixed divide = a.toInt() / b.toInt();

		std::cout << a << " > " << c << " : " << (a > c ? "true" : "false") << "\n";
		std::cout << a << " > " << b << " : " << (a > b ? "true" : "false") << "\n";
		std::cout << b << " > " << a << " : " << (b > a ? "true" : "false") << "\n\n";
		std::cout << a << " < " << c << " : " << (a < c ? "true" : "false") << "\n";
		std::cout << a << " < " << b << " : " << (a < b ? "true" : "false") << "\n";
		std::cout << b << " < " << a << " : " << (b < a ? "true" : "false") << "\n\n";
		std::cout << a << " >= " << c << " : " << (a >= c ? "true" : "false") << "\n";
		std::cout << a << " >= " << b << " : " << (a >= b ? "true" : "false") << "\n";
		std::cout << b << " >= " << a << " : " << (b >= a ? "true" : "false") << "\n\n";
		std::cout << a << " <= " << c << " : " << (a <= c ? "true" : "false") << "\n";
		std::cout << a << " <= " << b << " : " << (a <= b ? "true" : "false") << "\n";
		std::cout << b << " <= " << a << " : " << (b <= a ? "true" : "false") << "\n\n";
		std::cout << a << " == " << b << " : " << (a == b ? "true" : "false") << "\n";
		std::cout << a << " == " << c << " : " << (a == c ? "true" : "false") << "\n\n";
		std::cout << a << " != " << b << " : " << (a != b ? "true" : "false") << "\n";
		std::cout << a << " != " << c << " : " << (a != c ? "true" : "false") << "\n\n";
		std::cout << a << " + " << b << " : " << add << "\n";
		std::cout << a << " - " << b << " : " << subtract << "\n";
		std::cout << a << " * " << b << " : " << multiply << "\n";
		std::cout << a << " / " << b << " : " << divide << "\n";
	}
	{
		Fixed a(9.0f);
		Fixed b(4.5f);
		Fixed c(9.0f);

		Fixed add = a + b;
		Fixed subtract = a - b;
		Fixed multiply = a * b;
		Fixed divide = a / b;

		std::cout << a << " > " << c << " : " << (a > c ? "true" : "false") << "\n";
		std::cout << a << " > " << b << " : " << (a > b ? "true" : "false") << "\n";
		std::cout << b << " > " << a << " : " << (b > a ? "true" : "false") << "\n\n";
		std::cout << a << " < " << c << " : " << (a < c ? "true" : "false") << "\n";
		std::cout << a << " < " << b << " : " << (a < b ? "true" : "false") << "\n";
		std::cout << b << " < " << a << " : " << (b < a ? "true" : "false") << "\n\n";
		std::cout << a << " >= " << c << " : " << (a >= c ? "true" : "false") << "\n";
		std::cout << a << " >= " << b << " : " << (a >= b ? "true" : "false") << "\n";
		std::cout << b << " >= " << a << " : " << (b >= a ? "true" : "false") << "\n\n";
		std::cout << a << " <= " << c << " : " << (a <= c ? "true" : "false") << "\n";
		std::cout << a << " <= " << b << " : " << (a <= b ? "true" : "false") << "\n";
		std::cout << b << " <= " << a << " : " << (b <= a ? "true" : "false") << "\n\n";
		std::cout << a << " == " << b << " : " << (a == b ? "true" : "false") << "\n";
		std::cout << a << " == " << c << " : " << (a == c ? "true" : "false") << "\n\n";
		std::cout << a << " != " << b << " : " << (a != b ? "true" : "false") << "\n";
		std::cout << a << " != " << c << " : " << (a != c ? "true" : "false") << "\n\n";
		std::cout << a << " + " << b << " : " << add << "\n";
		std::cout << a << " - " << b << " : " << subtract << "\n";
		std::cout << a << " * " << b << " : " << multiply << "\n";
		std::cout << a << " / " << b << " : " << divide << "\n";
	}
	{
		Fixed a;
		Fixed temp;

		std::cout << "Before Post-increment: " << a << "\n";
		temp = a++;
		std::cout << "During Post-increment: " << temp << "\n";
		std::cout << "After Post-increment:  " << a << "\n\n";
		std::cout << "Before Post-decrement: " << a << "\n";
		temp = a--;
		std::cout << "During Post-decrement: " << temp << "\n";
		std::cout << "After Post-decrement:  " << a << "\n\n";
		std::cout << "Before Pre-decrement:  " << a << "\n";
		temp = --a;
		std::cout << "During Pre-decrement:  " << temp << "\n";
		std::cout << "After Pre-decrement:   " << a << "\n\n";
		std::cout << "Before Pre-increment:  " << a << "\n";
		temp = ++a;
		std::cout << "During Pre-increment:  " << temp << "\n";
		std::cout << "After Pre-increment:   " << a << "\n";
	}
	{
		Fixed a(8);
		Fixed b(4);
		const Fixed c(8);
		const Fixed d(4);

		std::cout << "Fixed::max(" << a << ", " << b << ") = " << Fixed::max(a, b) << "\n";
		std::cout << "Fixed::max(" << b << ", " << a << ") = " << Fixed::max(b, a) << "\n";
		std::cout << "Fixed::min(" << a << ", " << b << ") = " << Fixed::min(a, b) << "\n";
		std::cout << "Fixed::min(" << b << ", " << a << ") = " << Fixed::min(a, b) << "\n\n";
		std::cout << "Fixed::max(" << c << ", " << d << ") = " << Fixed::max(c, d) << "\n";
		std::cout << "Fixed::max(" << d << ", " << c << ") = " << Fixed::max(d, c) << "\n";
		std::cout << "Fixed::min(" << c << ", " << d << ") = " << Fixed::min(c, d) << "\n";
		std::cout << "Fixed::min(" << d << ", " << c << ") = " << Fixed::min(c, d) << "\n";
	}
	return EXIT_SUCCESS;
}
