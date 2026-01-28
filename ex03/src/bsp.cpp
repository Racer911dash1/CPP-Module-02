#include "Point.hpp"
#include <iostream>
#include <iomanip>

void printCalculationSteps(const Point point, const Point a, const Point b)
{
	std::cout << "(" << point.getX() << " - " << b.getX() << ") * (" << a.getY() << " - " << b.getY() << ") - (" << a.getX() << " - " << b.getX() << ") * (" << point.getY() << " - " << b.getY() << ")\n";
	std::cout << point.getX() - b.getX() << " * " << a.getY() - b.getY() << " - " << a.getX() - b.getX() << " * " << point.getY() - b.getY() << "\n";
	std::cout << (point.getX() - b.getX()) * (a.getY() - b.getY()) << " - " << (a.getX() - b.getX()) * (point.getY() - b.getY()) << "\n";
	std::cout << "Result: " << (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY()) << "\n\n";
}

Fixed sign(const Point point, const Point a, const Point b)
{
	printCalculationSteps(point, a, b);
	return (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed p1;
	Fixed p2;
	Fixed p3;
	bool has_negative;
	bool has_positive;

	p1 = sign(point, a, b);
	p2 = sign(point, b, c);
	p3 = sign(point, c, a);

	has_negative = (p1 <= 0) || (p2 <= 0) || (p3 <= 0);
	has_positive = (p1 >= 0) || (p2 >= 0) || (p3 >= 0);
	return !(has_negative && has_positive);
}
