#include<iostream>
using namespace std;

const int N = 110;
bool res = false;
int s1,s2,e1,e2;
int n;
int a[N][N];

void search(int x,int y){
    if (a[x][y]==a[e1][e2]){
        res=true;
    }
    else
    {
        /* code */
        a[x][y] = 1;
        if(y+1<=n&&a[x][y+1] == 0){//上
            search(x,y+1);
        }if(x+1<=n&&a[x+1][y] == 0){//左
            search(x+1,y);
        }if(y-1>=1&&a[x][y-1] == 0){//下
            search(x,y-1);
        }if(x-1<=1&&a[x-1][y] == 0){//右
            search(x-1,y);
        }
    }
    
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cin >> s1 >> s2 >> e1 >> e2;
    if(a[s1][s2] == 1 || a[e1][e2] == 1){
        cout << "no";
    } else{
        search(s1,s2);
        if(res == true){
            cout << "yes";
        }else{
            cout << "no";
        }
    }
   return 0;
}