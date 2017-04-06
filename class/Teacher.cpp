/*
*  Teacher Class design
*
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Teacher
{
public:
	Teacher(int _id, string _name, string _gender,
		int _year2, int _month2, int _day2
		,int _year = 1900, int _month = 0, int _day = 0);
	Teacher(Teacher &t);
	~Teacher(){}
	void retire(const int nowyear);
	void recurit(const int nowyear);
	friend ostream &operator<<(ostream &out, const Teacher &t);
private:
	int m_id;
	string m_name;
	string m_gender;
	int m_year;
	int m_month;
	int m_day;	
	int m_year2;
	int m_month2;
	int m_day2;	
};

Teacher::Teacher(int _id, string _name, string _gender,
		int _year = 1900, int _month = 0, int _day = 0,
		int _year2, int _month2, int _day2)
{
	m_id = _id;
	m_name = _name;
	m_gender = _gender;
	m_year = _year;
	m_month = _month;
	m_day = _day;
	m_year2 = _year2;
	m_month2 = _month2;
	m_day2 = _day2;
}

Teacher::Teacher(Teacher &t)
{
	m_id = t.m_id;
	m_name = t.m_name;
	m_gender = t.m_gender;
	m_year = t.m_year;
	m_month = t.m_month;
	m_day = t.m_day;
	m_year2 = t.m_year2;
	m_month2 = t.m_month2;
	m_day2 = t.m_day2;
}

ostream &operator<<(ostream &out, const Teacher &t)
{
	out << "Name: " << t.m_name << ",ID:" << t.m_id;
	return out;
}

void Teacher::retire(const int nowyear)
{
	if ((m_gender == "male" && nowyear - m_year2 >= 55)
	||(m_gender == "female" && nowyear - m_year2 >= 60))
	{
		char id[10];
		itoa(m_id,id,10);
		string temp = "Name: " + m_name + ",ID:" + id;
		cout << "to be retired : " << temp << endl;
	}
}

void Teacher::recurit(int nowyear)
{
	if (m_gender == "female" && nowyear - m_year <= 35
		&& nowyear - m_year2 >= 60)
	{
		char id[10];
		itoa(m_id,id,10);
		string temp = "Name: " + m_name + ",ID:" + id;
		cout << "to be recurited : " << temp << endl;
	}
}

int main()
{
	Teacher l1(1, "lily", "female",1975,3,18,1950,2,3);
	Teacher l2(2, "long", "male",1986,11,5,1950,6,9);
	Teacher l3(3, "yang", "female",2005,3,6,1950,5,9);
	Teacher l4(4, "gong", "female",1995,6,8,1945,2,8);
	Teacher copyl1(l1);
	cout << l1 << endl << copyl1 << endl;
	l1.retire(2017);// for test
	l1.recurit(2017);
	l2.retire(2017);
	l2.recurit(2017);
	l3.retire(2017);
	l3.recurit(2017);
	l4.retire(2017);
	l4.recurit(2017);
	return 0;
}


