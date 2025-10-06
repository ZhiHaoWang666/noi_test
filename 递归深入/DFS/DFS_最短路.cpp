#include<iostream>
#include<iomanip>
using namespace std;

int n,m;
int var[15][15];

void dfs(int x, int y,int k){
    var[x][y] = k;
    //向右
    if(y+1<=m&&var[x][y+1] == 0){
        dfs(x,y+1,k+1);
    }if(x+1<=n&&var[x+1][y] == 0){
        dfs(x+1,y,k+1);
    }if(y-1>=1&&var[x][y-1] == 0){
        dfs(x,y-1,k+1);
    }if(x-1>=1&&var[x-1][y] == 0){
        dfs(x-1,y,k+1);
    }
}

int main(){
    cin >> n >> m;
    
    dfs(1,1,1);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << setw(5) << var[i][j]; 
        }
        cout << endl;
    }
    return 0;

}