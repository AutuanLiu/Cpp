/*
* 输入 1 x 2 y z 3 d h 4 g 5,输出 54321
*/

#include <iostream>
#include <cstring>
using namespace std;

const int N = 1000;
int strint(char *str)
{
	int sum = 0;
	int array[N];
	int size = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			array[size++] = *str - '0';
			str++;
		}
		else
		{
			str++;	
		}
	}
	while (array[size -1] == 0)
	{
		size--;
	}
	for (int i = size-1; i >= 0; --i)
	{
		sum = sum * 10 + array[i];
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	char buf[N];
	cin.getline(buf, N);
	cout << strint(buf) << endl;
	return 0;
}