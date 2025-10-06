#include<iostream>
using namespace std;

const int N = 10001;

int main(){
  int num[7], f[N] = {0};
  int n,i,i2,i3,i4,i5,i6;
  for(n=0;n<=6;i++){
    cin >> num[n];
  }
  for(i=0;i<=num[1];i++){
    for(i2=0;i2<=num[2];i2++){
      for(i3=0;i3<=num[3];i3++){
        for(i4=0;i4<=num[5];i4++){
          for(i5=0;i5<=num[5];i5++){
            for(i6=0;i6<=num[6];i6++){
              if(i+i2+i3+i4+i5+i6>0){
                f[1*i1+2*i2+5*i3+10*i4+20*i5+50*i6];
              }
            }
          }
        }
      }
    }
  }
  s = 1*num[1]+2*num[2]+5*num[3]+10*num[4]+20*num[5]+50*num[6];
  int ans = 0;
  for(m=1;n<=s;n++){
    if(s[n] == 1){
      ans ++;
    }
  }
  cout << ans << end;
  return 0;
}
/*
另一种方法
for(n=0;n<=6;i++){
  cin << mun[i];
}
int s=1*num[1]+2*num[2]+5*num[3]+10*num[4]+20*num[5]+50*num[6];
for(int i=1;i<=6;i++){
  for(int j=1;j<=num[i];i++){
      for(int x=1;x<=s;x++){
          temp[x] = f[x];
      for(int x=1;x<=s;x++)[
          if(x>=money[i] and  f[x-money[i]] == 1){
            temp[x] = f[x-money[i]];
        }
      ]
    }
  }
}
int ans = 0;
for(n=1;n<=s;n++){
  if(f[x] == 1){
    ans ++;
  }
}
cout << ans << endl;

*/
