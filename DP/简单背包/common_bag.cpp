#include<iostream>
using namespace std;

const int N = 110;
const int M = 2e4;

int n,c,w[N],v[N],dp[N][M];

int main(){
    cin >> c >> n;
    for(int i=1;i<=n;i++){
        cin >> w[i] >> v[i]; 
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(w[i]<=j){
                dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][c];
    return 0;
}

