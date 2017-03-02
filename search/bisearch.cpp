/*
*   二分查找 测试程序
*
*/

#include <stdio.h>
const int N = 100; 

int bisearch(int a[], int m, int &data)
{
	int low = 0;
	int high = m;

	while (low < high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == data)
		{
			return mid;
		}
		else if (a[mid] < data)
		{
			low = mid + 1;
		}
		else
		{
			high = mid -1;
		}
	}
	return -1; //如果查找失败 ，返回下标 -1
}

int main()
{
	int a[N];
	int m;
	int ans;
	while (scanf("%d%d", &m, &ans) != EOF)
	{
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &a[i]);
		}	
		printf("The index is: %d\n", bisearch(a,m,ans));
	}
	return 0;
}

