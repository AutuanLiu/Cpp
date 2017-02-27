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