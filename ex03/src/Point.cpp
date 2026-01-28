#include "Point.hpp"
#include "colors.hpp"
#include <iostream>

Point::Point()
{
	// std::cout << GREEN << "Point Default Contructor Called\n" << RESET;
}

Point::Point(const float x, const float y) : x_(x), y_(y)
{
	// std::cout << GREEN << "Point Float Constructor Called\n" << RESET;
}

Point::Point(const Point& other) : x_(other.x_), y_(other.y_)
{
	// std::cout << YELLOW << "Point Copy Contructor Called\n" << RESET;
}

Point& Point::operator=(const Point& other)
{
	// std::cout << BRIGHT_GREEN << "Point Assignment Operator Called\n" << RESET;
	(void)other;
	return *this;
}

Point::~Point()
{
	// std::cout << RED << "Point Destructor Called\n" << RESET;
}

const Fixed Point::getX() const
{
	return x_;
}

const Fixed Point::getY() const
{
	return y_;
}
