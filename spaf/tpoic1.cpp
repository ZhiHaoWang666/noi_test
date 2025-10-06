#include<iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 400100;
const int M = 200100;
struct edge{
    int from;
    int to;
    int len;
    int next;
};
edge a[N];
queue<int>q;
int pre[M];
int dis[M];
bool vis[M];
int n,m,s,t,x,y,l,k;

void add(int u,int v,int l){
    k++;
    a[k].from = u;
    a[k].to = v;
    a[k].len = l;
    a[k].next = pre[u];
    pre[u] = k;
}
void spaf(){
    for(int i=1;i<=n;i++){
        dis[i] = INF;
    }
    dis[s] =0;
    vis[s] =1;
    q.push(s);
    while(!q.empty()){
        int head = q.front();
        for(int i=pre[head];i!=0;i=a[i].next){
            int to = a[i].to;
            if(dis[head]+a[i].len<dis[to]){
                dis[to] = dis[head]+a[i].len;
                if(vis[to]==0){
                    q.push(to);
                    vis[to] = 1;
                }
            }
        }
        vis[head] = 0;
        q.pop();
    }
}
int main(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> x >> y >> l;
        add(x,y,l);
        add(y,x,l);
    }
    cin >> s >> t;
    spaf();
    if(dis[t]!=INF){
        cout << dis[t] << endl;
    }else{
        cout << "No Path" << endl;
    }
    return 0;
}