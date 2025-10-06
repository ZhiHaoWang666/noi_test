#include<bits/stdc++.h>
using namespace std;
//思路：沿着右下左上四个方向深度优先搜索，走过的点标记为true，
//递归其他方向，递归结束，回退到上一步撤销标记，回溯到上一个状态 
int n,c;//c用来记录我们打印的路径数   
int r[30][3];//用来存储走过的所有路径
bool f[10][10]={false}; //用来记录每一个点是否已经走过
//声明方向数组
int fy[5]={0,1,0,-1,0};
int fx[5]={0,0,1,0,-1};
//声明打印路径的函数
void print(int k){
	c++;
	cout<<c<<":";
	for(int i=1;i<k;i++){
		cout<<r[i][1]<<","<<r[i][2]<<"->";
	}
	cout<<n<<','<<n<<endl;
}
void dfs(int x,int y,int k){
	//将走过的点记录到r数组中
	r[k][1]=x;
	r[k][2]=y;
	//判断是否到达终点
	if(x==n&&y==n){
		print(k);
		return;
	}
	int tx,ty;
	for(int i=1;i<=4;i++){
		tx=x+fx[i];
		ty=y+fy[i];
		//判断要探索的这个点是否可达
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&f[tx][ty]==false){
			//标记点已经走过
			f[tx][ty]=true;
			//递归进行搜索
			dfs(tx,ty,k+1);
			//递归结束后，回溯到上一个状态
			f[tx][ty]=false;
			
		}
	}
}
int main(){
	cin>>n;
	//标记1，1点走过
	f[1][1]=true;
	//从1,1点开始进行递归
	dfs(1,1,1);
	
	return 0;
}

