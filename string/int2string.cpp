/*
*  int to string 
*/

//使用库函数

#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a;//use 0 to stop
	while (cin >> a && a != 0)
	{
		char ans[10];
		itoa(a,ans,10);
		cout << a << "to  " << ans << endl;
	}
	return 0;
}

//不用库函数

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(char &a, char &b)
{
	char tmp = a;
	a = b;
	b = tmp;
}

void int2string(int n,char *str) //使用指针或地址传递，会改变原数组的值
{
	int size = 0;
	int temp = n > 0?n:(-n);
	if (str == NULL)
	{
		return;
	}
	while (temp != 0)
	{
		str[size++] = temp % 10 + '0';
		temp /= 10;
	}
	if (n < 0)
	{
		str[size++] = '-';
	}
	for (int i = 0; i < size/2; ++i)
	{
		swap(str[i],str[size-i-1]);
	}
}

int main()
{
	int a;
	while (cin >> a && a != 0)
	{
		char str[15];
		int2string(a,str);
		cout << "string type:  " << str << endl;
	}
	return 0;
}