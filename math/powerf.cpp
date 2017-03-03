/*
*    二分幂法 求x^n
*/

#include <iostream>
using namespace std;

double powerf(double x, unsigned n)
{
	double ans = 1.0;

	while (n != 0)
	{
		if (n % 2 == 1)
		{
			ans *= x ; 
		}
		x *= x;
		n /= 2;
	}
	return ans;
}

int main()
{
	
	double x;
	unsigned n;
	cin >> x >> n;
	cout << x <<"^" << n << " = " << powerf(x,n) << endl;
	return 0;
}