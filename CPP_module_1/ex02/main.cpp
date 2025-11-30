#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string	*varP = &var;
	std::string& Rvar = var;

	std::cout << &var << std::endl;
	std::cout << varP << std::endl;
	std::cout << &Rvar << std::endl;

	std::cout << var << std::endl;
	std::cout << *varP << std::endl;
	std::cout << Rvar << std::endl;
}