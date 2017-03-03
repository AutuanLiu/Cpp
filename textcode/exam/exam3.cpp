//相邻字母问题
#include <iostream>
 using namespace std;
 int main(){
 char ch;
 cin>>ch;
  if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))
  	cout<<char(ch-1)<<ch<<char(ch+1);
  if(ch=='z'||ch=='Z')
    cout<<char(ch-1)<<ch<<char(ch-25);
  if(ch=='a'||ch=='A')
    cout<<char(ch+25)<<ch<<char(ch+1);
 return 0;
 }


 //打分
  #include <iostream>
 #include <algorithm>
 using namespace std;
 int main(){
 	double ave;
 	int buf[10],sum=0;
 	for (int i = 0; i < 10; ++i)
 	{
 		cin >> buf[i];
 		if(buf[i] > 100 || buf[i] < 0){
 			cout << "the score is invalid." << endl;
 			return 0;
 		}
 	}
 	sort(buf,buf+10);
 	for (int i = 1; i < 9; ++i)
 	{
 		sum += buf[i];
 	}
 	ave = sum / 8.0;
 	cout << ave <<endl;
 return 0;
 }

/*
*  猴子吃桃 问题
*
*/

#include <iostream>
using namespace std;

int main()
{
	int x = 1；
	int n;
	cin >> n;

	if (n == 1)
		return;
	else
	{
		for(int i=1; i < n; i++)
		{
			x = (x + 1) * 2;
		}
	}
	cout << x << endl;
	return 0;
}

/*
* 搬砖问题
*
*/
/****
*现有n块砖，要由n人一次搬完，假定男人一次可以搬4块，女人一次可以搬3块，
*两个小孩搬1块，计算这n人中男人、女人和小孩的人数。输入人数和砖数n，
*输出可能的解决方案
****/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int men;
	int women;
	int children;
	bool flag = true;
	cin >> n;

	for (int men = 0; men < n; ++men)
	{
		for (int women = 0; women < n; ++women)
		{
			for (int children = 0; children < n; children += 2)
			{
				if (4 * men + 3 * women + children / 2 == n && men + women + children == n)
				{
					cout << "men" << men << endl;
					cout << "women" << women << endl;
					cout << "children" << children << endl;
					flag = false;
				}
			}
		}
	}
	if (flag)
	{
		cout << "no result!" << endl;
	}
	return 0;
}

/*
*  将n美分转换成25、10、5和1美分的硬币总共有多少种转换方法？
*
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	cin >> n;
	if (n > 99 || n < 0)
	{
		cout << "the money is invalid!" << endl;
	}
    else
    {
    	for (int i = 0; i < 4; i++)
    	{
    		for (int j = 0; j < 10; j++)
    		{
    			for (int k = 0; k < 20; k++)
    			{
    				for (int l = 0; l < 100; l++)
    				{
    					if (25 * i + 10 * j + 5 * k + l == n)
    					{
    						count++;
   	 	 				}
   	 	 			}
   	 	 		}
    		}
    	}
    	cout << count << endl;
    }
	return 0;
}