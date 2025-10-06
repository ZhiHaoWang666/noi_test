#include <iostream>
using namespace std;;
const int N = 1010;
const int INF = 0x3f3f3f3f;
int n,m,s,t,x,y,len; 
int a[N][N];
int dis[N];
int vis[N];  //n个城市m条道路 s为起点 t为终点
int b[N];
void print(int k){
    if(b[k]!=0){
        print(b[k]);
    }
    cout << k << " ";
}
int main(){
    cin >> n >> m >> s >> t;
    for(int i=1;i<=n;i++){
        cin >> x >> y >> len;
        if(a[x][y] == 0 || len<a[x][y]){
            a[x][y] = len;
            a[y][x] = len;
        }
    }
    for(int i=1;i<=n;i++){
        dis[i] = INF;
    }
    dis[s] = 0;
    //以上全为初始化操作
    for(int i=1;i<=n;i++){
        int mi = -1;
        for(int j=1;j<=n;j++){
            if(vis[j] == 0 && (mi == -1 || dis[j]<dis[mi])){
                mi = j;
            }
        }
        vis[mi] = 1;
        for(int j=1;j<=n;j++){
            if(vis[j] == 0&&a[mi][j]!=0&&dis[mi]+a[mi][j]<dis[j]){
                dis[j] = dis[mi]+a[mi][j];
                b[j] = mi;
            }
        }
    }
    if(dis[t] != INF){
        cout << dis[t] << endl;
        print(t);
    }else{
        cout << "can'tarrive" << endl;
    }
    return 0;
}