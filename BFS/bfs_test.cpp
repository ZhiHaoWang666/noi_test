#include<iostream>
using namespace std;

const int N = 30;

int a[N][N];
int q[900][3];
int head = 1;
int tail = 1;
int n,m,k,tx,ty;
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};

void bfs(){
    while (head<=tail)
    {
        /* code */
        for(int i=1;i<=4;i++){
        tx = q[head][1]+fx[i];
        ty = q[head][2]+fy[i];
        if(tx>=1&&tx<+n&&ty>=1&&ty<=m&&a[tx][ty] == 0){
            tail ++;
            q[tail][1] = tx;
            q[tail][2] = ty;
            k++;
            a[tx][ty] = k;
            }
        }
        head ++;
    }
    
}

int main(){
    cin >> n >> m;
    q[1][1] = 1;
    q[1][2] = 1;
    q[1][1] = 1;

    bfs();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
    }

    return 0;
}