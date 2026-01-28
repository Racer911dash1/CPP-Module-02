#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits() const;
		void setRawBits(const int value);

	private:
		int raw_ {0};
		static const int fractional_bits_ {8};
};

#endif /* FIXED_HPP */
