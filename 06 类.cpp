#include <iostream>

//28��	����������;��ʹ�ö����ʼ���¶���ֵ���ݸ�������ֵ���ؾֲ�����
class Person
{
public:
	Person() { std::cout << "�޲ι���" << std::endl; }
	Person(int a) :m_Age(a) { std::cout << "�вι���" << std::endl; }
	~Person() { std::cout << "����" << std::endl; }
	Person(const Person& p) { m_Age = p.m_Age; std::cout << "��������" << std::endl; }
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