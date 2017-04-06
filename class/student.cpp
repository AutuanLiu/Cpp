/*
*	学生 类
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(unsigned _age = 0, string _name = "Jim"):m_age(_age),m_name(_name) //函数使用inline 模式
	{
		count++;
		cout << "构造函数" << endl;
	}

	~Student()
	{
		count--;
		cout << "析构函数" << endl;
	}

	void setAge(unsigned _age)
	{
		m_age = _age;
	}

	unsigned getAge()
	{
		return m_age;
	}

	void setName(string _name)
	{
		m_name = _name;
	}

	string getName()
	{
		return m_name;
	}

	static unsigned getCount()	
	{
		cout << "The count of student is " << count << endl;
	}

private:
	unsigned m_age;
	string m_name;
static unsigned count;
};

unsigned Student::count = 0;

int main()
{
	Student st1(19, "Liuy");
	Student st2(23, "Jimy");
	Student st3(15, "heen"); //对象的作用域结束后，自动执行析构函数 
	Student::getCount();
	cout << st1.getName() << ',' << st1.getAge() << endl;
	cout << st2.getName() << ',' << st2.getAge() << endl;
	cout << st3.getName() << ',' << st3.getAge() << endl;	

	Student *pst[3];//指针数组 
	pst[0] = &st1;
	pst[1] = &st2;
	pst[2] = &st3;

	for (int i = 0; i < 3; ++i)
	{
		cout << pst[i]->getName() << ", " << pst[i]->getAge() << endl;
		cout << (*pst[i]).getName() << ", " << (*pst[i]).getAge() << endl;
				//注意加括号* 和 . 的优先级 
	}
	return 0;
}


