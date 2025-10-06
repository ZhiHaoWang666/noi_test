#include<iostream>
#include<algorithm>
#include<string>
//用高精度加法去解题
using namespace std;
//递推公式：F(n) = F(n-1) + F(n-2)
int n;int len =1;int f[5003][5003];
void hp(int k){
    for(int i=0;i<len;i++){
        f[k][i] = f[k-1][i] + f[k-2][i];
    }
    for(int i=0;i<len;i++){
    if(f[k][i]>=10){
         f[k][i+1]+=f[k][i]/10;
         f[k][i]=f[k][i]%10;
         if(f[k][len+1]){
            len ++;
          }
        }
    }
}
int main(){
    cin >> n;
    f[1][1] = 1;f[2][1] = 2;
    for(int i=0;i<n;i++){
        hp(i);
    }for(int i=len;i>=1;i--){
        cout << f[n][i];
    }
    return 0;
}