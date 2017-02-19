/*#include <iostream>
using namespace std;
int main() {
	int price;
	float d2,sum;
	cin>>price>>d2;
	if(d2>0.0&&d2<1.0)
		sum=float(price*d2);
	else
		sum=float(price*d2*0.1);
	cout<<int(sum);
	return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
int a;
double b;
cin >> a >> b;
b = int(a*b / 10.0 / 10 + 0.5) * 10;
cout << b;
return 0;
}
