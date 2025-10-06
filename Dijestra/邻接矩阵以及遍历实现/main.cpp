#include<iostream>
using namespace std;
const int N = 10000;
struct edge{
    int from,to,next;
};

edge a[N];
int pre[N];
int n,e,k;
//邻接表的遍历
void add(int u,int v){
    k++;a[k].from = u;
    a[k].to = v;
    a[k].next = pre[u];
    pre[u] = k;
}
int main(){
    int x,y;
    cin >> n >> e;
    for(int i=1;i<=e;i++){
        cin >> x >> y;
        add(x,y);
    }
    for(int i=1;i<=n;i++){
        for(int j=pre[i];j!=0;j=a[j].next){
            cout << i << "->" << a[j].to << endl;
        }
    }
    return 0;
}