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
