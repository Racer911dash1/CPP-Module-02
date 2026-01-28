#include "Fixed.hpp"
#include "colors.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << GREEN << "Fixed Default Contructor Called\n" << RESET;
}

Fixed::Fixed(const Fixed& other) : raw_(other.raw_)
{
	std::cout << YELLOW << "Fixed Copy Contructor Called\n" << RESET;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << BRIGHT_GREEN << "Fixed Assignment operator Called\n" << RESET;
	raw_ = other.raw_;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Fixed Destructor Called\n" << RESET;
}

int Fixed::getRawBits() const
{
	return raw_;
}

void Fixed::setRawBits(const int value)
{
	raw_ = value;
}
