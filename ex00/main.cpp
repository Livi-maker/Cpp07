#include "whatever.hpp"

int main()
{
	std::cout << min(3, 4) << std::endl;
	std::cout << min("ciao", "c") << std::endl;
	
	std::string a = "ciao";
	std::string b = "hello";
	swap(a, b);
	std::cout << a << std::endl;

	std::cout << max(21.05, 23.00) << std::endl;
}
