#include<iostream>
using namespace std;

const int N = 1001;
int main(){
  int f[N],n,i;
  cin >> n;
  f[1] = 1;
  for(int i=2;i<=n;i++){
    f[i] = f[i-1]+2*(i-1);
  }
  cout << f[n]<<endl;
  return 0;
}
//另一个阴间的解法（忒简单！！！！！）
/*
int n;
cin >> n;
if(n==1){
  cout << 1 << endl;
}else{
  cout << n*(n+1)+1;
}
return 0
*/
dazideyigezuigaj
