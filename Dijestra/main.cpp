#include <iostream>
using namespace std; 
const int INF = 0x3f3f3f3f;
const int N = 60;
int a[N][N];   //邻接矩阵
int dis[N];    //从出发点开始到每一个点的最短路径
bool vis[N];   //标记点
int n,s;     
int main() {
    cin >> n >> s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    //初始化数组，奖券全部设置为最大值
    for(int i=1;i<=n;i++){
        dis[i] = INF;
    }
    dis[s] = 0;    //出发点的长度为0
    for(int i=1;i<=n;i++){
        int mi = -1;    //将其初始化为-1 不能为1，如果为1的话，起始点的长度为0，会导致死循环（会认为永远是最小的）
        for(int j=1;j<=n;j++){
            if(vis[j] == 0&&(mi == -1 || dis[j]<dis[mi])){
                /*这快代码的意思就是没有被标记过，同时若如果mi已经为最小值，
                或者已经找到最短路径，则标记*/
                mi = j;
            }
        }
        vis[mi] = 1;
        for(int j=1;j<=n;j++){
            if(vis[j] == 0 &&a[mi][j]!=0&&dis[mi]+a[mi][j]<dis[j]){
                dis[j] = dis[mi]+a[mi][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=s){    //如果不是出发点
            if(dis[i] != INF){
                cout << dis[i] << " ";
            }else{
                cout << -1 << " ";
            }
        }
    }
    return 0;
}