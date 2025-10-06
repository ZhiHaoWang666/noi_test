#include<iostream>
using namespace std;

const int N = 110;

int n;
int map[N][N];
int dp[N][N];

int memory_search(int x,int y){
    if(x<n){
        if(dp[x][y]!=-1){
            return dp[x][y];
        }else{
            dp[x][y] = map[x][y]+max(memory_search(x+1,y),memory_search(x+1,y+1));
            return dp[x][y]; 
        }
    }else{
        return map[x][y];
    }

}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> map[i][j];
            dp[i][j] = -1;
        }
    }
    int res;
    res = memory_search(1,1);
    cout << res;
    return 0;
}