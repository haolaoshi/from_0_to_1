#include <iostream>
#include <string>

using namespace std;

class Goodman;//2.������Ԫ
class Building; //3.��Ա��������Ԫ
class Badman
{
public:
	Badman();
	Building* build;
	void visit();
};


class Building
{
	friend Goodman;//2.������Ԫ
	friend void Badman::visit();//3.��Ա��������Ԫ���������Ҫ����ǰ�棡����

public:
	friend void foo(Building* b);//1.ȫ�ֺ�������Ԫ�����Է���˽�г�Ա
	Building()
	{
		m_SittingRoom = "����";
		m_Bedroom = "����";
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

//1.ȫ�ֺ�������Ԫ�����Է���˽�г�Ա
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