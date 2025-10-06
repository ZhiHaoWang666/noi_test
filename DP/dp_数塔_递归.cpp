#include<iostream>
using namespace std;

const int N = 110;

int n;
int map[N][N];

int DP(int x,int y){
    if(x<n){
        return map[x][y]+max(DP(x+1,y),DP(x+1,y+1)); 
    }else{
        return map[x][y];
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> map[i][j];
        }
    }
    cout << DP(1,1);
    return 0;
}