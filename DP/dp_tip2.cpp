#include<iostream>
using namespace std;

const int N = 110;

int n,x,map[N],dp[N],s = 0;

void fun(){
    map[1] = x;
     for(int i=2;i<=n;i++){
        map[i] = (379*map[i-1]+131)%997;
    }
    dp[1] = map[1];
    for(int i=2;i<=n;i++){
        dp[i] = max(dp[i-1],map[i]);
        s = s+dp[i];
    }
}

int main(){
    cin >> n >> x;
    fun();
    cout << s+dp[1];
    return 0;
}