#include<bits/stdc++.h>
using namespace std;
//˼·���������������ĸ�������������������߹��ĵ���Ϊtrue��
//�ݹ��������򣬵ݹ���������˵���һ��������ǣ����ݵ���һ��״̬ 
int n,c;//c������¼���Ǵ�ӡ��·����   
int r[30][3];//�����洢�߹�������·��
bool f[10][10]={false}; //������¼ÿһ�����Ƿ��Ѿ��߹�
//������������
int fy[5]={0,1,0,-1,0};
int fx[5]={0,0,1,0,-1};
//������ӡ·���ĺ���
void print(int k){
	c++;
	cout<<c<<":";
	for(int i=1;i<k;i++){
		cout<<r[i][1]<<","<<r[i][2]<<"->";
	}
	cout<<n<<','<<n<<endl;
}
void dfs(int x,int y,int k){
	//���߹��ĵ��¼��r������
	r[k][1]=x;
	r[k][2]=y;
	//�ж��Ƿ񵽴��յ�
	if(x==n&&y==n){
		print(k);
		return;
	}
	int tx,ty;
	for(int i=1;i<=4;i++){
		tx=x+fx[i];
		ty=y+fy[i];
		//�ж�Ҫ̽����������Ƿ�ɴ�
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&f[tx][ty]==false){
			//��ǵ��Ѿ��߹�
			f[tx][ty]=true;
			//�ݹ��������
			dfs(tx,ty,k+1);
			//�ݹ�����󣬻��ݵ���һ��״̬
			f[tx][ty]=false;
			
		}
	}
}
int main(){
	cin>>n;
	//���1��1���߹�
	f[1][1]=true;
	//��1,1�㿪ʼ���еݹ�
	dfs(1,1,1);
	
	return 0;
}

