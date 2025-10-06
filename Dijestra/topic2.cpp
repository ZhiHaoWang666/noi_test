#include<iostream>
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 1101;
int q[N][N];
int dis[N];
bool vis[N];
int n,s;
int a,b,l;
int x,y;
int main(){
    cin >> n >> s;
    for(int i=0;i<s;i++){
        cin >> a >> b >> l;
        q[a][b]=l;
        q[b][a]=l;
    }
    cin >> x >> y;
    for(int i=1;i<=n;i++){
        dis[i] = INF;
    }
    dis[x] = 0;
    for(int i=1;i<=n;i++){
        int mi = -1;
        for(int j=1;j<=n;j++){
            if(vis[j] == 0&&(mi == -1 || dis[j]<dis[mi])){
                mi = j;
            }
        }
        vis[mi] = 1;
        for(int j=1;j<=n;j++){
            if(vis[j]==0&&q[mi][j]!=0&&dis[mi]+q[mi][j]<dis[j]){
                dis[j] = dis[mi]+q[mi][j];
            }
        }
    }
   
    if(dis[y] != INF){
        cout << dis[y]<<" ";
    }else{
        cout <<"No Path" << endl;
    }

    
    return 0;
}