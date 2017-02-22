/*
#include <iostream>
using namespace std;
int main() {
	int a;
cin>>a;
cout<<char(a);
	return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main() {
	int a;
short b;
cin>>a>>b;
cout<<sizeof(a)<<' '<<sizeof(b);
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if(a%2==0)
	cout<<"even";
	else
	cout<<"odd";
	return 0;
}

*/

/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,b,c,d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
		printf("x1=x2=%6.5f",-b/(2*a));
	if(d>0){
		printf("x1=%6.5f",(-b+sqrt(d))/(2*a));
		printf(";x2=%6.5f",(-b-sqrt(d))/(2*a));
	}
	if(d<0){
		float real;
		if(abs(b/(2*a))<1e-8)
		real=0.0;
		else
		real=-b/(2*a);
		printf("x1=%6.5f",real);
		printf("+%6.5f",sqrt(-d)/(2*a));
		printf("i;x2=%6.5f",real);
		printf("-%6.5f",sqrt(-d)/(2*a));
		printf("i");
	}
return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
int a,b;
char ch;
cin>>a>>b>>ch;
switch(ch)
{
case '+':
	cout<<a+b;break;
case '-':
	cout<<a-b;break;
case '*':
	cout<<a*b;break;
case '/':
	if(b==0)
		cout<<"Divided by zero!";
	else
	cout<<a/b;
		break;
default:
	cout<<"Invalid operator!";
}
}
