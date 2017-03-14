/*
* 字符串转为整数或浮点数
*/

// 使用库函数

#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	char _int[30];
	char _float[30];
	while (cin >> _int >> _float)
	{
		int i = atoi(_int);
		float f = atof(_float);
		cout << _int << " to int : " << i << endl;
		cout << _float << " to float : " << f << endl;
	}
	return 0;
}

//不使用库函数实现

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

str2int(const char *str)
{
	int temp = 0;
	const char *ptr = str;
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
		{
			break;
		}
		temp = temp * 10 + (*str - '0');
		str++;
	}
	if (*ptr == '-')
	{
		temp = -temp;
	}
	return temp;
}

int main(int argc, char const *argv[])
{
	int n = 0;
	char p[15] = "";
	cin.getline(p,20);
	n = str2int(p);
	cout << p << " to int type: " << n << endl;
	return 0;
}