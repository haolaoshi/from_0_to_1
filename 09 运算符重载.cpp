#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Person
{
	friend ostream& operator<<(std::ostream& cout, Person& p);
public:
	Person(int a, int b) :m_A(a), m_B(b) { }
#if 1
	Person operator+(Person& p)
	{
		Person tmp(0, 0);
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}

#endif // 0
	//由于无法实现左移运算符在左侧，所以不用成员运算符实现重载
#if 0
	void operator<<(cout)
	{
	}

#endif // 0
	void show()
	{
		std::cout << "a=" << m_A << ",b=" << m_B << std::endl;
	}
 

private:
	int m_A;
	int m_B;
};
//加号 运算符重载（成员函数，全局函数，）运算符重载可发生函数重载
#if 0
Person operator+(Person& lhs, Person& rhs)
{
	return lhs.operator+(rhs);
}
#endif // 0

//左移运算符，由于无法实现左移运算符在左侧，所以不用成员运算符实现重载；
//为了能访问到类中的私有成员，把重载函数声明为友元函数
ostream&  operator<<(std::ostream& cout, Person& p)
{
	cout << "(" << p.m_A << "," << p.m_B << ")";
	return cout;
}

int main()
{
	Person p1(1, 1);
	Person p2(2, 2);
	Person p = p1 + p2;
	p1.show();
	p2.show();
	p.show();
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p << endl;
	return 0;
}