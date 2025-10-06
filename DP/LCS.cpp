#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

const int N = 110;

int dp[N][N];
string numbers1,numbers2;

int LCS(){
    for(int i=1;i<=numbers1.size();i++){
        for(int j=1;j<=numbers2.size();j++){
            dp[i][0] = 0;dp[0][j] = 0;
            if(numbers1[i-1] == numbers2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[numbers1.size()][numbers2.size()];
}

int main(){
    cin >> numbers1;
    cin >> numbers2;

    int res = LCS();
    cout << res;
    return 0; 
}