/*
*   使用 并査集 求连通图 的数目
*/

#include <stdio.h>

int findRoot(int x)
{
	if (data[x] == -1)
	{
		return x;
	}
	else
	{
		int tmp = findRoot(x); //使用 压缩优化
		data[x] = tmp;
		return tmp;
	}
}