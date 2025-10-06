#include<iostream>
using namespace std;

const int N = 51;

struct node
{
    /* data */
    int x,y,step;
};
//use with stackxs
int map[N][N],book[N][N];
struct node que[2501];
int nt[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int n,m,sx,sy,p,q,tx,ty;  //p,q是要找到的点的坐标 sx,sy是入口坐标
int head = 1; int tail = 1;int flag=0;
 
void bfs(){
     que[tail].x = sx;
     que[tail].y = sy;
     que[tail].step = 0;
     tail++;
     book[sx][sy] = 1;
     while (head<tail)
     {
        /* code */
        for(int i=0;i<4;i++){
            tx = que[head].x+nt[i][0];
            ty = que[head].y+nt[i][1];
            if(tx<1||tx>m||ty<1||ty>n){
                continue;
            }if(map[tx][ty] == 0 && book[tx][ty] == 0){
                book[tx][ty] = 1;      //标记
                que[tail].x = tx;      
                que[tail].y = ty;
                que[tail].step = que[head].step + 1;
                tail++;
            }if(tx == p && ty == q){
                flag = 1;
                break;
            }//到达终点
        }
        if(flag){
            break;
        }
        head++;
     }
     
}
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> map[i][j];
        }
    }
    cin >> sx >> sy >> p >> q;
    bfs();
    cout << que[tail-1].step;
    return 0;
}