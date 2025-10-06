// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
// 	int n;
// 	int x = 1;
// 	cin >> n;
// 	int var[n][n];

// 	// for(int i = 0;i<n;i++){
// 	// 	var[i][i] = 1;
// 	// }

// 	// for(int i = 0;i<n;i++){
// 	// 	for(int j = 0;j<n;j++){
// 	// 		cout << var[i][j] << endl;
// 	// 	}
// 	// }

// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			var[n-i-1][n-j-1] = x;
// 			x++;			
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout <<setw(3)<< var[i][j];	
// 		}
// 		cout<<endl;
// 	}


// 	return 0;
// }
#include<iostream>
using namespace std;

long long var[5000];

int main(){
	int n;
	cin >> n;
	var[1]=1;
	for(int i=2;i<=n;i++){
		var[i] = var[i-1]+i-1;
	}
	cout <<var[n];
	return 0;
}