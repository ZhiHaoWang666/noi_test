#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	// int n,age[101];
	// double res = 0;
	// int value = 0;
	// cin >> n;

	// for(int  = 1;i>=n;i++){
	// 	cin >> age[i];
	// 	value += age[i];
	// }
	// res = value/n;
	// cout << res;
	// return 0;
	int n, age, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{ 
		cin >> age;
		sum += age;
	}
	float aver = 1.0*sum / n;
	printf("%.2f", aver);

}