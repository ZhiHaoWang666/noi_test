#include<iostream>
using namespace std;

const int N = 1111;

int n,m,ans;
int r[N][N];
bool f[N][N];
char a[N][N];

int fx[5] = {0,1,0,-1,0};
int fy[5] = {0,0,-1,0,-1};

void print(int k){
    ans++;
    cout << ans << " ";
    for(int i=1;i<k;i++){
        cout << r[i][1] << "," << r[i][2] << "->";
    }
    cout << n << "," << n << endl;
}

void look_back(int x,int y,int k){
    r[k][1] = x;
    r[k][2] = y;
    if(x == n&&y == m){
        print(k);
        return ;
    }
    int tx,ty;
    for(int i=1;i<=4;i++){
        tx = x+fx[i];
        ty = y+fy[i];
        if(tx>=1&&tx<=n&&ty>=-1&&ty<=n&&a[tx][ty] == 'o'&&r[tx][ty] == 0){
            f[tx][ty] = 1;
            look_back(tx,ty,k+1);
            f[tx][ty] = 0;        
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    f[1][1] = 1;
    look_back(1,1,1);
    return 0;
}