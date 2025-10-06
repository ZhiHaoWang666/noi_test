#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	int x = 1;
	cin >> n;
	int var[n][n];

	// for(int i = 0;i<n;i++){
	// 	for(int j = 0;j<n;j++){
	// 		var[i][j] = 0;
	// 	}
	// }

	// for(int k = 0;k<n;k++){
	// 	var[k][k] = 1;
	// }

	// for(int l = 0;l<n;l++){
	// 	for(int m = 0;m<n;m++){
	// 			cout << var[l][m] << endl;
	// 	}				
	// }

	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			var[i-j][j] = x;			
		}
		x++;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout <<setw(3)<< var[i][j];	
		}
	}


	return 0;
}