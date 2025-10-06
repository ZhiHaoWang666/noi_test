#include<iostream>
using namespace std;

const int N = 1100;

int dp[N],map[N],n,ma;

void DP(){
    dp[1] = map[1];
    for(int i=n-1;i>=1;i--){
            dp[i] = max(dp[i-1]+map[i],map[i]);
            ma = max(ma,dp[i]);
    }
}


int main(){
    int n;
    for(int i=1;i<=n;i++){
        cin >> map[i];
    }
    DP();
    cout << ma;
    return 0;
}