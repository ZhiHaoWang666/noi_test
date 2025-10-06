#include<bits/stdc++.h>
using namespace std;
int a[30][30];
int n;
int fy[5]={0,-1,0,1,0};
int fx[5]={0,0,-1,0,1};
int r[400][3];
void print(int k){
	for(int i=1;i<k;i++){
		cout<<"("<<r[i][1]<<","<<r[i][2]<<")"<<"->";
	}
	cout<<"("<<n<<","<<n<<')'<<endl;
}
void dfs(int x,int y,int k){
	r[k][1]=x;
	r[k][2]=y;
	if(x==n&&y==n){
		print(k);
		exit(0);
	}
	int tx,ty;
	for(int i=1;i<=4;i++){
		tx=x+fx[i];
		ty=y+fy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&a[tx][ty]==0){
			a[tx][ty]=1;
			dfs(tx,ty,k+1);
			a[tx][ty]=0;
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
	a[1][1]=1;
	dfs(1,1,1);
	return 0;
}
