/*
*  使用数组的方式实现 斐波那契数列
*
*/

#include <stdio.h>
const int N = 1001;

int main()
{
	int fi[N];
	fi[0] = 1;
	fi[1] = 1;

	for (int i = 2; i < N; ++i)
	{
		fi[i] = fi[i-1] + fi[i-2];
	}

	int m;

	while (scanf("%d", &m) != EOF)
	{
		printf("%d\n", fi[m] );
	}
	return 0;
}


//使用 递归函数实现斐波那契数列
/*
* 当 数据过于大时，可能引起 栈 溢出
*
*/

#include <stdio.h>
const int N = 1001;

int foo(int x)
{
	if(x == 0 || x == 1)
	{
		return 1;
	}
	else
	{
		return foo(x - 1) + foo(x - 2);
	}
}

int main()
{
	int m;

	while (scanf("%d", &m) != EOF)
	{
		printf("%d\n", foo(m));
	}
	return 0;
}