#include <iostream>
#include <algorithm>
using namespace std;

const int N = 101; 
int var[N];
int n;
int dp[N];

void solve() {
    if (n == 0) {  
        cout << 0; 
        return;
    }
    if (n == 1) {
        cout << var[0];
        return;
    }
    dp[0] = var[0];
    dp[1] = max(var[0],var[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1],var[i]+dp[i-2]);
    }
    cout << dp[n-1];
}

int main() {
    freopen("getone.in","r",stdin);
    freopen("getone.out","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> var[i];
    }
    solve();
    fclose(stdin);
    fclose(stdout);
    return 0;
}
