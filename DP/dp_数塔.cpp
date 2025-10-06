#include<iostream>
using namespace std;

const int N = 110;

int dp[N][N], map[N][N] ,n;


void dynamic_programming(){
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            dp[i][j] = map[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
        }
    }    
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> map[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        dp[n][i] = map[n][i];
    }
    dynamic_programming();
    cout << dp[1][1];
    return 0;
}