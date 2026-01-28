#include "Fixed.hpp"
#include "Point.hpp"
#include "colors.hpp"
#include <iostream>
#include <iomanip>

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main()
{
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 4.0f);
		Point c(4.0f, 0.0f);
		Point d(1.0f, 1.0f);

		std::cout <<	"b(0.0, 4.0)\n"
						"|⟍\n"
						"|  ⟍\n"
						"|    ⟍\n"
						"|      ⟍\n"
						"|        ⟍\n"
						"|   X(1.0, 1.0)\n"
						"|            ⟍\n"
						"|______________⟍\n"
						"a(0.0, 0.0)     c(4.0, 0.0)\n\n";

		std::cout << (bsp(a, b, c, d) ? GREEN "true" RESET : BRIGHT_RED "false" RESET) << "\n";
		std::cout << std::setfill('-') << std::setw(80) << "\n\n";
	}
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 4.0f);
		Point c(4.0f, 0.0f);
		Point d(2.5f, 2.5f);

		std::cout <<	"b(0.0, 4.0)\n"
						"|⟍\n"
						"|  ⟍\n"
						"|    ⟍\n"
						"|      ⟍   X (2.5, 2.5)\n"
						"|        ⟍\n"
						"|          ⟍\n"
						"|            ⟍\n"
						"|______________⟍\n"
						"a(0.0, 0.0)     c(4.0, 0.0)\n\n";

		std::cout << (bsp(a, b, c, d) ? GREEN "true" RESET : BRIGHT_RED "false" RESET) << "\n";
		std::cout << std::setfill('-') << std::setw(80) << "\n\n";
	}
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 4.0f);
		Point c(4.0f, 0.0f);
		Point d(0.01f, 3.95f);

		std::cout << CYAN "Can't be accurately visualized\n\n" RESET;
		std::cout <<	"b(0.0, 4.0)\n"
						" X(0.01, 3.95)\n"
						"|  ⟍\n"
						"|    ⟍\n"
						"|      ⟍\n"
						"|        ⟍\n"
						"|          ⟍\n"
						"|            ⟍\n"
						"|______________⟍\n"
						"a(0.0, 0.0)     c(4.0, 0.0)\n\n";

		std::cout << (bsp(a, b, c, d) ? GREEN "true" RESET : BRIGHT_RED "false" RESET) << "\n";
		std::cout << std::setfill('-') << std::setw(80) << "\n\n";
	}
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 4.0f);
		Point c(4.0f, 0.0f);
		Point d(2.5f, 1.25f);

		std::cout <<	"b(0.0, 4.0)\n"
						"|⟍\n"
						"|  ⟍\n"
						"|    ⟍\n"
						"|      ⟍\n"
						"|        ⟍\n"
						"|         X(2.5, 1.5)\n"
						"|            ⟍\n"
						"|______________⟍\n"
						"a(0.0, 0.0)     c(4.0, 0.0)\n\n";

		std::cout << (bsp(a, b, c, d) ? GREEN "true" RESET : BRIGHT_RED "false" RESET) << "\n";
		std::cout << std::setfill('-') << std::setw(80) << "\n\n";
	}
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 4.0f);
		Point c(4.0f, 0.0f);
		Point d(3.9f, 0.1f);

		std::cout << CYAN "Can't be accurately visualized\n\n" RESET;
		std::cout <<	"b(0.0, 4.0)\n"
						"|⟍\n"
						"|  ⟍\n"
						"|    ⟍\n"
						"|      ⟍\n"
						"|        ⟍\n"
						"|          ⟍\n"
						"|            ⟍\n"
						"|______________X(3.9, 0.1)\n"
						"a(0.0, 0.0)     c(4.0, 0.0)\n\n";

		std::cout << (bsp(a, b, c, d) ? GREEN "true" RESET : BRIGHT_RED "false" RESET) << "\n";
	}
	return EXIT_SUCCESS;
}
