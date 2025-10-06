// #include<iostream>
// #include<cstring>
// #include<cstdio>
// using namespace std;
// char s1[10];
// char s2[10];
// int len;
// inline int find(char ch)
// {
//     for(int i=0;i<len;i++)
//     {
//         if(s1[i]==ch) return i;
//     }
// }
// void dfs(int l1,int r1,int l2,int r2)
// {
//     int m=find(s2[r2]);
//     cout<<s2[r2];
//     if(m>l1) /*具有左子树*/dfs(l1,m-1,l2,r2-r1+m-1);//r1-m为右子树结点数 
//     if(m<r1) /*具有右子树*/dfs(m+1,r1,l2+m-l1,r2-1);//m-l1为左子树节点数
// }
// int main()
// {
//     cin>>s1;
//     cin>>s2;
//     len=strlen(s1);
//     dfs(0,len-1,0,len-1);
// }
#include<iostream>
using namespace std;

const int N = 110;

int n,m;
int p1,p2;
int head = 1,tail = 1;
int map[N][N];
int queue[N][3];
bool f[N][N];
int fy[5] = {0,1,0,-1,0};
int fx[5] = {0,0,1,0,-1};


int bfs(){
    queue[1][1] = p1;
    queue[1][2] = p2;
    f[p1][p2] = 1;
    int tx,ty;
    while (head<=tail) {
        for(int i=1;i<=4;i++){
            tx = queue[head][1]+fx[i];
            ty = queue[head][2]+fy[i];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&f[tx][ty] == 0&&map[tx][ty] <= map[p1][p2]){
                tail ++;
                queue[tail][1] = tx;
                queue[tail][2] = ty;
                f[tx][ty] = 1;
            }
        }
        head ++;
    }
    return tail;
}

int main(){
    cin >> n >> m >> p1 >> p2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> map[i][j];
        }
    }
    int res = bfs();
    cout << res;
    return 0;
}
