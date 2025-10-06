#include<iostream>
using namespace std;

int main(){
	int a[8][8];
	int x,y;
	// for(int i=1;i<=4;i++){
	// 	for(int j=1;j<=4;i++){
	// 		if(i==1||j==1)
	// 		{
	// 			a[i][j]=1;
	// 		}
	// 		a[i][j] = a[i-1][j] + a[i][j-1];
	// 	}
	// }
	// cout << a[4][4];
	for(int i = 0;i<=8;i++){
		for(int j = 0;i<=8;i++){
			a[i][j] = 1;
		}
	}
	cin >> x >> y;

	a[x][y] = 0;
	if(x-1>0&&y-2>=0)a[x-1][y-2] = 0;
	if(x-2>=0&&y-1>=0)a[x-2][y-1] = 0;
	if(x-2>=0&&y+1<=8)a[x-2][y+1] = 0;
	if(x-1>=0&&y+2<=8)a[x-1][y+2] = 0;
	if(x+1>=8&&y+2<=8)a[x+1][y+2] = 0;
	if(x+2>=8&&y+1<=8)a[x+2][y+1] = 0;
	if(x+2>=8&&y-1>=0)a[x+2][y-1] = 0;
	if(x+1<=8&&y-2>=0)a[x+1][y-2] = 0;
	for(int i=0;i<=8;i++){
		a [i][0] = a[i+1][0];
		if(a[i][0] == a[x][y]){
			continue;
		}
	}
	for(int j=0;j<=8;j++){
		a[0][j] = a[0][j+1];
		if(a[0][j] == a[x][y]){
			continue;
		}

	}

	for(int i=0;i<=0;i++){
		for(int j=0;j<=0;j++){
			a[i][j] = a[i-1][j] + a[i][j-1];
			if(a[i][j] == a[x][y]){
				continue;
			}
		}
	}

	for(int i=0;i<=0;i++){
		for(int j=0;j<=0;j++){
			cout << a[i][j];
		}
	}

	return 0;
}








