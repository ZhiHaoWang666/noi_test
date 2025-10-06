#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int MAXN = 1010;

vector<int> adj[MAXN];
int vis[MAXN];
int d[MAXN];
int p[MAXN];
queue<int> Q;

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(int u){
    while (!Q.empty())
    {
        /* code */
        Q.pop();
    }
    Q.push(u);
    vis[u] = -1;
    d[u] = 0;
    p[u] = -1;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i];
            if(!vis[v]){
                vis[v] = 1;
                d[v] = d[u] + 1;
                p[v] = u;
                Q.push(v);
            }
        }
    }
}
void print(int start,int end){
    if(start == end){
        cout << start;
        return;
    }
    if(p[end] == -1){
        cout << "no path" << start<<
        "to" << end << "erro";
        return;
    }
    vector<int> path;
    for(int v = end; v!= -1; v = p[v]){
        path.push_back(v);
    }
    reverse(path.begin(),path.end());
    for(int i = 0; i < path.size(); i++){
        cout << path[i] << " " << "->" << " ";
    }
}
int main(){
     int s,e;
     cin >> s >> e;
     int n,m;
     cin >> n >> m;
     for(int i = 0; i < m; i++){
         int u,v;
         cin >> u >> v;
         addEdge(u,v);
     }
     bfs(s);
     print(s,e);
    return 0;
}