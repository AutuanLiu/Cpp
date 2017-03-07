/*
*  exp(x) 的近似值
*
*/

#include <iostream>
#include <cmath>
using namespace std;

double expf(double x)
{
	double sum = 1.0+x;
	double item = x * x/2.0;
	int i = 3;
	while (fabs(item) > 1e-7)
	{
		sum += item;
		item = item * x/i;
		i++;
	} 
	return sum;
}

int main()
{
	double x;
	cin >> x;
	cout << "exp(" << x << ")的近似值 " << expf(x) << endl;
	cout << "exp(" << x << ")的验证值 " <<exp(x);
	return 0;
}