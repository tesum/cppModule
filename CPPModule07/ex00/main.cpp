#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	double x = 23.2;
	double y = 2.3;
	::swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl << std::endl;

	Fixed fixed1(10);
	Fixed fixed2(26);
	::swap(fixed1, fixed2);
	std::cout << "fixed1 = " << fixed1.getNum() << ", fixed2 = " << fixed2.getNum() << std::endl;
	std::cout << "min( fixed1, fixed2 ) = " << ::min( fixed1, fixed2 ).getNum() << std::endl;
	std::cout << "max( fixed1, fixed2 ) = " << ::max( fixed1, fixed2 ).getNum() << std::endl;

	return 0;
}
