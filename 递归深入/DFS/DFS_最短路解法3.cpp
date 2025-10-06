#include<iostream>
#include<iomanip>
using namespace std;

int n,m;
int var[15][15];

int fy[5] = {0,1,0,-1,0};
int fx[5] = {0,0,1,0,-1};

void dfs(int x,int y,int k){
    if(y>=1&&y<=m&&x>=1&&x<=n&&var[x][y] == 0){
        var[x][y] = k;
        int tx,ty;
        for(int i=1;i<=4;i++){
            tx = x+fx[i];
            ty = y+fy[i];
            dfs(tx,ty,k+1);
        }
    }
}

int main(){
    cin >> n >> m;
    dfs(1,1,1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << setw(3) << var[i][j]; 
        }
        cout << endl;
    }
    return 0;
}