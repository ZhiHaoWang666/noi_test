#include <iostream>
#include <string>
using namespace std;
const int INF = 0x3f3f3f3f;
int dis[130];
bool vis[130];
int a[130][130];
int n=52,m,l;
char x,y;
string s = "";  
int main(){
    cin >> m;
    for(int i=1;i<=m;i++){
        cin >> x >> y >> l;
        if(a[x][y]==0||l<a[x][y]){
            a[x][y] = l;
            a[y][x] = l;
        }
    }
    for(int j=1;j<=n;j++){
        dis[j] = INF;
    }
    dis['Z'] = 0;
    //拼接字符串之后遍历字符串，最后判断是否有遍
    for(char i='A';i<='Z';i++){
        s+=i;
    }for(char i='a';i<='z';i++){
            s+=i;
    }
    for(int i=1;i<=n;i++){
        int mi = -1;
        for(int j=1;j<=n;j++){
            int p = s[j];
            if(vis[p]==0&&(mi == -1||dis[p]<dis[mi])){
                mi = p;
            }
        }
        vis[mi] = 1;
        for(int j=1;j<=n;j++){
            int p = s[j];
            if(vis[p]==0&&a[mi][p]!=0&&dis[mi]+a[mi][p]<dis[p]){
                dis[p] = dis[mi]+a[mi][p];
            }
        }
    }
    char mi = 'A';
    for(char i = 'B';i<='Y';i++){
        if(dis[i]<dis[mi]){
            mi = i;
        }
    }
    cout << mi << " " << dis[mi] << endl;
    return 0;
}

