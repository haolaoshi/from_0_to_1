#include <iostream>


class Person
{
public:
	Person(int a ):m_ptr(new int(a)){}
	~Person() 
	{
		if (m_ptr != NULL)
		{
			delete m_ptr;
			m_ptr = NULL;
		}
	}

	Person& operator=(Person& p)
	{
		//原来有内存的先释放
		if (m_ptr != NULL)
		{
			delete m_ptr;
			m_ptr = NULL;
		}
		m_ptr = new int(*p.m_ptr);
		return *this;
	}

	bool operator==(Person& p)
	{
		return (*m_ptr == *p.m_ptr);
	}
	bool operator!=(Person& p)
	{
		return *m_ptr != *p.m_ptr;
	}
	void show()
	{
		std::cout << *m_ptr << std::endl;
	}
private:
	int* m_ptr;
};


int main()
{
	Person p1(10), p2(20),p3(30);
	p3 = p1 = p2;
	p3.show();

	if (p1 == p2)
	{
		std::cout << "p1 == p2" << std::endl;
	}
	if (p1 != p2)
	{
		std::cout << "no eq" << std::endl;
	}
	return 0;
}