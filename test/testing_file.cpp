#include<iostream>
using namespace std;

int main(){
  int a,b,c,n,i;
  cin >> n;
  if(n<=10){
    cout << 1 << endl;
  }else{
    a = 10;
    b = 10;
    c = 10;
    i = 2;
    while(c<n){
      i+=1;
      c = a+b;
      a = b;
      b = c;
    }
    cout << i << endl;
  }
  return 0;
}
