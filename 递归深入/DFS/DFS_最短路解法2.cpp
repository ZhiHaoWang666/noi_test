#include<iostream>
#include<iomanip>
using namespace std;

int n,m;
int var[15][15];

void dfs(int x,int y,int k){
    if(y>=1&&y<=m&&x>=1&&x<=n&&var[x][y] == 0){
        var[x][y] = k;
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
            cout << setw(3) << var[i][j];
        }
        cout << endl;
    }
    
    return 0;

}