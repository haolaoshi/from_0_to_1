#include <iostream>
#include <string>

struct Student
{
	std::string name;
	int age;
	int score;
};

//const 修饰避免误操作
void printStudents(const Student *p)
{ 
	for (int i = 0; i < 10; i++)
		std::cout << p[i].name << "," << p[i].age << "," << p[i].score << std::endl;
}

//这个数组要修改，所以不能加const修饰
void nameAllocate(Student  p[] , int len)
{
	std::string str = "ABCDEFGHIJKLMN";

	for (int i = 0; i < len; i++)
	{
		p[i].age = i;
		p[i].name = "Student_";
		p[i].name += str[i];
		p[i].score = rand() % 60 + 40;
	}
}

int main()
{
	Student s;
	s.age = 20;
	s.name = "liujiahao";
	s.score = 100;

	//std::cout << s.name << ","<<s.age<<","<<s.score<<std::endl;

	srand((unsigned int)time(NULL));

	Student children[10];
	int len = sizeof(children) / sizeof(children[0]);
	nameAllocate(children,len);

	Student* p =  children;

	printStudents(p);

	return 0;
}