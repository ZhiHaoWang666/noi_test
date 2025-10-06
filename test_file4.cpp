#include<iostream>
#define ll long long
using namespace std;
const int N = 1e6+10;
int var[N];

int main(){
    freopen("getthree.in","r",stdin);
    freopen("getthree.out","w",stdout);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> var[i];

    ll dp0 = 0, dp1 = 0, dp2 = 0, dp3 = 0;
    for(int i=2; i<=n; i++){
        dp3 = max(dp1, dp2) + 0; 
        ll pick = dp0+var[i-1]+var[i];
        dp3 = max(dp3, pick);
        dp0 = dp1;
        dp1 = dp2;
        dp2 = dp3;
    }
    cout << dp2 << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}