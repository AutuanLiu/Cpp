//最大公约数-非递归形式
#include <stdio.h>
int gcd(int a,int b)
{
	while(b)
	{
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		printf("%d\n", gcd(a,b));
	}
	return 0;
}