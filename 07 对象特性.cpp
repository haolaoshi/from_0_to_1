#include <iostream>

class A
{
public:
	A() { std::cout << "A 构造" << std::endl; }
	~A() { std::cout << "A 析构" << std::endl; }
	static int e;
};

class B
{
public:
	B() { std::cout << "B 构造" << std::endl; }
	~B() { std::cout << "B 析构" << std::endl; }
	A a;
};

int main()
{
	B b;
	A a;
	 

	std::cout << "size of empty A() : " << sizeof(a) << std::endl;
	return 0;
}