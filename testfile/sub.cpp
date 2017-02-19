
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string a,b;
	int pos;
	cin>>a>>b;
	pos=a.find(b)+1;
	cout<<pos;
return 0;
}

*/

#include<iostream>
using namespace std;
string s[1001];
int i;
bool k=true;
int main(){
    i=1;
    while(k==true){
        if(cin>>s[i])
        {i++;}
        else
        k=false;
    }
    i--;
    for(int j=i;j>=1;j--){
        cout<<s[j]<<" ";
    }
    return 0;
}
