#include <iostream>
#include <string>

int main()
{
	std::cout << "What's your first name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}
