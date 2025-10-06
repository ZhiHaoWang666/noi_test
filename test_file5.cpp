#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int var[N];
int n;
long long dp[N];

void solve(){
    dp[0] = 0;
    dp[1] = 0; // 不能只取一个数

    for(int i=2;i<=n;i++){
        dp[i] = max(dp[i-1], dp[i-2] + var[i-1] + var[i]);
    }
    cout << dp[n];
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> var[i];
    }
    solve();
    return 0;
}