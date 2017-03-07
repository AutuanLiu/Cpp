/*
* 求阶乘的 预处理法
*/
#include <iostream>
using namespace std;
const int N = 1000;

int main()
{
	int a[N];
	a[0] = 1;
	for (int i = 1; i < N; ++i)
	{
		a[i] = i * a[i-1];
	}
	int n;
	cin >> n;
	cout << n <<"的阶乘为 ： " << a[n] << endl;
	return 0;
}

/*
* 求阶乘的 递归函数法
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
const int N = 1000;

int fact2(int n)
{
	if(n == 0 )
	{
		return 1;
	}
	else
	{
		return n * fact2(n-1);
	}
}

int main()
{
	int n;
	cin >> n;
	cout << n <<"的阶乘为 ： " << fact2(n) << endl;
	return 0;
}
