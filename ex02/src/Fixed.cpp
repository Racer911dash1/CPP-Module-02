#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include "colors.hpp"

Fixed::Fixed()
{
	std::cout << GREEN << "Fixed Default Contructor Called\n" << RESET;
}

Fixed::Fixed(const int value) : raw_(value << fractional_bits_)
{
	std::cout << GREEN << "Fixed Int Constructor Called\n" << RESET;
	raw_ = value << fractional_bits_;
}

Fixed::Fixed(const float value) : raw_(std::roundf(value * (1 << fractional_bits_)))
{
	std::cout << GREEN << "Fixed Float Constructor Called\n" << RESET;
}

Fixed::Fixed(const Fixed& other) : raw_(other.raw_)
{
	std::cout << YELLOW << "Fixed Copy Contructor Called\n" << RESET;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << BRIGHT_GREEN << "Fixed Assignment Operator Called\n" << RESET;
	raw_ = other.raw_;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Fixed Destructor Called\n" << RESET;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}

bool Fixed::operator>(const Fixed& other) const
{
	return raw_ > other.raw_;
}

bool Fixed::operator<(const Fixed& other) const
{
	return raw_ < other.raw_;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return raw_ >= other.raw_;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return raw_ <= other.raw_;
}

bool Fixed::operator==(const Fixed& other) const
{
	return raw_ == other.raw_;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return raw_ != other.raw_;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return toFloat() / other.toFloat();
}

Fixed& Fixed::operator++()
{
	raw_ += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	raw_ += 1;
	return temp;
}

Fixed& Fixed::operator--()
{
	raw_ -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	raw_ -= 1;
	return temp;
}

float Fixed::toFloat() const
{
	return raw_ / static_cast<float>(1 << fractional_bits_);
}

int Fixed::toInt() const
{
	return raw_ >> fractional_bits_;
}

int Fixed::getRawBits() const
{
	return raw_;
}

void Fixed::setRawBits(const int value)
{
	raw_ = value << fractional_bits_;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	return out << value.toFloat();
}
