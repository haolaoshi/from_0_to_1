#include <iostream>

class A
{
public:
	A() { std::cout << "A ����" << std::endl; }
	~A() { std::cout << "A ����" << std::endl; }
	static int e;
};

class B
{
public:
	B() { std::cout << "B ����" << std::endl; }
	~B() { std::cout << "B ����" << std::endl; }
	A a;
};

int main()
{
	B b;
	A a;
	 

	std::cout << "size of empty A() : " << sizeof(a) << std::endl;
	return 0;
}