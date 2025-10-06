#include<iostream>
using namespace std;

const int N = 100;

void jisuan(int* p ,int* p2,int* p3,int x) {
  /* code */
  for(int i=0;i<x;i++){
    *(p3+i) = (*(p+i))+(*(p2+i));
  }
  for(int i=0;i<x;i++){
    cout << p3[i];
  }
}

int main(){
  int var1[4] = {2,3,5,6};
  int var2[4] = {4,5,7,8};
  int var3[N];
  jisuan(var1,var2,var3,4);
  for(int i=0;i<4;i++){
    cout << var3[i];
  }
  return 0;
}
