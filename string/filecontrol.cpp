/*
* 将 2进制整数转化为十进制输出到文件中
* 文件的输出练习
*/
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int trans(int bi)
{
	int weight = 1;
	int sum = 0;
	while (bi != 0)
	{
		sum += bi % 10 * weight;
		weight *= 2;
		bi /= 10;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int bnum;
	srand(time(0));
	int num = rand() % 10 + 1;
	ofstream out("output.txt", ios_base::out);
	if (!out)
	{
		cerr << "The file can't open!" << endl;
		return -1;
	}
	else
	{
		cout << "Input " << num << " times binary num:" << endl;
		for (int i = 0; i < num; ++i)
		{
			cin >> bnum;
			out << trans(bnum) << endl;
		}
	}
	
	return 0;
}