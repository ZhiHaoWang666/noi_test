#include<iostream>
using namespace std;

int func(int i){
	if(i == 1){
		return 1;
	}else{
		return (func(i-1)+i);
	}

}

int main(){
	int n;
	cin >> n;
	int res;
	res = func(n);
	cout << res;
	return 0;
}

//将循环改为递归