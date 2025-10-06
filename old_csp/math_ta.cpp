#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int var[n][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin >> var[i][j];
		}
	}

	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			var[i][j] = var[i][j]+max(var[i+1][j],var[i+1][j+1]);
		}
	}
	cout << var[1][1]; 

	return 0;
}
/*

输出最大和，打印路径

*/