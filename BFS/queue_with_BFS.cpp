#include<iostream>
#include<queue>
using namespace std;

const int N = 110;
int a[N][N];
int n,m;
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};
queue<int> x,y;
int s=1;

void bfs(){
    x.push(1);
    y.push(1);
    a[1][1] = s;

    while (!x.empty())
    {
        /* code */
        int tx = x.front();
        int ty = y.front();

        for(int i=1;i<=4;i++){
            int nx = tx+fx[i];
            int ny = ty+fy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny] == 0){
                s++;
                a[nx][ny] = s;
                x.push(nx);
                y.push(ny);

            }
        }
        //防止溢出
        x.pop();
        y.pop();
    }   
}

int main(){
    cin >> n >> m;
    bfs();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}