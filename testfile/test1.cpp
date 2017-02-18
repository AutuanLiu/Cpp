/*
#include <iostream>


using namespace std;
int main(){
//用于测试IO功能
cout<<"Hello World!"<<endl;
cout<<"Welcome to C++!"<<endl;
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int x,y;
	//I want to define a function.
	cin>>x;
	if(x<0)
	y=-1;
	else if(x==0)
	y=0;
	else
	y=1;
	cout<<"y is "<<y<<endl;
}
*/

//用于判断是否是闰年
/*
#include <iostream>
using namespace std;
bool isLeapYear(int year){
	if(year%4==0&&year%100!=0||year%400==0)
	return true;
	return false;
}
int main(){
	int year;
	cout<<"Please enter year "<<endl;
	cin>>year;
	cout<<"year "<<year<<"is a Leap year is:"<<isLeapYear(year);
	return 0;
}
 */
//以下所有的测试均使用 函数 的形式完成

/*
#include <iostream>
using namespace std;
void compare(){
	int a,b;
	cin>>a>>b;
	if(a!=b)
		if(a>b)
			cout<<a<<">"<<b;
		else
			cout<<a<<"<"<<b;
	else
		cout<<a<<"="<<b;
}
int main() {
	compare();
	return 0;
}
*/

//实现坐标的输出
//类的测试
/*
#include <iostream>
using namespace std;
class coordinate{
  public:
  int x;
  int y;
  void printx(){
    cout<<x<<endl;
  }
  void printy(){
    cout << y <<endl;
  }
};
int main(){
  //第一种方式  栈
  coordinate coor1;
  coor1.x=10;
  coor1.y=20;
  coor1.printx();
  coor1.printy();
  // 堆 的方式
  coordinate *coor2=new coordinate();
  if (coor2 == NULL) {
    return 0;
    cout << "内存申请失败" <<endl;
  }
coor2->x=100;
coor2->y=200;
coor2->printx();
coor2->printy();
delete coor2;
coor2=NULL;
  return 0;
}

*/

/*
#include <iostream>
using namespace std;
// 用于将所输入的数字转换为 星期
int main(){
  void week(void);
  week();
  return 0;
}

void week(void){
  cout << "请输入数据：" <<'\n';
  int data;
  cin >> data;
  if(data > 7 || data < 1)
   cout << "输入的数据有误你，请重新输入！" <<endl;
  switch (data) {
    case 1:
     cout << "Monday" <<endl;
     break;
    case 2:
      cout << "Tuesday" <<endl;
      break;
    case 3:
      cout << "Wednesday" <<endl;
      break;
    case 4:
      cout << "Thursday" <<endl;
      break;
    case 5:
      cout << "Friday" <<endl;
      break;
    case 6:
      cout << "Satday" <<endl;
      break;
    case 7:
      cout << "Sunday" <<endl;
  }
}

*/


























