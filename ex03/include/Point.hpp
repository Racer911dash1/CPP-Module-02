#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();

		const Fixed getX() const;
		const Fixed getY() const;

	private:
		const Fixed x_ {0.0f};
		const Fixed y_ {0.0f};
};

#endif /* POINT_HPP */