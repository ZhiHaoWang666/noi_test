#include<iostream>
using namespace std;

const int N = 20;

int n,m,res;
char v[N][N];
int fx[5] = {0,0,0,-1,0};
int fy[5] = {0,1,1,0,-1};

int tx,ty;
void dfs(int x,int y){
    v[x][y] = '.';
    for(int i=0;i<4;i++){
        tx = x+fx[i];
        ty = y+fy[i];
        if(v[tx][ty] == 'w'){
            dfs(tx,ty);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(v[i][j] == 'w'){
                dfs(i,j);
                res ++;
           }
        }
    }
    cout << res;
    return 0;
}
