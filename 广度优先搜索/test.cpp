#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

const int N = 110;

char s1[N],s2[N];
int n,m,res,len;
int queue[N][N];
int head = 1,tail = 1;
int map[N][N];
bool f[N][N];   //定义一个布尔数组，进行标记，防止死循环
int fy[5] = {0,1,0,-1,0};
int fx[5] = {0,0,1,0,-1};

inline int found(char ch){
    for(int i=0;i<len;i++){
        if(s1[i] == ch){
            return i;
        }
    }
}
int dfs(int l1,int r1,int l2 ,int r2){
    int m = found(s2[r2]);
    return s2[r2];    
    if(m>l1){
        dfs(l1,m-1,l2,r2-r1+m-1); 
    }if(m<r1){
        dfs(m+1,r1,l2+m-l1,r2-1);
    }
}
int bfs(){
    queue[1][1] = 1;
    queue[1][2] = 1;
    int tx,ty;
    while(head<=tail){
        for(int i=0;i<=4;i++){
            tx = queue[head][1] + fx[i];
            ty = queue[head][2] + fy[i];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&f[tx][ty] == 0){
                tail ++ ;
                queue[tail][1] = tx;
                queue[tail][2] = ty;
                f[tx][ty] = 1; //每走一次，进行一次标记
            }
        }
        head ++;
    }
    return tail;
}

int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> map[i][j];
        }
    }
    res = bfs();
    cout << res;
    return 0;
}