#include<iostream>
using namespace std;

const int N = 1010;
const int M  =  3;

int n,m,ans;
bool s[N][N]={0};
int r[N][M];
int fx[3] = {0,1,0};
int fy[3] = {0,0,1};

void print(int k){
    ans ++;
    cout << ans << " ";
    for(int i=0;i<k;i++){
        cout << r[i][1] << "," << r[i][2] << "->"; 
    }
    cout << n << "," << m << endl;
}

void back_look(int x,int y,int k){
    cout << "3" << endl;
    r[k][1] = x;
    r[k][2] = y;
    if(x == n && y == m){
        print(k);
        return ;
    }
    int tx,ty;
    for(int i=1;i<=2;i++){
        cout << "2" << endl;
        tx = x+fx[i];
        ty = y+fy[i];
        if(tx >= 1 && tx <= n && ty >= 1 &&ty <= m&&s[tx][ty] == 0){
            cout << "1" << endl;
            s[tx][ty] = 1;
            back_look(tx,ty,k+1);
            s[tx][ty] = 0;
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    s[1][1] = 1;
    back_look(1,1,1);
    cout << "4" << endl;
    return 0;
}