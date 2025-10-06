#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int var[n][n];
	int b[110][3],k = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin >> var[i][j];
	}

	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			var[i][j] = var[i][j]+max(var[i+1][j],var[i+1][j+1]);
		}
	}
	int i=1;
	int j=1;

	b[k][1] = 1;
	b[k][2] = 1;
			
	while(i<n){
		k++;
		if(b[i+1][j]>b[i+1][j+1]){
			b[k][1] = i+1;
			b[k][2] = j;
			i++;
		}else{
			b[k][1] = i+1;
			b[k][2] = j+1;
			i++;
			j++;
		}
	}
	for(int d=0;d<k;d++){
		for(int p=0;p<k;p++){
			cout << b[d][p]; 
		}
	}
	cout << var[1][1]; 

	return 0;
}
}
