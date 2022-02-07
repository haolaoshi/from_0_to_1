#include <iostream>

int c = 0;
std::string d;
const int e = 0;


//栈区数据注意事项，不要返回局部变量地址
int* foo()
{
	int a = 20;
	return &a;
}

int& test01()
{
	static int a = 100;
	return a;
}

int* bar()
{
	//new 开辟堆区
	int* p = new int(10);
	return p;
}

//20，	函数的引用传递，形参会修饰实参的，简化指针。效果跟地址传递是一样的。
void myswap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int test3(const int& a)
{
	//a = 1000;
	std::cout << a << std::endl;
	return a;
}


int main()
{
	int a = 0 ;
	static int b ;

	std::string c;

	const int f = 0;

	std::cout << "local a " << &a << ", local static b " << &b << ",local string " << &c 
		<< ",local const" << &f << std::endl;
	std::cout << "c " << &c << ",string " << &d << ",e " << &e << std::endl;


	int* p = foo();
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;

	int* q = bar();
	std::cout << *q << std::endl;
	std::cout << *q << std::endl;
	//18，	内存分区4：堆区， 函数可以返回堆区的地址，new返回的是地址。
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	delete[]arr;
	int* b1 = &a;
	//19，	引用必须要初始化， int &b = a; 初始化后不可改变。
	int& c1 = a;

	std::cout << " b = " << b1 << ",c = " << &c1 << std::endl;
	c1 += 50;
	std::cout << "a = " << a << std::endl;

	int aa = 0;
	int bb = 20;
	myswap(aa, bb);

	std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
	//21，	函数的返回值是引用，是可以作为左值存在。test() = 1000
	int& t2 = test01();
	std::cout << "t2=" << t2 << std::endl;
	test01() = 1000;
	std::cout << "t2 = " << t2 << std::endl;

	const int& ref3 = 10;

	std::cout << test3(aa) << std::endl;

	return 0;
}