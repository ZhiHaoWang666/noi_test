#include <iostream>
using namespace std;;
const int N=10000;
int pre[N];
int n,e,k;
struct edge{
    int from,to,next;
};
edge a[N];
struct node{
    int x,y;
};
node m[N];
void add(int u,int v){
    k++;
    a[k].from=u;
    a[k].to=v;
    a[k].next=pre[u];
    pre[u]=k;
}
int main() {
    cin >> n >> e;
    for(int i=1;i<=e;i++){
        //cin >> x >> y;
        add(x,y);
    }

    return 0;
}