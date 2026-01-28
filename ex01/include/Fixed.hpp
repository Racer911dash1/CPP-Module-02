#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float toFloat() const;
		int toInt() const;

		int getRawBits() const;
		void setRawBits(const int value);

	private:
		int raw_ {0};
		static const int fractional_bits_ {8};
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif /* FIXED_HPP */
