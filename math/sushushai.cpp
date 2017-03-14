/*
* 素数筛算法
*/
#include <iostream>
using namespace std;

const int N = 1000;
int prime[N]; //存储素数的数组
int size = 0; //用于素数的计数
bool isPrime[N+1]; // 用于标记

void init()
{
	for (int i = 0; i < N + 1; ++i)
	{
		isPrime[i] = false;
	}

	for (int i = 2; i < N + 1; ++i)
	{
		if (isPrime[i])
		{
			continue;	
		}
		else
		{
			prime[size++] = i;
			for (int j = i * i; j < N + 1; j += i)
			{
				isPrime[j] = true;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	init();
	while (cin >> n)
	{
		bool isOut = true;
		for (int i = 0; i < size; ++i)
		{
			if(prime[i] < n)
			{
				if (isOut)
				{
					cout << prime[i];
					isOut = false;
				}
				else
				{
					cout << ' ' <<prime[i];
				}	
			}		
		}
		cout << endl;
	}
	return 0;
}
