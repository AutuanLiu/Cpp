
/*
#include <iostream>
using namespace std;
int main(){
	cout<<"Hello\nWorld!"<<endl;
	cout<<sizeof(int)<<endl;
	cout<<123<<"\t"<<41<<"\t"<<78<<endl;
	cout<<12<<"\t"<<4196<<"\t"<<78112<<endl;
	cout<<3<<"\t"<<4<<"\t"<<7<<endl;
	return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a,b=0;
    cin>>a;
   	while(a%10){
   		a/=10;
   		b+=(a%10);
		   }
   	cout<<b<<endl;
   	cout<<"\007";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int e=8;
	double f=6.4,g=8.9;
    cout<<f+int(e/3*int(f+g)/2)%4<<endl;
    int i=65535,j=0x000a,k;
    k=i&j;
	cout<<k;
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main()
{
   float F;
  cin>>F;
 cout<<5.0/9*(F-32);
    return 0;
}

*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cin>>x;
    cout<<sin(x*x)/(1-cos(x));
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c<<endl<<(a+b+c)/3.0<<endl<<int((a+b+c)/3.0+0.5);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int money,a,b,c,d,e;
    cin>>money;
    a=money/50;
	b=money%50/20;
	c=(money-a*50-b*20)/10;
	d=(money-a*50-b*20-c*10)/5;
	e=money-a*50-b*20-c*10-d*5;
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    char ch,ch1;
    int flag=0;
    cin>>ch;
    if(ch>96&&ch<123)
    	flag=1;
    ch1=flag?ch-32:ch;
    cout<<ch1;
    return 0;
}
