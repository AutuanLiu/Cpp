#include <iostream>
using namespace std;
int main() {
	int a[100],n,i,min,max;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	min=max=a[0];
	for(i=0; i<n; i++) {
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	cout<<min<<"  "<<max;
	return 0;
}
