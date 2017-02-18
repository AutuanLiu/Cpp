/*
//数字的翻转
#include <iostream>
using namespace std;
int main() {
	int n,dig,newnum=0;
	cin>>n;
	do {
		dig=n%10;
		cout<<dig;
		n/=10;
	} while(n!=0);
	cout<<endl;
	return 0;
}

*/

/*
// 图案
#include <iostream>
using namespace std;

int main() {
	const int N=4;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=40; j++)
			cout<<' ';
		for(int j=1; j<=8-2*i; j++)
			cout<<' ';
		for(int j=1; j<=2*i-1; j++)
			cout<<'*';
		cout<<endl;
	}
	for(int i=1; i<=N-1; i++) {
		for(int j=1; j<=40; j++)
			cout<<' ';
		for(int j=1; j<=7-2*i; j++)
			cout<<'*';
		cout<<endl;
	}
	return 0;
}
*/

/*
//
#include <iostream>
using namespace std;
int main() {
	void table(void);
	cout<<"9-9乘法表："<<endl;
	table();
	return 0;
}
void table(void) {
	for(int i=1; i<=9; i++) {
		for(int j=1; j<=i; j++) {
			cout<<j<<"*"<<i<<"="<<j*i<<" ";
		}
		cout<<endl;
	}
}

*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	void guess(int num);
	guess(29);
	return 0;
}
void guess(int num) {
	cout<<"您只有5次机会！"<<endl;
	int i=0;
	while(i<5) {
		cout<<"请输入您猜的数字"<<endl;
		int s;
		cin>>s;
		if(s>num)
			cout<<"比你的数小"<<endl;
		else if(s<num)
			cout<<"比你的数大"<<endl;
		else
			cout<<"right!"<<endl;
		i++;
	}
	if(i==5)
	cout<<"您没有机会了！"<<endl; 
}
*/
/*
//关于进制的转换
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"数据：";
	cin>>x; 
	cout<<dec<<x<<endl;
	cout<<oct<<x<<endl;
	cout<<hex<<x<<endl;
	return 0;
} 
*/
       

































































































































































































