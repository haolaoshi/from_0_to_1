#include <iostream>

int c = 0;
std::string d;
const int e = 0;


//ջ������ע�������Ҫ���ؾֲ�������ַ
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
	//new ���ٶ���
	int* p = new int(10);
	return p;
}

//20��	���������ô��ݣ��βλ�����ʵ�εģ���ָ�롣Ч������ַ������һ���ġ�
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
	//18��	�ڴ����4�������� �������Է��ض����ĵ�ַ��new���ص��ǵ�ַ��
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	delete[]arr;
	int* b1 = &a;
	//19��	���ñ���Ҫ��ʼ���� int &b = a; ��ʼ���󲻿ɸı䡣
	int& c1 = a;

	std::cout << " b = " << b1 << ",c = " << &c1 << std::endl;
	c1 += 50;
	std::cout << "a = " << a << std::endl;

	int aa = 0;
	int bb = 20;
	myswap(aa, bb);

	std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
	//21��	�����ķ���ֵ�����ã��ǿ�����Ϊ��ֵ���ڡ�test() = 1000
	int& t2 = test01();
	std::cout << "t2=" << t2 << std::endl;
	test01() = 1000;
	std::cout << "t2 = " << t2 << std::endl;

	const int& ref3 = 10;

	std::cout << test3(aa) << std::endl;

	return 0;
}