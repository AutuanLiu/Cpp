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
