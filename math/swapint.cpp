
/*
*  实现两个int 型数据交换的三种方法
*
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//借助临时变量
void swapint1(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//借助加减法实现
void swapint2(int &a, int &b)
{
	a += b;
	b = a - b;
	a -= b;
}

//借助异或实现
swapint3(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

int main()
{
	int a,b;
	cin >> a >> b;
	cout << a << "  " << b << endl;  //结果应该交错出现
    swapint1(a,b);
    cout << a << "  " << b << endl;
    swapint2(a,b);
    cout << a << "  " << b << endl;
    swapint3(a,b);
    cout << a << "  " << b << endl;	
	return 0;
}




