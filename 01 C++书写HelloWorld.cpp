#include <iostream>


#define WEEK_DAY	7


int main()
{
	std::cout << "Helo World!" << std::endl;

	std::cout << "һ���ܹ���" << WEEK_DAY << "��" << std::endl;

	//WEEK_DAY = 14;  ���ʽ���� �ǿ��޸ĵ���ֵ 

	const int week_day = 24;

	std::cout << "һ���ܹ���" << week_day << "����ĩ" << std::endl;
	//week_day = 28;   ���ʽ���� �ǿ��޸ĵ���ֵ 

	short num1 = 32768;

	std::cout << "short 32768 = " << num1 << std::endl;

	int num2 = 32768;

	long num3 = 32768;

	long long num4 = 32768;

	std::cout << "int " << sizeof(num2) << std::endl;
	std::cout << "long " << sizeof(num3) << std::endl;
	std::cout << "long long " << sizeof(num4) << std::endl;

	char c = 'a';
	std::cout << " size of char = " << sizeof(char) << std::endl;
	std::cout << " chat to ASCII " << (int)c << std::endl;


	char c_style_str[] = "hello world!";
	std::string cpp_style_str = "hello world!";

	std::cout << "c style :" << c_style_str << std::endl;
	std::cout << "cpp_style_str :��" << cpp_style_str << std::endl;

	int arr[5] = { 2,4,6,7,8 };
	std::cout << "array size = " << sizeof(arr) << std::endl;
	std::cout << "array len = " << sizeof(arr) / sizeof(int) << std::endl;
	std::cout << "array addr = " << arr << std::endl;
	std::cout << "array first elements addr = " << &arr[0] << std::endl;
	std::cout << "array second element addr =" << &arr[1] << std::endl;

	//arr = 100; ���ʽ�����ǿ��޸ĵ���ֵ

	return 0;
}