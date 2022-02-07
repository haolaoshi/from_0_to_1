#include <iostream>

int main()
{
	int a = 10;
	int* p = &a;

	std::cout << " a addr = " << p << std::endl;
	std::cout << " p = " << &a << std::endl;
	std::cout << " unreference p = " << *p << std::endl;
	*p += 10;
	std::cout << " manual add 10 to *p , p = " << *p << std::endl;

	std::cout << " 指针大小 " << sizeof(p) << std::endl;

	std::string* ps;
	std::cout << " string 指针大小:" << sizeof(ps) << std::endl;

	int b = 100;

	//const 修饰指针
	const int* p2 = &a;
	p2 = &b;
	//*p2 /= 10;  指向的值不可以修改

	//const 修饰常量
	int* const p3 = &a;
	//p3 = &b; 指向不可修改
	*p3 *= 10;

	return 0;
}