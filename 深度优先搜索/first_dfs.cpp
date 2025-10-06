#include<iostream>
using namespace std;
//dfs:一条路走到黑
const int N = 1010;

int n,m,a[N][N];

void dfs(int x,int y,int k){
    if(x>=1&&x<=n&&y>=1&&y<=m&&a[x][y] == 0){
        a[x][y] = k;
        dfs(x,y+1,k+1);
        dfs(x+1,y,k+1);
        dfs(x,y-1,k+1);
        dfs(x-1,y,k+1);
    }
}

int main(){
    cin >> n >> m;
    dfs(1,1,1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}