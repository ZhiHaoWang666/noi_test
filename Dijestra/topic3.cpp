#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 10010;
int a[N][N];
double dis[N];
bool vis[N];
int n,m;
int x,y,z;
int A,B;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }
    cin >> A >> B;
    for(int i=1;i<=n;i++){
        dis[i] = INF;
    }
    dis[A] = 100;
    for(int i=1;i<=n;i++){
        int mi=-1;
        for(int j=1;j<=n;j++){
            if(vis[j] == 0&&(mi == -1||dis[j]<dis[mi])){
                mi = j;
            }
        }
        vis[mi] = 1;
        for(int j=1;j<=n;j++){
            if(vis[j]==0&&a[mi][j]!=0&&dis[mi]/(1-a[mi][j]*0.01)<dis[j]){
                dis[j] = dis[mi]/(1-a[mi][j]*0.01);
            }
        }
    }
    cout << fixed << setprecision(8) << dis[B] << endl;
    return 0;
}