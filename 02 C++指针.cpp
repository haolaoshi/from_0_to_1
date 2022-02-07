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

	std::cout << " ָ���С " << sizeof(p) << std::endl;

	std::string* ps;
	std::cout << " string ָ���С:" << sizeof(ps) << std::endl;

	int b = 100;

	//const ����ָ��
	const int* p2 = &a;
	p2 = &b;
	//*p2 /= 10;  ָ���ֵ�������޸�

	//const ���γ���
	int* const p3 = &a;
	//p3 = &b; ָ�򲻿��޸�
	*p3 *= 10;

	return 0;
}