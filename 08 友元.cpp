#include <iostream>
#include <string>

using namespace std;

class Goodman;//2.类作友元
class Building; //3.成员函数作友元
class Badman
{
public:
	Badman();
	Building* build;
	void visit();
};


class Building
{
	friend Goodman;//2.类作友元
	friend void Badman::visit();//3.成员函数作友元，这个函数要放在前面！！！

public:
	friend void foo(Building* b);//1.全局函数做友元，可以访问私有成员
	Building()
	{
		m_SittingRoom = "卧室";
		m_Bedroom = "客厅";
	}
public:
	string m_SittingRoom;
private:
	string m_Bedroom;
};


class Goodman
{
public:
	Goodman();
	void visit();
	Building* build;
};

Goodman::Goodman()
{
	build = new Building;
}

void Goodman::visit()
{
	cout << build->m_SittingRoom << endl;
	cout << build->m_Bedroom << endl;
}


Badman::Badman()
{
	build = new Building;
}
void Badman::visit()
{
	cout << build->m_SittingRoom << endl;
	cout << build->m_Bedroom << endl;
}

//1.全局函数做友元，可以访问私有成员
void foo(Building *b)
{
	cout << b->m_SittingRoom << endl;
	cout << b->m_Bedroom << endl;
}

void play()
{
	Building b;
	foo(&b);
}

void bar()
{
	Goodman g;
	g.visit();
}
int main()
{
	//play();
	bar();
	return 0;
}