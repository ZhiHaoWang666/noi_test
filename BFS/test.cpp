#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int MAXN = 1010; 

int head[MAXN];      //第一条边的索引
int vis[MAXN];      //标记每个点是否被访问过
int d[MAXN];       //储存每个节点到起点的距离
int p[MAXN];       //储存每个节点的前驱节点
struct Edge
{
    /* data */
    int to,nxt;
}e[MAXN*2]; //在这里e数组用来存储图中所有边的信息，包含两个整型成员变量to和nxt
int cnt = 0;
queue<int> Q;
//添加到边的图中
void addEdge(int u,int v){
    e[cnt].to = v;
    e[cnt].nxt = head[u];
    head[u] = cnt++;
}
void bfs(int u){
    while (!Q.empty())Q.pop(); //将队列清空
    Q.push(u);
    vis[u] = 1;
    d[u] = 0;
    p[u] = -1;
    while(!Q.empty()){
        u = Q.front();    //获取队列中的第一个元素
        Q.pop();
        for(int i = head[u];i!=-1;i=e[i].nxt){
            int v = e[i].to;
            if(!vis[v]){
                Q.push(v);
                vis[v] = 1;
                d[v] = d[u]+1;
                p[v] = u;
            }
        }
    }
}
void print(int start,int end){
    if(start == end){
        cout << start;
        return ;
    }
    if(p[end] == -1){
        cout << "no path" << start<<"to"<<end<<"erro";
        return ;
    }
    vector<int> path;
    for(int v=end;v!=-1;v = p[v]){
        path.push_back(v);
    }
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++){
        cout << path[i] <<" "<< "->"<<" ";
    }
    cout << endl;

}
int main(){
    fill(head,head+MAXN,-1);
    int s,e;
    cin >> s >> e;
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,3);
    addEdge(3,4);
    bfs(0);
    print(s,e);
    return 0;
}