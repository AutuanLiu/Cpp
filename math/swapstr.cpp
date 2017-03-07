/*
*  实现字符串对换的两种方法
*
*/


#include <iostream>
#include <string>
using namespace std;

void swapstr1(string &str1, string &str2)
{
	string temp;
	temp = str1;
	str1 = str2;
	str2 = temp;
}

void swapstr2(char *&str1, char *&str2)
{
	char *temp;
	temp = str1;
	str1 = str2;
	str2 = temp;
}

int main()
{
	string str1 = "how are you?";
	string str2 = "what is your name?";
	char a[] = "how are you?";
	char b[] = "what is your name?";
	char *ch1 = a,*ch2 = b;
	swapstr1(str1,str2);
	swapstr2(ch1,ch2);
	cout << str1 << endl << str2 << endl;
	cout << ch1 << endl << ch2 << endl;
	return 0;
}