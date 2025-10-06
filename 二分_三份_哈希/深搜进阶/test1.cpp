#include<iostream>
using namespace std;

const int N = 50;

int n,m;
int var[N][N];
int var_b[N][N];
int fx[5] = {0,1,-1,0,0};
int fy[5] = {0,0,0,-1,1};

void dfs(int x,int y,int k){
    var_b[x][y] = k;
    int tx,ty;
    for(int i=0;i<=n;i++){
        tx = x+fx[i];
        ty = y+fy[i];
        if(var[tx][ty] == var_b[tx][ty]){
            dfs(tx,ty,k+1);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> var[i][j];
           }
    }
    dfs(1,1,1);
    cout << var_b[n][m];
    return 0;
}