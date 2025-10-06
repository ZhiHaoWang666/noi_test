#include<iostream>
#define ll long long
using namespace std;
const int N = 1e6+10;
int var[N];
ll dp[N][2];

void solve(int n){
    dp[1][0] = 0;
    dp[1][1] = 0;
    for(int i=2; i<=n; i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = dp[i-2][0]+var[i-1]+var[i];
    }
    cout << max(dp[n][0],dp[n][1]) << endl;
}

int main(){
    freopen("getthree.in","r",stdin);
    freopen("getthree.out","w",stdout);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> var[i];
    }
    solve(n);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
