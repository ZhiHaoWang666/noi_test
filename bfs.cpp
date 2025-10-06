#include<iostream>
#define N 110
#define S 10110
using namespace std;

int a[N][N],q[S][3];
int n,m;

int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};

int tx,ty;
int k = 1;

int head = 1,tail = 1;

int main(){
	cin >> n >> m;
	a[1][1] = k;
	k++;
	q[1][1] = 1;
	q[1][2] = 1;

	while(head<=tail){
		for(int i=1;i<=4;i++){
			tx = q[head][1]+fx[i];
			ty = q[head][2]+fy[i];
			if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&a[tx][ty]==0){
				tail++;
				q[tail][1] = tx;
				q[tail][2] = ty;
				a[tx][ty] = k;
				k++;
			}
		}
		head++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}