#include<iostream>
using namespace std;
bool res =false;
int n,s1,s2,e1,e2;
int a[110][110];
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
void search(int x,int y){
    a[x][y]=1;
    int tx,ty;
    for(int i=1;i<5;i++){
        tx=x+fx[i];
        ty=y+fy[i];
    if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&a[tx][ty]==0){
        if(a[tx][ty]==a[e1][e2]){
            res=true;
        }
        else{
            search(tx,ty);
        }
    }
        
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cin>>s1>>s2>>e1>>e2;
    if(a[s1][s2]==1||a[e1][e2]==1){
        cout<<"no";
    }
    else{
        search(s1,s2);    
        if(res==true){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    return 0;
}