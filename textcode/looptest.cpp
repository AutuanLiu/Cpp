//数字的翻转
#include <iostream>
using namespace std;
int main(){
  int n,dig;
  cout<< "Please enter the number:"<<endl;
  cin>>n;
  do {
    dig=n%10;
    cout<<dig;
    n/=10;
  } while(n!=0);
  cout<<endl;
  return 0;
}
