#include <iostream>


void func(int &a )
{
	std::cout << "func()" << std::endl;
}

int func(const int &a)
{
	std::cout << "func(int a)" << std::endl;
	return a;
}

int main()
{
	func(10);

	return 0;
}