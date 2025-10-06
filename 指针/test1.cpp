/*
指针的定义方法： int* p;
int i;
p = &i
*/
#include<iostream>
using namespace std;

int func(int x,int y){
  return x>y ? x : y;
}

int main(){

  int x ,y;
  int maxvalue;
  int(*func1)(int ,int);
  func1 = func;
  cin >> x >> y;
  maxvalue = (*func1)(x,y);
  cout << maxvalue << endl;

  return 0;
}
