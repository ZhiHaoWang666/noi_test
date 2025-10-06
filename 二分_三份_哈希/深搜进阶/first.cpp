#include<iostream>
using namespace std;
//最小步数  第一条路径

char a[50][50];
int b[50][50];
int n,m;
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};

void dfs(int x,int y,int k){
    b[x][y] = k;
    int tx,ty;

    for(int i=1;i<=4;i++){
        tx = x+fx[i];
        ty = y+fy[i];
        if(a[tx][ty] == '.' && k+1<b[tx][ty]){
            dfs(tx,ty,k+1);
        }
    }
}

//第一条路径
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            b[i][j] = INT_MAX;
        }
    }
    dfs(1,1,1);
    cout << b[n][m];
    return 0;
}