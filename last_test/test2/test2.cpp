#include <iostream>
using namespace std;

const int N = 1005; 
int var[N], dp[N];

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> var[i];

    if(n<2){
        cout << 0;
        return 0;
    }

    dp[0]=0;
    dp[1]=0;
    dp[2]=var[1]+var[2];

    for(int i=3;i<=n;i++){
        dp[i]=max(dp[i-1], dp[i-2]+var[i-1]+var[i]);
    }

    cout << dp[n];
    return 0;
}