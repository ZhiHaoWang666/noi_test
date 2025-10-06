#include<iostream>
using namespace std;

int main(){
	double n,nums[101] = {};
	double sum;
	double res
	for(int i = 1;i<=int(n);i++){
		cin >> nums[i];
		sum += nums[i];
	}
	double res = sum/n;
	cout << res;

	return 0;
}
