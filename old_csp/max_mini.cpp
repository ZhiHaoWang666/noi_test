#include<iostream>
using namespace std;

int main(){
	int m,n,var[101];
	for(int i = 0;i<=n;i++){
		cin >> var[i];
		if(var[i]>var[i+1]){
			m = var[i+1];
		}if(var[i]<var[i+i]){
			m = var[i];
		}
	}
	cout << m;
	return 0;
}