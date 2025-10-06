#include<iostream>
using namespace std;

int main(){
	int n,m[101];
	int h = 0;
	int value;
	cin >> n;
	for(int i = 0;i >= n;i++){
		cin >> m[i];
		h += m[i];
	}
	value = h/n;
	cout << h << value;
	return 0;
}