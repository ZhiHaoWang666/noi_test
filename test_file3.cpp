#include<iostream>
using namespace std;
const int N = 10001;
struct Num{
 int n = 0;
 int t = 1;
};
int main(){
  int n,m,a[10010];
  Num arr[N];
  Num res;
  for(int i=0;i<n;i++){
    cin >> m;
    a[i] = m;
    Num n1;
    n1.n = m;
    arr[i] = n1;
  }
  for(int k=0;k<n;k++){
    if(arr[k].n == a[k]){
      arr[k].t++;
    }
  }
  for(int i=0;i<n;i++){
    cout << arr[i].t << " " << arr[i].n;
  }
  return 0;
}
// p -> i 
