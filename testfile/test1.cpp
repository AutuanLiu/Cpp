/*
#include <iostream>


using namespace std;
int main(){
//���ڲ���IO����
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

//�����ж��Ƿ�������
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
//�������еĲ��Ծ�ʹ�� ���� ����ʽ���

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

//ʵ����������
//��Ĳ���
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
  //��һ�ַ�ʽ  ջ
  coordinate coor1;
  coor1.x=10;
  coor1.y=20;
  coor1.printx();
  coor1.printy();
  // �� �ķ�ʽ
  coordinate *coor2=new coordinate();
  if (coor2 == NULL) {
    return 0;
    cout << "�ڴ�����ʧ��" <<endl;
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
// ���ڽ������������ת��Ϊ ����
int main(){
  void week(void);
  week();
  return 0;
}

void week(void){
  cout << "���������ݣ�" <<'\n';
  int data;
  cin >> data;
  if(data > 7 || data < 1)
   cout << "��������������㣬���������룡" <<endl;
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


























