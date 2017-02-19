/*
#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
 double a;
 cin>>a;
 printf("%.2lf",a);
 return 0;
}
*/


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x,y;
	cin>>x>>y;
	if(abs(x-y)<1e-8)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}
