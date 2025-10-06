#include<iostream>
using namespace std;

const int N = 1.1e5;
int a[N],n,m,,s[N],l,r;
int main(){
  cin >> n >> m;
  for(int i=0;i<=n;i++){
    cin >> a[i];
    s[i] = s[i-1] +a[i];
  }
  while(m--){
    cin >> >> l >> r;
    cout << s[r]-s[l-1];
  }
  return 0;
}
