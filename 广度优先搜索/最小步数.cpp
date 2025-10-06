#include<iostream>
using namespace std;

const int N = 110;

int n,m;
char a[N][N];
int q[N][3];
int tail = 1,head = 1;
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};


void bfs(){
    q[1][1] = 1;
    q[1][2] = 1;
    q[1][3] = 1;
    a[1][1] = '#';
    int tx,ty;
    while(head<=tail){
        for(int i=1;i<=4;i++){
            tx = q[head][1] + fx[i];
            ty = q[head][2] + fy[i];
            if(a[tx][ty] == '.'){
                tail ++;
                q[tail][1] = tx;
                q[tail][2] = ty;
                q[tail][3] = q[head][3] + 1;
                a[tx][ty] = '#';
                if(tx==n&&ty == m){
                    cout << q[tail][3];
                }
            } 
        }
        head ++;
    }
}

int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    bfs();
    return 0;
}