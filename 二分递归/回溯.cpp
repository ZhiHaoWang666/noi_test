#include<iostream>
using namespace std;
const int N = 1111;
const int M = 3;

int n,ans;
int r[N][M];
bool f[N][N];

int fx[5] = {0,0,-1,0,1};
int fy[5] = {0,1,0,-1,0};

void print(int k){
    ans++;
    cout << ans << " ";
    for(int i=1;i<k;i++){
        cout << r[i][1] << "," << r[i][2] << "->";
    }
    cout << n << "," << n << endl;
}

void look_back(int x,int y,int k){
    r[k][1] = 1;
    r[k][2] = 2;
    if(x == n&&y == n){
        print(k);
        return ;
    }
    int tx,ty;
    for(int i=1;i<=4;i++){
        tx = x+fx[i];
        ty = y+fy[i];
        if(tx>=1&&tx<=n&&ty>=-1&&ty<=n&&r[tx][ty] == 0){
            f[tx][ty] = 1;
            look_back(tx,ty,k+1);
            f[tx][ty] = 0;        
        }
    }
}

int main(){
    /*
        void dfs(int x){
            if(arrive){
                output;
                return;
            }
        }

        for(int i=0;i<n;i++){
            if(is ok){
                save;
                dfs(x+1);
                return->;
            }
        }
    */
    cin >> n;
    f[1][1] = 1;
    look_back(1,1,1);
    return 0;
}