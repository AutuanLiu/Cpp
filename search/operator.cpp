/*
* 运算符重载的 测试程序
*
*/

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int N = 100;

struct student
{
	char name[20];
	int age;
	int score;
	bool operator< (const student &st) const
	{
		if (score != st.score)
		{
			return score < st.score;
		}
		else if (strcmp(name, st.name))
		{
			return strcmp(name, st.name) < 0; 
		}
		else
		{
			return age < st.age;
		}
	}
};

struct student info[N];

int main()
{
	int m;
	while (scanf("%d", &m) != EOF)
	{
		for (int i = 0; i < m; ++i)
		{
			scanf("%s%d%d", info[i].name, &info[i].age, &info[i].score);		
		}
		sort(info,info + m);
		for (int i = 0; i < m; ++i)
		{
			printf("%s  %d  %d\n", info[i].name, info[i].age, info[i].score);		
		}
	}
	return 0;
}

