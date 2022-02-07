#include <iostream>

//28，	拷贝构造用途：使用对象初始化新对象，值传递给函数，值返回局部对象。
class Person
{
public:
	Person() { std::cout << "无参构造" << std::endl; }
	Person(int a) :m_Age(a) { std::cout << "有参构造" << std::endl; }
	~Person() { std::cout << "析构" << std::endl; }
	Person(const Person& p) { m_Age = p.m_Age; std::cout << "拷贝构造" << std::endl; }
private:
	int m_Age;
};

void foo(Person p)
{

}
Person bar()
{
	Person a;
	return a;
}

int main()
{
	Person p(3);
	Person q(p);//1
	foo(p);//2
	bar();//3
	return 0;
}