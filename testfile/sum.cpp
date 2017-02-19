#include <iostream>
using namespace std;
int main() {
	int sum=0,n,data[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>data[i];
	for(int i=0;i<n;i++)
		sum+=data[i];
	cout<<sum;
	return 0;
}
